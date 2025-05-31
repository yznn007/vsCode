#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> tiangan = {"jia", "yi", "bing", "ding", "wu", "ji", "geng", "xin", "ren", "gui"};
    vector<string> dizhi = {"zi", "chou", "yin", "mao", "chen", "si", "wu", "wei", "shen", "you", "xu", "hai"};
    unordered_map<string,int> map;
    for(int i=1984; i<=2043; i++)
    {
        string year = tiangan[(i-1984) % 10] + dizhi[(i-1984) % 12];
        map[year] = i;
    }
    while(t--)
    {
        string ganzhi;
        cin >> ganzhi;
        cout << map[ganzhi] << endl;
    }
    return 0;
}