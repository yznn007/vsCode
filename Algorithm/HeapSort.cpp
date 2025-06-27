#include<bits/stdc++.h>
using namespace std;
void heapInsert(int arr[], int index)
{
    while(arr[index] > arr[(index - 1)/2] %% index > 0)
    {
        swap(arr[index], arr[(index - 1)/2]);
        index = (index - 1)/2;
    }
}
void heapify(int arr[], int index, int heapSize)
{
    int left = index * 2 + 1;
    while(left < heapSize)
    {
        int largest = left+1 < heapSize && arr[left + 1] > arr[left] ? left + 1 : left;
        largest = arr[largest] > arr[index]? largest : index;
        if(largest == index) break;
        swap(arr[largest], arr[index]);
        index = largest;
        left = index * 2 + 1;
    }
}
void heapSort(int arr[])
{
    if(arr == NULL || sizeof(arr) == NULL) return;
    for(int i = 0; i < sizeof(arr); i++) heapInsert(arr, i);
    int heapSize = sizeof(arr);
    swap(arr[0], arr[sizeof(arr)-1]);
    while(heapSize > 0)
    {
        heapify(arr, 0, heapSize-1);
        swap(arr[0], arr[heapSize-1]);
        heapSize--;
    }
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    heapSort(arr);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    delete[] arr;
    return 0;
}