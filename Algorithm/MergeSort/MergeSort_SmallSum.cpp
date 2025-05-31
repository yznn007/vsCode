#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
//小和问题：在一个数组中，每一个数左边比当前数小的数累加起来，叫做这个数组的小和，求一个数组的小和
int merge(int *a,int l,int mid,int r)
{
    int *temp = new int[r-l+1];
    int i = 0;
    int pl = l;
    int pr = mid + 1;
    int sum = 0;
    while(pl <= mid && pr <= r)
    {
        if(a[pl] < a[pr])
        {
            sum += a[pl] * (r - pr + 1);
            temp[i++] = a[pl++];
        }
        else temp[i++] = a[pr++];
    }
    while(pl <= mid) temp[i++] = a[pl++];
    while(pr <= r) temp[i++] = a[pr++];
    for(i = 0; i < r-l+1; i++) a[l + i] = temp[i];
    delete[] temp;
    return sum;
}
int process(int *a,int l,int r)
{
    int sum = 0;
    if(l == r) return 0;
    int mid = l + (r - l) / 2;
    sum += process(a, l, mid) + process(a, mid + 1, r) + merge(a, l, mid, r);
    return sum;
}
// 题解：反向思考，每一个数右边每有一个比当前数大的数，该数累加一次
int main()
{
    int n,sum = 0;
    cin >> n;
    int *a = new int [n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sum = process(a,0,n-1);
    cout << "The sum of small and large numbers is " << sum << endl;
    delete[] a;
    return 0;
}
