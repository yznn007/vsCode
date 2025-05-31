//第5题
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
    ofstream outFile("file.txt");
    cout << "请输入一组整数序列，以空格分隔：" << endl;
    int num;
    while (cin >> num) outFile << num << " ";
    outFile.close();
    ifstream inFile("file.txt");
    vector<int> numbers;
    int sum = 0;
    if (inFile.is_open()) 
    {
        int temp;
        while (inFile >> temp) numbers.push_back(temp);
        inFile.close();
        for (int num : numbers) sum += num;
        cout << "这些整数的和为：" << sum << endl;
    } 
    else cerr << "无法打开文件" << endl;
    return 0;
}