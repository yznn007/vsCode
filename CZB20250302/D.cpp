#include<bits/stdc++.h>
using namespace std;
void Swap(priority_queue<int, vector<int>, greater<int>> pque,int n, int m, int k)
{
    while(m>0)
    {
        int min = pque.top();
    }
}
int main()
{
    ios::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,k;
        cin >> n >> m >> k;
        priority_queue<int, vector<int>, greater<int>> pque;
        for(int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            pque.push(temp);
        }

    }
}