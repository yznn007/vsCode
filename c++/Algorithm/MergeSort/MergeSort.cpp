#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &vec,int l,int mid,int r)
{
    int pl = l;
    int pr = mid+1;
    vector<int> temp(r-l+1);
    int i = 0;
    while(pl <= mid && pr <= r) temp[i++] = vec[pl] >= vec[pr] ? vec[pr++] : vec[pl++];   
    while(pl <= mid) temp[i++] = vec[pl++];
    while(pr <= r) temp[i++] = vec[pr++];    
    for(int i=l;i<=r;i++) vec[i] = temp[i-l];
}
void process(vector<int> &vec,int l,int r)
{
    if(l >= r) return;
    int mid = l + ((r-l) >> 1);
    process(vec,l,mid);
    process(vec,mid+1,r);
    merge(vec,l,mid,r);
}
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto &it : vec) cin >> it;
    process(vec,0,n-1);
    for(auto it : vec) cout << it << " ";
    return 0;
}