#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        int sum = 0;
        for(int i = a; i <= b;i++)
        {
            int num = i;
            while(num)
            {
                int x = num % 10;
                switch(x)
                {
                    case 1:
                    case 2:
                    case 3:
                    case 5:
                    case 7:
                        break;
                    case 4:
                    case 6:
                    case 9:
                    case 0:
                    {
                        sum++;
                        break;
                    }
                    case 8:
                    {
                        sum+=2;
                    }

                }  
                num/=10; 
            }
        }
        cout << sum <<endl;
    }
    return 0;
}