#include <bits/stdc++.h>
#include <string>
using namespace std;

class Book{
private:
    string title;
    string author;
    double price;
public:
    Book(){//the default constructor
        title="Unknown";
        author="Unknown";
        price=0;

    }
    void displayer(){

        cout<<title<<endl;
        cout<<author<<endl;
        cout<<price<<endl;
    }
};

int main(){
    Book book;
    book.displayer();
}