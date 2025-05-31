#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 读取文件内容到字符串
char* readFile(const char* filePath) {
    FILE* file = fopen(filePath, "r");
    if (file == NULL) {
        printf("无法打开文件，可能是文件路径错误或者文件不存在。\n");
        return NULL;
    }

    // 动态分配内存以适应文件大小
    char* content = NULL;
    size_t size = 0;
    size_t capacity = 1024;
    content = (char*)malloc(capacity);
    if (content == NULL) {
        fclose(file);
        printf("内存分配失败。\n");
        return NULL;
    }

    char buffer[1024];
    while (1) {
        size_t read = fread(buffer, 1, sizeof(buffer), file);
        if (read == 0) {
            if (ferror(file)) {
                fclose(file);
                free(content);
                printf("读取文件时发生错误。\n");
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
                printf("内存重新分配失败。\n");
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

// 释放字符串内存
void freeMemory(char* str) {
    if (str!= NULL) {
        free(str);
    }
}

// 在字符串中替换所有指定单词
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

// 将字符串保存到文件
void saveFile(const char* filePath, const char* content) {
    if (content == NULL) {
        printf("没有内容可保存。\n");
        return;
    }
    FILE* file = fopen(filePath, "w");
    if (file == NULL) {
        printf("无法打开输出文件，可能是路径错误。\n");
        return;
    }
    fputs(content, file);
    fclose(file);
    printf("文件保存成功。\n");
}

// 主函数，实现菜单操作
int main() {
    char inputFilePath[MAX_LENGTH];
    char outputFilePath[MAX_LENGTH];
    char oldWord[MAX_LENGTH];
    char newWord[MAX_LENGTH];
    char* content = NULL;
    int choice;

    do {
        printf("菜单：\n");
        printf("1. 打开文件并查找单词\n");
        printf("2. 替换单词\n");
        printf("3. 保存文件\n");
        printf("4. 退出\n");
        printf("请选择：");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("请输入要打开的文件路径：");
                scanf("%s", inputFilePath);
                content = readFile(inputFilePath);
                if (content!= NULL) {
                    printf("请输入要查找的单词：");
                    scanf("%s", oldWord);
                    if (strstr(content, oldWord)!= NULL) {
                        printf("在文件中找到了单词 %s。\n", oldWord);
                    } else {
                        printf("在文件中未找到单词 %s。\n", oldWord);
                    }
                }
                break;
            case 2:
                if (content == NULL) {
                    printf("请先打开文件并查找单词。\n");
                } else {
                    printf("请输入替换单词：");
                    scanf("%s", newWord);
                    char* newContent = replaceWords(content, oldWord, newWord);
                    if (newContent!= NULL) {
                        freeMemory(content);
                        content = newContent;
                        printf("单词替换完成。\n");
                    } else {
                        printf("替换单词时出错。\n");
                    }
                }
                break;
            case 3:
                if (content == NULL) {
                    printf("请先替换单词。\n");
                } else {
                    printf("请输入保存文件的路径：");
                    scanf("%s", outputFilePath);
                    saveFile(outputFilePath, content);
                }
                break;
            case 4:
                if (content!= NULL) {
                    freeMemory(content);
                }
                printf("退出程序。\n");
                break;
            default:
                printf("无效的选择，请重新输入。\n");
        }
    } while (choice!= 4);

    return 0;
}