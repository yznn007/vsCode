#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char s;
    cin >> s;
    int count = 1;
    n -= count;
    if(n == 0)
    {
        cout << s <<endl;
        cout << '0';
        return 0;
    }
    count *= 2;
    while(n > 0)
    {
        count += 4;
        n -= count;
    }
    n += count;
    count -= 4;
    count /= 2;
    for(int i = count; i > 0; i -= 2)
    {   
        int j = (count - i)/2;  
        while(j--) cout <<" ";
        int k = i;
        while(k--) cout << s;
        cout <<endl;
    }
    for(int i = 3; i <= count; i += 2)
    {
        int j = (count - i)/2;
        while(j--) cout <<" ";
        int k = i;
        while(k--) cout << s;
        cout << endl;
    }
    cout << n;
    return 0;
}