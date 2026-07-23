#include <iostream>
using namespace std;

int addNumbers(int num1, int num2) {
    int sum = num1 + num2;
    return sum; // Returns the result to the caller
}
int main() {

  int first_number, second_number, sum;
    
  cout << "Enter two nums: ";
  cin >> first_number >> second_number;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  sum = addNumbers(first_number, second_number);

  // prints sum s
  cout << first_number << " + " <<  second_number << " = " << sum;     

  return 0;
}