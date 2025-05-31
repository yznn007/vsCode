#include<bits/stdc++.h>
using namespace std;

signed main()
{
    // []：默认不捕获任何变量；
    // [=]：默认以值捕获所有变量；
    // [&]：默认以引用捕获所有变量；
    // [x]：仅以值捕获x，其它变量不捕获；
    // [&x]：仅以引用捕获x，其它变量不捕获；
    // [=, &x]：默认以值捕获所有变量，但是x是例外，通过引用捕获；
    // [&, x]：默认以引用捕获所有变量，但是x是例外，通过值捕获；
    // [this]：通过引用捕获当前对象（其实是复制指针）；
    // [*this]：通过传值方式捕获当前对象；
    int x = 1;
    auto func = [&x](int a,int b) ->int{int c = a+b;x++;return c+x;};
    cout << func(1,2) << " " << x << endl;
    return 0;
}