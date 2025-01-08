#include <bits/stdc++.h>
using namespace std;
int fac(int num){
    if(num==0 ||num==1){
        return 1;
    }
    else{
        return num*fac(num-1);
    }
}
int main(){
    int num;
    cout<<"Enter a number as input"<<endl;
    cin>>num;
    cout<<"The factorial of the entered num is"<<fac(num)<<endl;
}