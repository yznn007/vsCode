#include<stdio.h>
const int MaxSize = 10;
typedef struct 
{
    int data[10];
    int length;

}SqList;
void InitList(SqList L,int i,int e)
{
    for(int j = 10 ; j >= i ; j-- )
        L.data[j] = L.data[j-1];
    L.data[i-1] = e;

}
int main()
{
    SqList L;
    InitList(L,3,3);

    return 0;
}