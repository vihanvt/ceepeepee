//precaution- this is made to show the difference between overloading and overriding
//method overriding
#include <bits/stdc++.h>
using namespace std;
//this is an example of overloading-compile time polymorphism
class Overloader{
private:
    int age,grade;
public:
    void printer(){
        cout<<"This is printed"<<endl;
    }
    void printer(int x){
        grade=x;
        if (x>1){
            cout<<"This is also printed when this shit is overloaded"<<endl;
        }
    }
};

//now this is an example of overriding- run time polymorphism
class OverriderBase{
private:
    int what;
    string name;
public:
    void printer(){
        cout<<"This is the base class"<<endl;
    }
};
class OverriderDerived: public OverriderBase{
    public:
        void printerder(){
            cout<<"This is called inside the derived class"<<endl;
            cout<<"This shows about the method overriding"<<endl;
        }
};

int main(){
    Overloader overloader;
    overloader.printer();
    overloader.printer(10);
    OverriderDerived derived;
    derived.printer();//this calls the function inside the base class from object of derived class
    derived.printerder();//this calls the function of the object class only

}