#include<bits/stdc++.h>
using namespace std;
#define int long long

// 生成随机数
vector<int> generateRandomNumbers(int n) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(-2e5, 2e5);
    vector<int> arr(n);
    for (auto& it : arr) it = distrib(gen);
    return arr;
}

// 保存结果到文件
void saveToFile(const vector<int>& arr, const string& filename) {
    ofstream outfile(filename);
    for (const auto& num : arr) {
        outfile << num << "\n";  
    }
    outfile.close();
}

// 冒泡排序
vector<int> bubbleSort(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++) 
    {
        for (int j = 0; j < arr.size() - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
    return arr;
}

// 选择排序
vector<int> selectionSort(vector<int> arr)
{
    for(int i = 0;i < arr.size()-1;i++)
    {
        for(int j = i+1;j < arr.size();j++)
        {
            if(arr[j] < arr[i]) swap(arr[i],arr[j]);
        }
    }
    return arr;
}
// 插入排序
vector<int> insertionSort(vector<int> arr)
{
    int temp = 0;
    for(int i = 1;i < arr.size();i++)
    {
        temp = arr[i];
        int j = i-1;
        while(arr[j] > temp && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    return arr;
}

// 希尔排序
vector<int> shellSort(vector<int> arr) {
    int n = arr.size();
    
    // 初始间隔 (gap) 设为数组长度的一半，然后逐步缩小
    for (int gap = n/2; gap > 0; gap /= 2) {
        // 对每个子数组进行插入排序
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            
            // 对子数组进行插入排序
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            
            arr[j] = temp;
        }
    }
    return arr;
}

// 快速排序
void quickSortProcess(vector<int>& arr, int l, int r) 
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
 
    //将基准temp放于自己的位置，（第i个位置）
    swap(arr[l], arr[i]);
    quickSortProcess(arr, l, i - 1);
    quickSortProcess(arr, i + 1, r);
}
vector<int> quickSort(vector<int> arr)
{
    quickSortProcess(arr, 0, (int)arr.size()-1);
    return arr;
}


// 归并排序
void Merge(vector<int> &arr,int l,int mid,int r)
{
    int pl = l;
    int pr = mid+1;
    vector<int> temp(r-l+1);
    int i = 0;
    while(pl <= mid && pr <= r) temp[i++] = arr[pl] >= arr[pr] ? arr[pr++] :arr[pl++];   
    while(pl <= mid) temp[i++] = arr[pl++];
    while(pr <= r) temp[i++] = arr[pr++];    
    for(int i=l;i<=r;i++) arr[i] = temp[i-l];
}
void MergeSortProcess(vector<int>& arr,int l,int r)
{
    if(l >= r) return;
    int mid = l + ((r-l) >> 1);
    MergeSortProcess(arr,l,mid);
    MergeSortProcess(arr,mid+1,r);
    Merge(arr,l,mid,r);
}
vector<int> mergeSort(vector<int> arr)
{
    MergeSortProcess(arr,0,(int)arr.size()-1);
    return arr;
}

//堆排序
void Heapify(vector<int>& arr, int index, int heapSize)
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
vector<int> heapSort(vector<int> arr)
{
    if (arr.empty()) return arr;
    for(int i = arr.size()/2-1;i >= 0; i--) Heapify(arr, i,arr.size());
    int heapSize = arr.size();
    while(heapSize > 0)
    {
        swap(arr[0], arr[heapSize-1]);
        heapSize--;
        Heapify(arr, 0, heapSize);
    }
    return arr;
}

// 计数排序
vector<int> countSort(vector<int> arr) 
{
    int max_val = 0, min_val = INT_MAX;
    for (auto it: arr) {
        max_val = max(max_val, it);
        min_val = min(min_val, it);
    }
    vector<int> Index(max_val - min_val + 1, 0); // 计算数组范围
    vector<int> result;
    result.reserve(arr.size());
    
    for (int i = 0; i < (int)arr.size(); i++) {
        Index[arr[i] - min_val]++;  // 使用偏移来处理负数
    }
    
    for (int j = 0; j < Index.size(); j++) {
        while (Index[j] > 0) {
            result.push_back(j + min_val);  // 恢复负数
            Index[j]--;
        }
    }
    
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
vector<int> radixSort(vector<int> arr) 
{
    int max_num = *max_element(arr.begin(), arr.end());
    int min_num = *min_element(arr.begin(), arr.end());
    int max_digits = getMaxDigits(max_num);

    if (min_num < 0) {
        // 需要处理负数，使用偏移
        int offset = -min_num;
        for (auto &num : arr) num += offset;  // 偏移所有负数

        for (int digit_pos = 0, exp = 1; digit_pos < max_digits; ++digit_pos, exp *= 10) {
            vector<vector<int>> buckets(10);
            for (int num : arr) {
                int digit = (num / exp) % 10;
                buckets[digit].push_back(num);
            }
            arr.clear();
            for (auto bucket : buckets) {
                arr.insert(arr.end(), bucket.begin(), bucket.end());
            }
        }

        for (auto &num : arr) num -= offset;  // 恢复偏移
    }

    return arr;
}

template<typename Func>
void testSort(Func sortFunc, vector<int> arr, const string& sortName) {
    auto start = std::chrono::high_resolution_clock::now();
    vector<int> result = sortFunc(arr);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
    
    cout << sortName << " time: " << duration.count() << " ms" << endl;
    saveToFile(result, sortName + "_result.txt");
}

signed main()
{
    const int N = 50000;
    vector<int> arr = generateRandomNumbers(N);  
    // 原始数据
    saveToFile(arr, "original_data.txt");
    testSort(bubbleSort, arr, "BubbleSort");
    testSort(selectionSort, arr, "SelectionSort");
    testSort(insertionSort, arr, "InsertionSort");
    testSort(shellSort, arr, "ShellSort");
    testSort(quickSort, arr, "QuickSort");
    testSort(mergeSort, arr, "MergeSort");
    testSort(heapSort, arr, "HeapSort");
    testSort(radixSort, arr, "RadixSort");
    testSort(countSort, arr, "CountSort");
    return 0;
}