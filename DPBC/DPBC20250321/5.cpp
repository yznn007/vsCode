#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        vector<int> vec(n);
        for(int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        vector<int> string_index(n);
        bool found = 1;
        int x = 1;
        while(found)
        {
            int i;
            for(i = 0; i < n; i++)
            {
                if(string_index[i] == 0)
                {
                    found = 1; 
                    string_index[i] = ++x;
                    break;
                }
                else found = 0;
            }
            int j = string_index[i];
            while(j < n)
            {
                j = string_index[i]+vec[string_index[i]];
                string_index[i] += x;
            }
        }
    }
    
    return 0;
}