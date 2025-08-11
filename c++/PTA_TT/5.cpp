#include<bits/stdc++.h>
using namespace std;
typedef struct 
{
    string name;
    int a;
    int b;    
}Student;

int main()
{
    int n;
    cin >> n;
    vector<Student> students(n);
    for(int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].a >> students[i].b;
    }
    int m;
    cin >> m;
    vector<int> aa(m);
    for(int i = 0; i < m; i++)
    {
        cin >> aa[i];
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(students[j].a == aa[i])
            {
                cout << students[j].name << " " << students[j].b << endl;
            }
        }
    }
    return 0;
}