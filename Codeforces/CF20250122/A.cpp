#include<iostream>
#include<algorithm>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int l,r;
        cin >> l >> r;
        if(l != r) cout << r-l << endl;
        else if(l == r)
        {
            if(l ==1) cout << 1 << endl;
            else cout << 0  << endl;
        }
    }
    return 0;
}