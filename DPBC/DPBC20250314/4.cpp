#include<bits/stdc++.h>
using namespace std;
// int merge(string &str,int l,int mid,int r)
// {
//     int pl = l;
//     int pr = mid+1;
//     string temp;
//     int i = 0;
//     int count = 0;
//     while(pl <= mid && pr <= r)
//     {
//         if(str[pl] < str[pr])
//         {
//             count++;
//             temp[i++] = str[pl++];
//         } 
//         
//         else
//         {
//             temp[i++] = str[pr++];
//         }
//     }  
//     while(pl <= mid) temp[i++] = str[pl++];
//     while(pr <= r) temp[i++] = str[pr++];    
//     for(int i=l;i<=r;i++) str[i] = temp[i-l];
//     cout << count <<endl;
//     cout << endl;
//     return count;
// }
// void process(string &str,int l,int r,int &count)
// {
//     if(l >= r) return;
//     int mid = l + ((r-l) >> 1);
//     process(str,l,mid,count);
//     process(str,mid+1,r,count);
//     count += merge(str,l,mid,r);
// }
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int k;
        cin >> k;
        int count = 0;
        string S;
        sort(str.begin(), str.end());
        int j = 0;
        for(int i=0;i<str.size()-1;i++)
        {
            if(str[i] != str[i+1]) S[j++] = str[i];
        }
        // process(str,0,str.size()-1,count);

        // cout << count << endl;
        if(str.size() <= k) cout << str.size();
        else cout << count + k;
        cout << endl;
    }
    return 0;
}