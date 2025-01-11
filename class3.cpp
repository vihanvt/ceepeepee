#include <bits/stdc++.h>
#include <math.h>
using namespace std;
class Point{
public:
    int x,y;//properties of the class point
    int x1,y1;
    void setcoord(){//defining the method
        cout<<"Enter the x coordinate"<<endl;
        cin>>x;
        cout<<"Enter the y coordinate"<<endl;
        cin>>y;
    }
    void printcoord(){
        cout<<"The x coordinate is"<<x;
        cout<<"THe y coordinate is"<<y;
    }
    void distance(){
        cout<<"Enter the x coordinate of point to find the difference from"<<endl;
        cin>>x1;
        cout<<"Enter the y coordinate of point to find the difference from"<<endl;
        cin>>y1;
        int dis=sqrt(pow(x-x1,2)+pow(y-y1,2));
        cout<<"The distance between the points are :"<<dis<<endl;
    }
};
int main(){
    Point pint;//defining the object from the class
    pint.setcoord();
    pint.printcoord();
    pint.distance();
}