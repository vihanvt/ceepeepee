//lets implemenet a linked list and go to sleep
//till now this just implements a node :()
#include <bits/stdc++.h>
using namespace std;
//making a new datatype like string and int
struct Node{
    public:
    int data;
    Node *next;
    public: //defining the constructor now
    Node(int smth, Node* next1){
        data=smth;
        next=next1;
    }
};
int main(){
    vector <int> arr={1,2,3,4,5};
    Node *node1= new Node(arr[2],nullptr); //new already returns the adress
    Node *node2=new Node(arr[4],nullptr);
    //other way-
    //Node output(arr[2],nullptr)
    cout<<"Memory adress- "<<node1<<"value is- " <<node1->data<< endl;
    cout<<"Memory adress- "<<node2<<"value is- " << node2->data<<endl;  
    return 0;    
}
