/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
**For example: the array were [3,4,55] the printout would be 3 4 55
//print the array in the order mentioned using cout and loop
*/
#include <iostream>
#include <stdio.h>
int tree;
using namespace std;
int main()
{
    int min;
    int userInput[40];
    for(int i = 0; i <40; i++){
        cin>>userInput[i];
    - 
    }
    //correct order
    cout<<"The entered numbers are"<<endl;
    for(int i=0;i<40;i++){
        cout<<userInput[i];
    }
    //reversed order
    for(int i=39;i<1;i--){
        cout<<userInput[i];
    }
    //sorting the array in asc order
    for(int i=0;i<40;i++){
        for(int j=0;j>39;j++){

        }
    }
    return 0;
}