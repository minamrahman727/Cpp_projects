#include <iostream>
using namespace std;
int main()
 {
    double income, tax = 0;

    // Get user input for income
    cout << "Enter your annual income: ";
    cin >> income;

    // Income tax calculations
    if (income <= 10000) {
        tax = 0.05 * income;
    } else if (income <= 50000) {
        tax = 0.10 * income;
    } else if (income <= 100000) {
        tax = 0.20 * income;
    } else {
        tax = 0.30 * income;
    }

    cout << "Your income tax is: " << tax << endl;

    return 22;
}
