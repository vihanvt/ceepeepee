//stl in cpp
//include this library and u dont need to include others as it contains all the others
#include <bits/stdc++.h>
using namespace std;
//pairs to be done before containers
void pairing(){
    pair<int, int> p ={1,5};
    //normal pair
    cout<<"The first element of pair is "<<p.first<<endl<< "The second element of the pair is "<<p.second;
    //nested pair
    pair<int,pair<int,int>>p1={2,{1,5}};
    cout<<"The first element of pair is"<<endl<<p1.first<<"The first of second element of pair is"<<p1.second.first<<endl<<"The second of second element of the pair is"<<p1.second.second<<endl;
}
//vectors=dynamic arrays 
int veectors(){
    vector <int> vec;
    vec.push_back(1);
    vec.emplace_back(2);
    //defining predefined vector container
    vector <int> vec1(5,1); //5 instances of 1's={1,1,1,1,1}
    //accessing the values in a vector using normal INDEXING
    cout<<"The value at 1st index in the vector container is "<<vec[1]<<endl;
    //accessing the values in a vector using ITERATORS
    vector <int>::iterator it =vec.begin();
    cout<<"The value of element at 0 index is "<<*(it)<<endl;
    cout<<"Printing the last element in the vector"<<vec.back()<<endl;
    //printing the whole vector using loops
    for(auto it =vec.begin();it<=vec.end();it++){
        cout<<"The vector is"<<*(it)<<endl;
    }
}
int main(){
    pairing();
    veectors();
    return 0;
}