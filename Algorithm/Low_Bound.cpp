#include<bits/stdc++.h>
using namespace std;
// 二分函数：找出大于等于某数的第一个数，查找的数组必须有序
int main()
{
    int n = 5;
    // cin >> n;
    int a[n] = {5,3,5,2,1};
    sort(a,&a[n]);
    int * t = lower_bound(a,&a[n],3); //数组中大于等于3的第一个数
    if(t!=&a[n]) cout << *t << endl;//找不到会返回边界（n）
    int * t2 = upper_bound(a,&a[n],3); //数组中大于3的第一个数
    if(t2!=&a[n]) cout << *t2 << endl;//找不到会返回边界（n）
    return 0;
}