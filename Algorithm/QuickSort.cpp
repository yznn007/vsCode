<<<<<<< HEAD
 #include<bits/stdc++.h>
=======
#include<bits/stdc++.h>
>>>>>>> a433173 (first commit)
using namespace std;

void quickSort(int arr[], int l, int r) {
    int i = l; 
    int j = r;
    if(i >= j)  return;
 
    int temp = arr[l];
    while(i != j) 
    {
        while(arr[j] >= temp && i < j) {
            j--;
        }
	    while(arr[i] <= temp && i < j) {
            i++;
        }
	    if(i < j) 
        {
            swap(arr[i], arr[j]);
        }
    }
 
    //将基准temp放于自己的位置，（第i个位置）
    swap(arr[l], arr[i]);
    quickSort(arr, l, i - 1);
    quickSort(arr, i + 1, r);
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    quickSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    delete[] arr;
    return 0;
}