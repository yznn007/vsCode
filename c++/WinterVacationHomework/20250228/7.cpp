// 第7题
#include<bits/stdc++.h>
using namespace std;
void inverse(int arr[], int n)
{
    for(int i = 0; i < n/2; i++) 
        swap(arr[i] ,arr[n-1-i]);
    return;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    inverse(arr,n);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    delete[] arr;
    return 0;
}