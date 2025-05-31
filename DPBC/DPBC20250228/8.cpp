#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,Au = 0,Ag = 0,Cu = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            if(temp == "Au") Au++;
            else if(temp == "Ag") Ag++;
            else if(temp == "Cu") Cu++;
        }
        cout << Au + min(Cu,Ag) << endl;
    }
    return 0;
}