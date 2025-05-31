#include "bits/stdc++.h"
using namespace std;
void GetNext(const string s,vector<int> &next)
{
    int j = 0,k = -1;
    next[0] = -1;
    while(j < s.size()-1)
    {
        if(k == -1 || s[j] == s[k])
        {
            j++; k++;
            next[j] = k;
        }
        else k = next[k]; 
        
    }
}

void GetNextVal(const string s,vector<int> &nextval)
{
    int j = 0,k = -1;
    nextval[0] = -1;
    while(j < s.size()-1)
    {
        if(k == -1 || s[j] == s[k])
        {
            j++; k++;
            if(s[j] != s[k]) nextval[j] = k;
            else nextval[j] = nextval[k];
        }
        else k = nextval[k]; 
    }
}

int KMPIndex(const string S,const string s)
{
    int i = 0,j = 0;
    vector<int> next(s.size()),nextval(s.size());
    GetNext(s,next);
    GetNextVal(s,nextval);
    while(i < S.size() && j < s.size())
    {
        if(j == -1 || S[i] == s[j])
        {
            i++; j++;
        }    
        // else j = next[j];
        else j = nextval[j]; //改进版
    }
    if(j >= s.size()) return (i - s.size());
    else return -1; 
}

int main()
{
    string S,s;
    cin >> S >> s;
    int index = KMPIndex(S,s);
    cout << index <<endl;
    return 0;
}