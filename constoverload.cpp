#include <bits/stdc++.h>
using namespace std;
class Practice{
private:
    int num1;
    int num2;
    string name1;
    string name2;
public:
    //lets define a constructor first with defualt, parametrized, then copy to show constructor overloading
    //when more than 1 constructor is defines in the same scope but with different types-default,parametrized,copy
    //default 
    Practice(){
        num1=10,num2=20,name1="lil",name2="naegus";
        cout<<"The constructor was initialized with the values of num1- "<<num1<<"num2"<<num2<<"name 1- "<<name1<<"name 2-"<<name2<<endl;
    }
    //parametrized
    Practice(int n1,int n2,string na1,string na2){
        num1=n1,num2=n2,name1=na1,name2=na2;
        cout<<"The constructor was initialized with the values of num1- "<<num1<<"num2"<<num2<<"name 1- "<<name1<<"name 2-"<<name2<<endl;
    }
    //copy construct
    Practice(const Practice &obj){
        num1=obj.num1,num2=obj.num2,name1=obj.name1,name2=obj.name2;
        cout << "Copy Constructor: num1 = " << num1 << ", num2 = " << num2 << ", name1 = " << name1 << ", name2 = " << name2 << endl;
    }
};
int main(){
    Practice practice=Practice();//default constructor is called
    cout<<"The default constructor was run succesfully"<<endl;
    Practice practice1=Practice(30,40,"gae","naegus");//parametrized constructor is called
    cout<<"The parametrized constructor was run succesfully"<<endl;
    Practice practice3=practice;
    cout<<"The copy constructor ran succesfully"<<endl;
    return 0;
}