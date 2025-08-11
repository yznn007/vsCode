#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
// 逆序对问题：在一个数组中，左边的数如果比右边的数大，则这两个数够成一个逆序对，请打印所有的逆序对
void merge(int *a,int l,int mid,int r)
{
    int *temp = new int[r-l+1];
    int i = 0;
    int pl = l;
    int pr = mid + 1;
    while(pl <= mid && pr <= r)
    {
        if(a[pl]>a[pr])
        {
            temp[i++] = a[pl++];
            cout << a[pl] << " " << a[pr] << endl;
        }
    } 
    while(pl <= mid) temp[i++] = a[pl++];
    while(pr <= r) temp[i++] = a[pr++];
    for(i = 0; i < r-l+1; i++) a[l + i] = temp[i];
}
void process(int *a,int l,int r)
{
    if(l == r) return;
    int mid = l + (r - l) / 2;
    process(a, l, mid);
    process(a, mid + 1, r);
    merge(a,l,mid,r);
}
int main()
{
    int n;
    cin >> n;
    // vector<int> a[n];
    int *a = new int [n];
    for(int i = 0; i < n; i++) cin >> a[i];// = i;
    process(a,0,n-1);
    return 0;
}