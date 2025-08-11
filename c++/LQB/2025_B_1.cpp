#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);

    double r = sqrt(233*233+666*666);
    double st = atan(666.0/233.0);
    cout << round(r + r*st);
}