//MULTIPLYING 2 COMPLEX NUMBERS USING CLASSES
#include <iostream>
using namespace std;

class Mul {
public:
    void input(int &r1, int &c1, int &r2, int &c2) {
        cout << "Enter the real part of number-1: ";
        cin >> r1;
        cout << "Enter the complex part of number-1: ";
        cin >> c1;
        cout << "Enter the real part of number-2: ";
        cin >> r2;
        cout << "Enter the complex part of number-2: ";
        cin >> c2;
    }

    void calc(int r1, int c1, int r2, int c2, int &real, int &comp) {
        real = (r1 * r2) - (c1 * c2);
        comp = (r1 * c2) + (r2 * c1);
    }

    void displayer(int real, int comp) {
        if comp>0{
            cout << "Final result is " << real << " + i" << comp << endl;
        }
        else{
            cout<<"Final result is"<<real<<" - i"<<comp<<endl;
        }

    }
};

int main() {
    Mul mul;
    int r1, c1, r2, c2;
    int real, comp;
    mul.input(r1, c1, r2, c2);
    mul.calc(r1, c1, r2, c2, real, comp);
    mul.displayer(real, comp);
    return 0;
}
