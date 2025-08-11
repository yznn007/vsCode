#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int sum = 0;
    int x = 0;
    for(int i = a; i <= b; i++)
    {
        cout << setw(5) << right << i;
        sum += i;
        x++;
        if(x == 5)
        {
            x = 0;
            cout << endl;
        }
    }
    if(x != 0) cout <<endl;
    cout << "Sum = " << sum << endl;
    return 0;
}