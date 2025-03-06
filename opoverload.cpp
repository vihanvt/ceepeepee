#include <bits/stdc++.h>
using namespace std;
class Tester{
private:
    int num;
public:
    Tester(){
        num=10;
    }
    void operator +(){
        num=num-1;
    }
    void printer(){
        cout<<"The updated value is"<<num;
    }
};
int main(){
    Tester tester;
    +tester;
    tester.printer();
    return 0;
}
