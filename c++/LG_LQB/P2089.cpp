#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
int n;
vector<int> peifang(20);
vector<vector<int>> peifangsum(59049+10,vector<int>(20,0));
void dfs(int x,int sum)
{
    if(sum > n) return;
    if(x > 10)
    {
        if(sum == n)
        {
            cnt++;
            for(int i = 1; i <= 10;i++)
                peifangsum[cnt-1][i] = peifang[i];
        }
        return;
    }
    for(int i = 1; i<=3 ;i++)
    {
        peifang[x] = i;
        dfs(x + 1,sum+i);
        peifang[x] = 0;    
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    dfs(1,0);
    cout << cnt << endl;
    for(int i = 0;i<cnt;i++)
    {
        for(int j = 1;j<=10;j++)
        {
            cout << peifangsum[i][j] << " ";
        }
        cout <<endl;
    }
    return 0;
}