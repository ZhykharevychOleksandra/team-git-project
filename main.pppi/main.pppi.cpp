#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
    Calculator calc;

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum: " << calc.add(a, b) << endl;
    cout << "Subtract: " << calc.subtract(a, b) << endl;
    cout << "Multiply: " << calc.multiply(a, b) << endl;
    cout << "Divide: " << calc.divide(a, b) << endl;

    return 0;
}