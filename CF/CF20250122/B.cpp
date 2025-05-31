#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,l,r;
        cin >> n >> l >> r;
        vector<int> vec(n);
        for(int i = 0; i < n; i++) cin >> vec[i];
        priority_queue<int, vector<int>, less<int>> in;
        priority_queue<int, vector<int>, greater<int>> out;
        for(int i = 0; i < n; i++)
        {
            if(i < l-1 || i >= r) out.push(vec[i]);
            else in.push(vec[i]);
        }
        while(!in.empty() && !out.empty() && in.top() > out.top())
        {
            int o=out.top();
            int i=in.top();
            out.pop();
            in.pop();
            out.push(i);
            in.push(o);
        } 
        long long sum = 0;
        while(!in.empty())
        {
            sum += in.top();
            in.pop();
        }
        cout << sum << endl;
    }
    return 0;
}