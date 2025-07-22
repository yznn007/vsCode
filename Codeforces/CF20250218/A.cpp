#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n-2];
        for(int i = 0; i < n-2; i++)
            cin >> a[i];
        if(n==3 || n==4)
        {   
            cout << "YES" << endl;
            continue;
        }
        int x = 0;
        for(int i = 1;i < n-3;i++)
        {
            if(a[i]==0)
            {
                if(a[i-1]==1 && a[i+1]==1)
                {
                    cout << "NO" << endl;
                    x = 1;
                    break;
                }
            }
        }
        if(x == 0) cout << "YES" << endl;
    } 
}