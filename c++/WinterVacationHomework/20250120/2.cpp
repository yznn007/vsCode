// 第二题
#include<iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int Max = 0;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if(temp > Max) Max = temp;
    }
    cout << Max << endl;
    return 0;
}