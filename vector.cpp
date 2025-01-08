#include <bits/stdc++.h>
using namespace std;
int veector() {
    int num = 5;
    int sum = 0;  // Initialize sum to 0
    vector<int> v(num);  // Initialize vector with size `num`
    for (int i = 0; i < num; i++) {
        v[i] = i;  
    }
    for (int i = 0; i < num; i++) {
        sum += v[i];
    }

    cout << "The value of the sum is: " << sum << endl;
    return 0;
}

int main() {
    veector();
    return 0;
}
