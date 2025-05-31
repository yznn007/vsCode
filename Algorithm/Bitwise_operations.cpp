#include<bits/stdc++.h>
using namespace std;
// 位运算
void swap(int &a, int &b)
{
    // 交换两个数
    a = a ^ b;  //a = a ^ b;
    b = a ^ b;  //b = (a ^ b) ^ b = a;
    a = a ^ b;  //a = (a ^ b) ^ a = b;
    /*
    a = 1011(11)
    b = 0110(6)
    a ^ b = 1101(13)
    b = (a ^ b) ^ b = 1011(11)
    a = (a ^ b) ^ a = 0110(6)
    */
}
void right_one(int &a)
{
    // 获取最右侧的1
    a = a & (~a + 1);
}
int main()
{

    return 0;
}