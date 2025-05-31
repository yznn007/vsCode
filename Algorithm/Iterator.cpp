#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator it = vec.begin();
    while(it != vec.end())
    {
        cout << *it << endl;
    }
    return 0;
}