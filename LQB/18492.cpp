#include<bits/stdc++.h>
using namespace std;
int _life(vector<int> vec,int l,int r,int x)
{

}
int _right(vector<int> vec,int l,int r,int x)
{

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin >> n >> q;
    vector<int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    int a,l,r,x;
    while(q--)
    {
        cin >> a >> l >> r >> x;
        switch(a)
        {
            case 1:
                _life(vec,l,r,x);
                break;
            case 2:
                _right(vec,l,r,x);
                break;
            case 3:
    
                // cout << (lower_bound(vec.begin()+l,vec.begin()+r,x) - vec.begin() + 1) < n ? ;
            case 4:
                
        }
    }
    return 0;
}