#include <bits/stdc++.h>
#include <string.h>
using namespace std;
class Employee{
private:
    int id;
    string name;
    float salary;
public:
    Employee(int i,string n,float s){//parametrized constructor
        id=i;
        name=n;
        salary=s;
    }
    void displayer(){
        cout<<id<<name<<salary<<endl;
    }
};
int main(){
    Employee employee1=Employee(1,"Mhm",2);//calls the constructor here automatically whenever the object is encountered
    Employee employee2=Employee(2,"Mhm1",3);
    employee1.displayer();
    employee2.displayer();
}