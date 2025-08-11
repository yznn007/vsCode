#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string ranran;
        cin >> ranran;
        vector<string> str(n);
        for(int i=0;i<n;i++)
        {
            cin >> str[i];
        }
        int x = 0;
        for(int i=0;i<n;i++)
        {
            if(str[i]==ranran)
            {
                x = 1;
                cout << i+1 << endl;
                break;
            }
        }  
        if(x==0) cout << -1 << endl;
    }
    return 0;
}