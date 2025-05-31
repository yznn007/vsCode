#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,q;
    cin >> n >> m >> q;
    vector<vector<int>> a(n+1,vector<int>(m+1,0));
    vector<vector<int>> b(n+2,vector<int>(m+2,0));
    vector<vector<int>> c(n+2,vector<int>(m+2,0));

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j] - a[i-1][j] - a[i][j-1] + a[i-1][j-1];
        }

    while(q--)
    {
        int x1,x2,y1,y2,d;
        cin >> x1 >> y1 >> x2 >> y2 >> d;
        b[x1][y1] += d;
        b[x2+1][y1] -= d;
        b[x1][y2+1] -= d;
        b[x2+1][y2+1] += d;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            c[i][j] = b[i][j] + c[i-1][j] + c[i][j-1] -c[i-1][j-1]; 
            cout << c[i][j] << " ";
        }
        cout <<endl;
    }
    return 0;
}