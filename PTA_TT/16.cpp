#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    bool flag = true;

    unordered_map<int,char> mp{{0,'1'},{1,'0'},{2,'X'},{3,'9'},{4,'8'},{5,'7'},{6,'6'},{7,'5'},{8,'4'},{9,'3'},{10,'2'}};
    vector<int> vec{7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    while(n--)
    {
        int sum = 0;
        string s;
        cin >> s;
        bool f = true;
        for(int i = 0;i < 17; i++)
        {
            if(s[i]>='0' && s[i] <= '9')
            {
                int num = s[i] - '0';
                int N =  num*vec[i];
                sum += N;
            }
            else
            {
                cout << s <<endl;
                f = false;
                flag = false;
            }
        }
        int Sum = sum % 11;
        char c = s[17];
        char C = mp[Sum];
        if(c != C && f)
        {
            cout << s <<endl;
            flag = false;
        }
    }
    
    if(flag) cout << "All passed";
    return 0;
}