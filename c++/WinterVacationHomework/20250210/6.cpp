// 第6题
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int *arr =new int[m];
    for(int i = 0; i < m; i++)
        cin >> arr[i];
    sort(arr, arr+m ,[](int a,int b){return a<b;});
    for(int i = 0; i < m; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}