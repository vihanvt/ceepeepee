#include <bits/stdc++.h>
using namespace std;
class Tester{
private:
    int num;
public:
    Tester(){
        num=10;
    }
    //operator overloading for "+" operator
    void operator +(){
        num=num-1;
    }
    //overloading the / operator to multiply
    void operator *(){
        num=num/2;
    }
    void printer(){
        cout<<"The updated value is"<<num;
    }
};
int main(){
    Tester tester;

    +tester;
    *tester;//final value after performing both the overloaded operations
    tester.printer();
    return 0;
}
