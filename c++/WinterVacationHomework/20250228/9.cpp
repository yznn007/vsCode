//第9题
#include<bits/stdc++.h>
using namespace std;
typedef struct Book
{
    int index;
    string name;
    int price;
} Book;
int main()
{
    
    Book book1;
    Book book2;
    cin >> book1.index >> book1.name >> book1.price;
    cin >> book2.index >> book2.name >> book2.price;
    cout << "The higher score is ";
    if(book1.price > book2.price) cout << book1.index << " " << book1.name << " " << book1.price << endl;
    else if(book1.price < book2.price) cout << book2.index << " " << book2.name << " " << book2.price << endl;
    else cout << "Two books have the same price." << endl;
    return 0;
}