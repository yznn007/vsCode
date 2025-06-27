#include<bits/stdc++.h>
using namespace std;
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
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for(int i = 0; i < n; i++) cin >> arr[i];
    heapSort(arr);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}