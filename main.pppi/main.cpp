#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
  Calculator calc;

  cout << "Add (5 + 3): " << calc.add(5, 3) << endl;

  cout << "Subtract (10 - 4): " << calc.subtract(10, 4) << endl;

  cout << "Multiply (6 * 7): " << calc.multiply(6, 7) << endl;

  try
  {
    cout << "Divide (20 / 5): " << calc.divide(20, 5) << endl;

    cout << "Divide (10 / 0): " << calc.divide(10, 0) << endl;
  }
  catch (const exception &e)
  {
    cout << "Error: " << e.what() << endl;
  }

  return 0;
}