#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int x = 1;
    auto func = [&x](int a,int b) ->int{int c = a+b;x++;return c+x;};
    cout << func(1,2) << " " << x << endl;
    return 0;
}