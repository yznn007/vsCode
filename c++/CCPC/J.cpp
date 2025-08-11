
#include<bits/stdc++.h>
using namespace std;

vector<int> num(6,0); 
vector<bool> flag(6,0);


bool isHeShu(int nn) {
    if (nn <= 1) return false; // 1 和负数不是合数
    for (int i = 2; i * i <= nn; ++i) {
        if (nn % i == 0) return true; // 如果能被整除，则是合数
    }
    return false; // 否则不是合数
}

void dfs(int cnt,int nn)
{
    if(flag[0] == 1) return;
    if(cnt > 5)
    {
        if(isHeShu(nn)) 
        {
            cout << nn <<endl;
            flag[0] = 1;//flag[0] == 1代表nn为和数
        }
    }
    for(int i = 1;i <= 5 ;i++) //dfs
    {
        if(cnt == 1 && num[i] == 0) break;

        if(flag[i] != 1)
        {
            flag[i] = 1;
            nn = nn * 10 + num[i];
            dfs(cnt + 1,nn);
            flag[i] = 0;
        }
    }

}


int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        int nn; //n'
        cin >> n; //输入
        for(int i = 1;i <= 5;i++)
        {
            num[i] = n % 10;
            n /= 10;
        } //放入数组
        
        dfs(1,0);
        if(flag[0] == 0) cout << "-1" <<endl;
        for(int i =0;i<=5;i++)
            flag[i] = 0; //还原
    }
}