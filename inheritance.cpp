#include <bits/stdc++.h>
using namespace std;

// base class
class Cars {
public:
    void Func() {
        cout << "Cars are fun" << endl;
    }
};

// derived class- public inheritance
class Ferrari : public Cars {
public:
    void Func1() {
        cout << "Ferrari is fun too" << endl;
    }
};

// base class
class Players {
public:
    void goat() {
        cout << "The goated player is" << endl;
    }
};

// derived class- private inheritance
class Goated : private Players {
public:
    void ronaldo() {
        goat();
        cout << "Ronaldo" << endl;
    }
};

int main() {
    Ferrari ferrari;
    ferrari.Func();  //public inheritance can be accessed by the obj of derived class
    ferrari.Func1(); 

    Goated goated;
    goated.ronaldo(); // Only valid way to access goat()

    return 0;
}
