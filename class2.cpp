#include <bits/stdc++.h>
using namespace std;
class BankAccount{
public:
    int balance,deposited,withdrew;//property of the class
    void deposit(){//method of a class=function in a class
        balance+=deposited;
        cout<<"The balance after deposit is"<<balance<<endl;
    }
    void withdraw(){
        balance-=withdrew;
        cout<<"The balance after withdraw is"<<balance<<endl;
    }
    void checkBalance(){
        cout<<"The remaining balance is"<<balance<<endl;
    }
};
int main(){
    BankAccount bank;//object of the class
    bank.balance=500;
    bank.deposited=200;
    bank.withdrew=100;
    bank.deposit();
    bank.withdraw();
    bank.checkBalance();
    return 0;
}