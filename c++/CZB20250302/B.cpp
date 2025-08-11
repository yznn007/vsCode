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
        int n,q;
        cin >> n >> q;
        vector<int> arr(n,0);
        for(int i = 0; i < n; i++) cin >> arr[i];
        vector<int> S(n+1,0);
        for(int i = 0; i < n; i++)
        {   
            int goodnum = 0;
            int x = 0;
            int sum = 1;
            for(int j = 2; j <= sqrt(arr[i]); j++)
            {
                if(arr[i]%j == 0)
                {    
                    sum += j;
                    if(arr[i]/j != j) sum += arr[i]/j;
                }
            }
            if((sum*i )%2 == 0) goodnum++; 
            S[i+1] +=S[i] + goodnum;
        }
        while(q--)
        {
            int l,r;
            cin >> l >> r;
            cout << S[r] - S[l-1] << "\n";
        }
    }
}