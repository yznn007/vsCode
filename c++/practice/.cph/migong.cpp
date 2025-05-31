#include<bits/stdc++.h>
using namespace std;
int n,m;
int mincnt = 2e5;
char zhongdian;
char qiang = '1';
int row = 0;
int col = 0;

void dfs(int cnt,vector<string> &map,vector<vector<int>> &flag)
{
    if(row < 0 || row >= n || col < 0 || col >= m || map[row][col] == qiang) return;
    if(map[row][col] == zhongdian)
    {   
        mincnt = min(mincnt,cnt);
        return;
    }
    for(int i = 0; i < 4 ;i++)
    {

        switch(i)
        {
            case 0:
            row++;
            if(flag[row][col] == 0)
            {
                flag[row][col] = 1;
                dfs(cnt++,map,flag);
				flag[row][col] = 0;
            }
            row--;
            break;
            case 1:
            col++;
            if(flag[row][col] == 0)
            {
                flag[row][col] = 1;
                dfs(cnt++,map,flag);
				flag[row][col] = 0;
            }
			
            col--;
            break;
            case 2:
            row--;
            if(flag[row][col] == 0)
            {
                flag[row][col] = 1;
                dfs(cnt++,map,flag);
				flag[row][col] = 0;
            }
            row++;
            break;
            case 3:
            col--;
            if(flag[row][col] == 0)
            {
                flag[row][col] = 1;
                dfs(cnt++,map,flag);
				flag[row][col] = 0;
            }
            col++;
            break;


        }
    }
}
int main()
{
	vector<string> map(n,0);
	vector<vector<int>> flag(n,vector<int>(m,0));
    cin >> n >> m >> zhongdian;
	for(int i  = 0;i<n;i++)
		cin >> map[i];
	dfs(0,map,flag);
	cout << mincnt << endl;
    return 0;
}