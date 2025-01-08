//creating a rectangular class to calculate area and perimeter
#include <bits/stdc++.h>
using namespace std;
class rectangular{
public:
    int length,breadth;//properties of the class
    void Area(){//this making of another function inside a class is called method
        int area=length*breadth;
        cout<<"Area is "<<area<<endl;
    }
    void Perimeter(){
        int perimeter=2*(length+breadth);
        cout<<"Perimeter is "<<perimeter<<endl;
    }
};
int main(){
    rectangular rectangle;//instancing object of a class
    rectangle.length=5;//using that object to make changes into the variables present in class
    cout<<"Input length is "<<rectangle.length<<endl;
    rectangle.breadth=10;
    cout<<"Input breadth is "<<rectangle.breadth<<endl;
    rectangle.Area();
    rectangle.Perimeter();
    return 0;
}