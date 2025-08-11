#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string N;
    cin >> N;
    bool isPos = true;
    bool isOdd = true;
    int count_2 = 0;
    if(N[0] == '-') isPos = false;
    if((!(N.back()-'0')%2)) isOdd = false;
    for(auto c : N) if(c == '2') count_2++;
    double a = 1.0*count_2/(isPos?N.size():N.size()-1);
    double b = isPos?1:1.5;
    double c = isOdd?2:1;
    double result = a * b * c * 100;
    cout << fixed << setprecision(2) << result << "%" <<endl;
    return 0;
}