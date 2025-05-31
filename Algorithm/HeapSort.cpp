#include<bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
void heapify(vector<int>& arr, int index, int heapSize) {
    int left = index * 2;  // 左子节点
    while (left < heapSize) {
        // 选择左右子节点中较大的一个
        int largest = (left + 1 < heapSize && arr[left + 1] > arr[left]) ? left + 1 : left;
        // 比较父节点与较大子节点
        largest = (arr[largest] > arr[index]) ? largest : index;
        if (largest == index) break;  // 无需调整
        swap(arr[largest], arr[index]);
        index = largest;             // 继续向下检查
        left = index * 2;
    }
}
void heapSort(vector<int>& arr) 
{
    int n = arr.size();
    // 构建最大堆（从最后一个非叶子节点开始）
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, i, n);
    }
 
    // 依次提取最大值并调整堆
    for (int heapSize = n - 1; heapSize > 0; heapSize--) {
        swap(arr[0], arr[heapSize]);  // 将最大值放到末尾
        heapify(arr, 0, heapSize);   // 对剩余元素重新堆化
    }
}

=======
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
void heapInsert(int arr[], int index)
{
    while(arr[index] > arr[(index - 1)/2])
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
>>>>>>> a433173 (first commit)
int main()
{
    int n;
    cin >> n;
<<<<<<< HEAD
    vector<int> arr(n,0);
    for(int i = 0; i < n; i++) cin >> arr[i];
    heapSort(arr);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
=======
    int *arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    heapSort(arr);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    delete[] arr;
>>>>>>> a433173 (first commit)
    return 0;
}