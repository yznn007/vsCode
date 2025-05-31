#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��ȡ�ļ����ݵ��ַ���
char* readFile(const char* filePath) {
    FILE* file = fopen(filePath, "r");
    if (file == NULL) {
        printf("�޷����ļ����������ļ�·����������ļ������ڡ�\n");
        return NULL;
    }

    // ��̬�����ڴ�����Ӧ�ļ���С
    char* content = NULL;
    size_t size = 0;
    size_t capacity = 1024;
    content = (char*)malloc(capacity);
    if (content == NULL) {
        fclose(file);
        printf("�ڴ����ʧ�ܡ�\n");
        return NULL;
    }

    char buffer[1024];
    while (1) {
        size_t read = fread(buffer, 1, sizeof(buffer), file);
        if (read == 0) {
            if (ferror(file)) {
                fclose(file);
                free(content);
                printf("��ȡ�ļ�ʱ��������\n");
                return NULL;
            }
            break;
        }
        if (size + read > capacity) {
            capacity = capacity * 2;
            if (size + read > capacity) {
                capacity = size + read;
            }
            content = (char*)realloc(content, capacity);
            if (content == NULL) {
                fclose(file);
                free(content);
                printf("�ڴ����·���ʧ�ܡ�\n");
                return NULL;
            }
        }
        memcpy(content + size, buffer, read);
        size += read;
    }
    fclose(file);
    content = (char*)realloc(content, size + 1);
    content[size] = '\0';
    return content;
}

// �ͷ��ַ����ڴ�
void freeMemory(char* str) {
    if (str!= NULL) {
        free(str);
    }
}

// ���ַ������滻����ָ������
char* replaceWords(char* content, const char* oldWord, const char* newWord) {
    if (content == NULL || oldWord == NULL || newWord == NULL) {
        return NULL;
    }
    char* result = NULL;
    size_t resultLen = 0;
    size_t oldLen = strlen(oldWord);
    size_t newLen = strlen(newWord);
    char* pos = content;

    while (*pos) {
        char* match = strstr(pos, oldWord);
        if (match == pos) {
            size_t partLen = match - pos;
            result = (char*)realloc(result, resultLen + partLen + newLen + 1);
            if (result == NULL) {
                return NULL;
            }
            strncat(result + resultLen, pos, partLen);
            resultLen += partLen;
            strncat(result + resultLen, newWord, newLen);
            resultLen += newLen;
            pos += partLen + oldLen;
        } else {
            size_t partLen = strlen(pos);
            result = (char*)realloc(result, resultLen + partLen + 1);
            if (result == NULL) {
                return NULL;
            }
            strncat(result + resultLen, pos, partLen);
            resultLen += partLen;
            pos += partLen;
        }
    }
    if (result) {
        result[resultLen] = '\0';
    }
    freeMemory(content);
    return result;
}

// ���ַ������浽�ļ�
void saveFile(const char* filePath, const char* content) {
    if (content == NULL) {
        printf("û�����ݿɱ��档\n");
        return;
    }
    FILE* file = fopen(filePath, "w");
    if (file == NULL) {
        printf("�޷�������ļ���������·������\n");
        return;
    }
    fputs(content, file);
    fclose(file);
    printf("�ļ�����ɹ���\n");
}

// ��������ʵ�ֲ˵�����
int main() {
    char inputFilePath[MAX_LENGTH];
    char outputFilePath[MAX_LENGTH];
    char oldWord[MAX_LENGTH];
    char newWord[MAX_LENGTH];
    char* content = NULL;
    int choice;

    do {
        printf("�˵���\n");
        printf("1. ���ļ������ҵ���\n");
        printf("2. �滻����\n");
        printf("3. �����ļ�\n");
        printf("4. �˳�\n");
        printf("��ѡ��");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("������Ҫ�򿪵��ļ�·����");
                scanf("%s", inputFilePath);
                content = readFile(inputFilePath);
                if (content!= NULL) {
                    printf("������Ҫ���ҵĵ��ʣ�");
                    scanf("%s", oldWord);
                    if (strstr(content, oldWord)!= NULL) {
                        printf("���ļ����ҵ��˵��� %s��\n", oldWord);
                    } else {
                        printf("���ļ���δ�ҵ����� %s��\n", oldWord);
                    }
                }
                break;
            case 2:
                if (content == NULL) {
                    printf("���ȴ��ļ������ҵ��ʡ�\n");
                } else {
                    printf("�������滻���ʣ�");
                    scanf("%s", newWord);
                    char* newContent = replaceWords(content, oldWord, newWord);
                    if (newContent!= NULL) {
                        freeMemory(content);
                        content = newContent;
                        printf("�����滻��ɡ�\n");
                    } else {
                        printf("�滻����ʱ����\n");
                    }
                }
                break;
            case 3:
                if (content == NULL) {
                    printf("�����滻���ʡ�\n");
                } else {
                    printf("�����뱣���ļ���·����");
                    scanf("%s", outputFilePath);
                    saveFile(outputFilePath, content);
                }
                break;
            case 4:
                if (content!= NULL) {
                    freeMemory(content);
                }
                printf("�˳�����\n");
                break;
            default:
                printf("��Ч��ѡ�����������롣\n");
        }
    } while (choice!= 4);

    return 0;
}