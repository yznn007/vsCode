#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    set<int> hasFriend;
    while(N--)
    {
        int k;
        cin >> k;
        if(k > 1)
        {
            while(k--)
            {
                int id;
                cin >> id;
                hasFriend.insert(id);
            }
        } 
    }
    int M;
    cin >> M;
    unordered_set<int> set(M);
    int id;
    for(int i = 0 ;i<M;i++)
    {
        cin >>id;
        set.insert(id);
    }
    vector<int> vec(set.begin(),set.end());
    reverse(vec.begin(), vec.end());   
    for(auto it = vec.begin();it!=vec.end();++it)
    {
        if(hasFriend.find(*it) == hasFriend.end())
        {
            cout << *it << " ";
        }
    }
    cout <<endl;
    return 0;
}