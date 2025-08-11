#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> x(3,vector<int>(2,0));
        int a,b,c;
        cin>>a>>b>>c;
        int i = 0;
        if(abs(a-b)/c == 0) x[0][i++] = abs(a-b)/c;
        if(abs(a-c)/b == 0) x[0][i++] = abs(a-c)/b;
        if(abs(b-c)/a == 0) x[0][i++] = abs(b-c)/a;
        n -= 1;
        while(n--)
        {
            cin>>a>>b>>c;
            for(int i = 0; i<3; i++)
            {
                if(abs(a-b)/c == x[0][i]) x[1][i]++;
                if(abs(a-c)/b == x[0][i]) x[1][i]++;
                if(abs(b-c)/a == x[0][i]) x[1][i]++;
            }
        }
         
    }
    return 0;
}