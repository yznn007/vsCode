#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<int> index(s.size());
    set<int> set;
    for(int i = 0; i<s.size();i++) 
    {
        set.insert(s[i] - '0');
    }
    vector<int> arr(set.begin(),set.end());
    reverse(arr.begin(),arr.end());
    for(int i = 0; i<s.size();i++)
    {
        index[i] = (find(arr.begin(),arr.end(),s[i]-'0')-arr.begin());
    }
    cout <<"int[] arr = new int[]{";
    cout << arr[0];
    for(int i = 1;i<arr.size();i++) cout << "," << arr[i];
    cout << "};\n";
    cout <<"int[] index = new int[]{";
    cout << index[0];
    for(int i = 1;i<index.size();i++) cout << "," << index[i];
    cout << "};" <<endl;
    return 0;
}