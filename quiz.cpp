/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/
#include <iostream>
using namespace std;
int main(){
    int n=5;
    int num;
    int sum=0;
    int average=0;
    for(int i=0;i<n;i++){
        cout<<"Enter 5 numbers";
        cin>>num;
        sum+=num;  
    }
    average=sum/5;
    cout<<"The average is"<<average<<endl;
    return 0;
}
