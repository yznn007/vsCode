#include<bits/stdc++.h>
using namespace std;
#define max_N 500000000

bool isPrimeNumber(long long num) //试除法
{
    if(num == 2) return 1;
    if(num % 2 == 0 || num % 3 == 0) return 0;
    for(int i = 5; i * i <= num; i+=6)
    {
        if(num%i == 0 || num%(i+2) == 0) return 0;
    }
    return 1;
}

// void isPri(vector<bool> &pri)
// {
    
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<bool> isPri(max_N,1);
    vector<int> primes;
    for(int i = 2; i * i <= max_N; i++)
    {
        if(isPri[i])
        {
            primes.push_back(i);
            for(int j = 0;j < primes.size() && i*primes[j] <=max_N;j++) 
            {
                isPri[i*primes[j]] = 0;
                if(i%primes[j] == 0) break;
            }
        }    
    }
    
    while(N--)
    {
        long long num;
        cin >> num;
        if(isPri[num] == 1) cout << "Yes" <<endl;
        else cout << "No" <<endl;
        // if(isPrimeNumber(num)) cout << "Yes" <<endl;
        // else cout << "No" <<endl; 
    }

    return 0;
}