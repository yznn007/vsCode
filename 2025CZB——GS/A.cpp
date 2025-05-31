#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll Sum;
ll sum;
ll Max;
ll Short;
void qie(ll Sum,vector<ll> &arr)
{
    int cnt = 0;
    while(Sum)
    {

        sum = 0;
        Short = 1e10;
        for(int i = 1;i< arr.size();i++)
        {
            if(arr[i] != 0)   Short = min(Short,arr[i]);
        }
        for(int i = 1+cnt;i <= n;i++)
        {
            if(arr[i] == 0) continue;
            if(arr[i] > Short)
            {
                arr[i] -= Short;
                sum += Short;
            }
            else 
            {
                sum += arr[i];
                arr[i] = 0;
                cnt++;
            }
        }
        Max = max(Max,sum);
        Sum -= sum;
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        Sum = 0;
        cin >> n;
        vector<ll> arr(n+1,0);
        for(int i = 1;i <= n ;i++)
        {
            cin >> arr[i];
            Sum += arr[i];
        }
        qie(Sum,arr);
        cout << Max << endl;
    }
    return 0;
}