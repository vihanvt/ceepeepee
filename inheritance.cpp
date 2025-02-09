#include <bits/stdc++.h>
using namespace std;
//base class
class Cars{
public:
    void Func(){
        cout<<"Cars are fun"<<endl;
    }
};
//derived class
class Ferrari:public Cars{
public:
    void Func1(){
        cout<<"Ferrari is fun too"<<endl;
    }
};
int main(){
    Ferrari ferrari;
    ferrari.Func();//accesing the base class function from the derived class 
    ferrari.Func1();
    return 0;
}
