#include<bits/stdc++.h> 
using namespace std;
#define int long long

// 生成随机数
void generateRandomNumbers(int n, int arr[]) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(-2e5, 2e5);
    for (int i = 0; i < n; ++i) {
        arr[i] = distrib(gen);
    }
}

// 保存结果到文件
void saveToFile(const int arr[], int n, const string& filename) {
    ofstream outfile(filename);
    for (int i = 0; i < n; ++i) {
        outfile << arr[i] << "\n";
    }
    outfile.close();
}

// 冒泡排序
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

// 选择排序
void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[i]) swap(arr[i], arr[j]);
        }
    }
}

// 插入排序
void insertionSort(int arr[], int n)
{
    int temp = 0;
    for(int i = 1; i < n; i++)
    {
        temp = arr[i];
        int j = i - 1;
        while(arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

// 希尔排序
void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

// 快速排序
void quickSortProcess(int arr[], int l, int r)
{
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

    swap(arr[l], arr[i]);
    quickSortProcess(arr, l, i - 1);
    quickSortProcess(arr, i + 1, r);
}

void quickSort(int arr[], int n)
{
    quickSortProcess(arr, 0, n - 1);
}

// 归并排序
void Merge(int arr[], int l, int mid, int r)
{
    int pl = l;
    int pr = mid + 1;
    int* temp = new int[r - l + 1];
    int i = 0;
    while(pl <= mid && pr <= r) temp[i++] = arr[pl] >= arr[pr] ? arr[pr++] :arr[pl++];   
    while(pl <= mid) temp[i++] = arr[pl++];
    while(pr <= r) temp[i++] = arr[pr++];    
    for(int i = l; i <= r; i++) arr[i] = temp[i - l];
    delete[] temp;
}

void MergeSortProcess(int arr[], int l, int r)
{
    if(l >= r) return;
    int mid = l + ((r - l) >> 1);
    MergeSortProcess(arr, l, mid);
    MergeSortProcess(arr, mid + 1, r);
    Merge(arr, l, mid, r);
}

void mergeSort(int arr[], int n)
{
    MergeSortProcess(arr, 0, n - 1);
}

// 堆排序
void Heapify(int arr[], int index, int heapSize)
{
    int left = index * 2 + 1;
    while(left < heapSize)
    {
        int largest = left + 1 < heapSize && arr[left + 1] > arr[left] ? left + 1 : left;
        largest = arr[largest] > arr[index]? largest : index;
        if(largest == index) break;
        swap(arr[largest], arr[index]);
        index = largest;
        left = index * 2 + 1;
    }
}

void heapSort(int arr[], int n)
{
    if (n == 0) return;
    for(int i = n / 2 - 1; i >= 0; i--) Heapify(arr, i, n);
    int heapSize = n;
    while(heapSize > 0)
    {
        swap(arr[0], arr[heapSize - 1]);
        heapSize--;
        Heapify(arr, 0, heapSize);
    }
}

// 计数排序
void countSort(int arr[], int n) 
{
    int max_val = 0, min_val = INT_MAX;
    for (int i = 0; i < n; i++) {
        max_val = max(max_val, arr[i]);
        min_val = min(min_val, arr[i]);
    }
    int* Index = new int[max_val - min_val + 1]();
    int* result = new int[n];
    int result_index = 0;
    
    for (int i = 0; i < n; i++) {
        Index[arr[i] - min_val]++;
    }
    
    for (int j = 0; j < max_val - min_val + 1; j++) {
        while (Index[j] > 0) {
            result[result_index++] = j + min_val;
            Index[j]--;
        }
    }
    
    for (int i = 0; i < n; i++) arr[i] = result[i];
    
    delete[] Index;
    delete[] result;
}

// 基数排序
int getMaxDigits(int num) {
    if (num == 0) return 1;
    int digits = 0;
    while (num != 0) {
        num /= 10;
        ++digits;
    }
    return digits;
}

void radixSort(int arr[], int n) 
{
    int max_num = *max_element(arr, arr + n);
    int min_num = *min_element(arr, arr + n);
    int max_digits = getMaxDigits(max_num);

    if (min_num < 0) {
        int offset = -min_num;
        for (int i = 0; i < n; ++i) arr[i] += offset;

        for (int digit_pos = 0, exp = 1; digit_pos < max_digits; ++digit_pos, exp *= 10) {
            int* buckets = new int[10];
            fill(buckets, buckets + 10, 0);
            for (int i = 0; i < n; ++i) {
                int digit = (arr[i] / exp) % 10;
                buckets[digit]++;
            }

            int index = 0;
            for (int i = 0; i < 10; ++i) {
                while (buckets[i] > 0) {
                    arr[index++] = i + offset;
                    buckets[i]--;
                }
            }
            delete[] buckets;
        }

        for (int i = 0; i < n; ++i) arr[i] -= offset;
    }
}

// 测试排序算法
template<typename Func>
void testSort(Func sortFunc, int arr[], int n, const string& sortName) {
    auto start = std::chrono::high_resolution_clock::now();
    sortFunc(arr, n);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
    
    cout << sortName << " time: " << duration.count() << " ms" << endl;
    saveToFile(arr, n, sortName + "_result.txt");
}

signed main()
{
    const int N = 50000;
    int* arr = new int[N];
    generateRandomNumbers(N, arr);  
    saveToFile(arr, N, "original_data.txt");

    testSort(bubbleSort, arr, N, "BubbleSort");
    testSort(selectionSort, arr, N, "SelectionSort");
    testSort(insertionSort, arr, N, "InsertionSort");
    testSort(shellSort, arr, N, "ShellSort");
    testSort(quickSort, arr, N, "QuickSort");
    testSort(mergeSort, arr, N, "MergeSort");
    testSort(heapSort, arr, N, "HeapSort");
    testSort(radixSort, arr, N, "RadixSort");
    testSort(countSort, arr, N, "CountSort");

    delete[] arr; // 清理动态分配的内存
    return 0;
}
