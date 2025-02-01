#include <bits/stdc++.h>
using namespace std;
//IMPLEMENTING POLYMORPHISM
//FUNCTION OVERLOADING-COMPILE TIME POLYMORPHISM

class test{
public:
    int add(int a,int b){
        return a+b;
    }
    double add(double a,double b){
        return a+b;
    }
};
int main() {
    test tester;
    cout<<"The value is"<<tester.add(2,3)<<endl;
    cout<<tester.add(2.5,5.6)<<endl;
    return 0;
}
