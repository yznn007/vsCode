#include<iostream>
#include<algorithm>
using namespace std;

int GetMax(int *a,int l,int r) 
{
    if(l == r) return a[l];
    //当递归到最低层的时候，返回l(此时l == r)
    int mid = l + ((r-l) >> 1);
    //创建中值，使用 l + ((r - l) >> 1) 而不是（l + r） >>1 可以避免 l + r 爆int
    int lMax = GetMax(a,l, mid);
    int rMax = GetMax(a,mid + 1,r);
    //分治 
    return max(lMax, rMax);
    // 返回最大值
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << "Max = " << GetMax(a,0,n-1) << endl;
    delete[] a;
    return 0;
}