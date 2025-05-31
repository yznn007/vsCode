#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int sum_G = count(s.begin(),s.end(),'G');
    sum_G += count(s.begin(),s.end(),'g');
    int sum_P = count(s.begin(),s.end(),'P');
    sum_P += count(s.begin(),s.end(),'p');
    int sum_L = count(s.begin(),s.end(),'L');
    sum_L += count(s.begin(),s.end(),'l');
    int sum_T = count(s.begin(),s.end(),'T');
    sum_T += count(s.begin(),s.end(),'t');
    while(sum_G>0 || sum_L>0 || sum_P>0 || sum_T>0)
    {
        if((sum_G--)>0) 
        {
            cout << "G";
        }
        if((sum_P--)>0)
        {
            cout << "P";
        } 
        if((sum_L--)>0)
        {
            cout << "L";
        } 
        if((sum_T--)>0)
        {
            cout << "T";
        } 
    }
    return 0;
}