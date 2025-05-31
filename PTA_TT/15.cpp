#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    char c;
    cin >> n;
    cin >> c;
    double n2 = n/2.0;
    int nn = n/2;
    int flag = (n2-nn)*10 >= 5?nn+1:nn;

    for(int i = 0;i < flag;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cout << c;
        }
        cout <<endl;
    }
    return 0;
}