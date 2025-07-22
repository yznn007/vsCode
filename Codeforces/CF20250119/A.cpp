#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int arr[13] = {1,1,2,3,5,8,13,21,34,55,89,144,233};
        int max = 0;
        for(int i = 0; i < 13; i++)
        {
            if(arr[i] <= a + b && arr[i] > max)
            {
                max = i+1;
            }
            else if(arr[i] <= abs(c - b) && arr[i] > max)
            {
                max = i+1;
            }
            else if(arr[i] <= abs(d - c) && arr[i] > max)
            {
                max = i+1;
            }

        }   
        cout << max << endl;
    }
    return 0;
}