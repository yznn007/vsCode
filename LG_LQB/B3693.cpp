#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        vector<vector<unsigned long long>> vec(n,vector<unsigned long long> (m));
        vector<vector<unsigned long long>> index(n+1,vector<unsigned long long> (m+1,0));
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)    
            { 
                cin >> vec[i][j];
            }
        }

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)    
            { 
                index[i][j] = vec[i-1][j-1] + index[i][j-1] + index[i-1][j] -index[i-1][j-1];
            }
        }
        
        vector<unsigned long long> results(q);
        unsigned long long xor_sum = 0;
        for(int i = 0; i < q; i++)
        {
            int u,v,x,y;
            cin >> u >> v >> x >> y;
            results[i] = (index[x][y] - index[x][v-1] - index [u-1][y] + index[u-1][v-1]);
            xor_sum ^= results[i];
        }
        cout << xor_sum << "\n";
    }
    return 0;
}