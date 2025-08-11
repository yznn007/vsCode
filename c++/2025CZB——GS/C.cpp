#include<bits/stdc++.h>
using namespace std;
#define ll long long
int l,r;
int length ;
int a;
vector<int> flag(10,0);
void dfs(int n,int num)
{
    if(n > length || num > r) return ;
    if(num >= l && num <= r) 
    {
        if(a != 2) cout << num <<endl;
        a = 2;
        return;
    }
    for(int i = 0;i<10;i++)
    {
        if(flag[i] == 0)
        {
            num = num*10 + i;
            flag[i] = 1;
            dfs(n+1,num);
            flag[i] = 0;
        }
    }

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> l >> r;
        int rr = r;
        length = 0;
        a = 0;
        while(rr)
        {
            rr/=10;
            length++;
        }
        int num = 0;
        dfs(1,num);
        if(a == 0)  cout << "-1" <<endl;
    }
    return 0;
}