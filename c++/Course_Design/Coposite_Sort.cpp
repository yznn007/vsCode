#include <bits/stdc++.h>
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
int* bubbleSort(const int arr[], int n) {
    int* copy = new int[n];
    memcpy(copy, arr, sizeof(int) * n);
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (copy[j] > copy[j + 1]) swap(copy[j], copy[j + 1]);
    return copy;
}

// 选择排序
int* selectionSort(const int arr[], int n) {
    int* copy = new int[n];
    memcpy(copy, arr, sizeof(int) * n);
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (copy[j] < copy[i]) swap(copy[i], copy[j]);
    return copy;
}

// 插入排序
int* insertionSort(const int arr[], int n) {
    int* copy = new int[n];
    memcpy(copy, arr, sizeof(int) * n);
    for (int i = 1; i < n; i++) {
        int temp = copy[i];
        int j = i - 1;
        while (j >= 0 && copy[j] > temp) {
            copy[j + 1] = copy[j];
            j--;
        }
        copy[j + 1] = temp;
    }
    return copy;
}

// 希尔排序
int* shellSort(const int arr[], int n) {
    int* copy = new int[n];
    memcpy(copy, arr, sizeof(int) * n);
    for (int gap = n / 2; gap > 0; gap /= 2)
        for (int i = gap; i < n; i++) {
            int temp = copy[i], j;
            for (j = i; j >= gap && copy[j - gap] > temp; j -= gap)
                copy[j] = copy[j - gap];
            copy[j] = temp;
        }
    return copy;
}

// 快速排序
void quickSortProcess(int arr[], int l, int r) {
    if (l >= r) return;
    int i = l, j = r, pivot = arr[l];
    while (i < j) {
        while (i < j && arr[j] >= pivot) j--;
        while (i < j && arr[i] <= pivot) i++;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[l], arr[i]);
    quickSortProcess(arr, l, i - 1);
    quickSortProcess(arr, i + 1, r);
}

int* quickSort(const int arr[], int n) {
    int* copy = new int[n];
    memcpy(copy, arr, sizeof(int) * n);
    quickSortProcess(copy, 0, n - 1);
    return copy;
}

// 归并排序
void Merge(int arr[], int l, int mid, int r) {
    int* temp = new int[r - l + 1];
    int i = l, j = mid + 1, k = 0;
    while (i <= mid && j <= r)
        temp[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= r) temp[k++] = arr[j++];
    for (int i = l; i <= r; i++) arr[i] = temp[i - l];
    delete[] temp;
}

void MergeSortProcess(int arr[], int l, int r) {
    if (l >= r) return;
    int mid = l + (r - l) / 2;
    MergeSortProcess(arr, l, mid);
    MergeSortProcess(arr, mid + 1, r);
    Merge(arr, l, mid, r);
}

int* mergeSort(const int arr[], int n) {
    int* copy = new int[n];
    memcpy(copy, arr, sizeof(int) * n);
    MergeSortProcess(copy, 0, n - 1);
    return copy;
}

// 堆排序
void Heapify(int arr[], int index, int heapSize) {
    int left = index * 2 + 1;
    while (left < heapSize) {
        int largest = left + 1 < heapSize && arr[left + 1] > arr[left] ? left + 1 : left;
        largest = arr[largest] > arr[index] ? largest : index;
        if (largest == index) break;
        swap(arr[largest], arr[index]);
        index = largest;
        left = index * 2 + 1;
    }
}

int* heapSort(const int arr[], int n) {
    int* copy = new int[n];
    memcpy(copy, arr, sizeof(int) * n);
    if (n == 0) return copy;
    for (int i = n / 2 - 1; i >= 0; i--) Heapify(copy, i, n);
    int heapSize = n;
    while (heapSize > 0) {
        swap(copy[0], copy[heapSize - 1]);
        heapSize--;
        Heapify(copy, 0, heapSize);
    }
    return copy;
}

// 计数排序
int* countSort(const int arr[], int n) {
    int max_val = *max_element(arr, arr + n);
    int min_val = *min_element(arr, arr + n);
    int* Index = new int[max_val - min_val + 1]();
    int* result = new int[n];
    for (int i = 0; i < n; i++) Index[arr[i] - min_val]++;
    int idx = 0;
    for (int i = 0; i < max_val - min_val + 1; i++) {
        while (Index[i]-- > 0) result[idx++] = i + min_val;
    }
    delete[] Index;
    return result;
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

int* radixSort(const int arr[], int n) {
    int* copy = new int[n];
    memcpy(copy, arr, sizeof(int) * n);

    int max_num = *max_element(copy, copy + n);
    int min_num = *min_element(copy, copy + n);
    int max_digits = getMaxDigits(max(abs(max_num), abs(min_num)));

    int offset = 0;
    if (min_num < 0) {
        offset = -min_num;
        for (int i = 0; i < n; ++i) copy[i] += offset;
    }
    int* temp = new int[n];
    for (int exp = 1; max_num + offset >= exp; exp *= 10) {
        int count[10] = {0};
        for (int i = 0; i < n; ++i) count[(copy[i] / exp) % 10]++;
        for (int i = 1; i < 10; ++i) count[i] += count[i - 1];
        for (int i = n - 1; i >= 0; --i) {
            int digit = (copy[i] / exp) % 10;
            temp[--count[digit]] = copy[i];
        }
        memcpy(copy, temp, sizeof(int) * n);
    }
    for (int i = 0; i < n; ++i) copy[i] -= offset;
    delete[] temp;

    return copy;
}

// 测试函数
template<typename Func>
void testSort(Func sortFunc, const int arr[], int n, const string& sortName) {
    auto start = chrono::high_resolution_clock::now();
    int* sortedArr = sortFunc(arr, n);
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
    cout << sortName << " time: " << duration.count() << " ms" << endl;
    saveToFile(sortedArr, n, sortName + "_result.txt");
    delete[] sortedArr;
}

signed main() 
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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

    delete[] arr;
    return 0;
}