#include <stdio.h>

#define MAX_SIZE 100

// 顺序表结构体
typedef struct {
    int data[MAX_SIZE]; // 存储数据的数组
    int length;         // 顺序表的当前长度
} SqList;

// 删除顺序表中的重复元素
int removeDuplicates(SqList *list) {
    if (list->length == 0) return 0;
    
    int uniqueIndex = 0;
    int i;
    for (i = 1; i < list->length; i++) {
        if (list->data[i] != list->data[uniqueIndex]) {
            uniqueIndex++;
            list->data[uniqueIndex] = list->data[i];
        }
    }
    
    list->length = uniqueIndex + 1; // 更新顺序表的长度
    return list->length;
}

int main() {
    SqList list;
    list.length = 0;
    
    // 读取输入
    while (scanf("%d", &list.data[list.length]) != EOF) {
        list.length++;
    }
    
    int length = removeDuplicates(&list);
    printf("%d\n", length);
    
    return 0;
}