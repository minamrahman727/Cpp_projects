#include <iostream>
using namespace std;

int main() {
    int a,i;

    cout << "Enter a number for the multiplication table: ";
    cin >> a;

    cout << "Multiplication Table for " << a << ":\n";

    for( i = 1; i <= 10; i++) {
        cout << a << " x " << i << " = " << a * i << endl;
    }

    return 0;
}

