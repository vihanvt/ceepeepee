#include <bits/stdc++.h>
using namespace std;
class Entity {
public:
    int x, y;
    //example of default constructor, wont take the value of x and y as we are calling the parametrized object later on
    Entity(){
        x=25;
        y=15;
    }
    //example of parametrized constructor
    //it essentially just takes parameters also 
    Entity(int X, int Y){
        x=X;    
        y=Y;
    }
    //also this is an example of constructor overloading as we have more than 1 constructor in the same class
    void printer() {
        cout << "Value of x is " << x << endl;
        cout << "The value of y is " << y << endl;
    }
};
int main() {
    Entity entity(15,25);
    entity.printer();
    return 0;
}

//example of constructors in cpp is finished.