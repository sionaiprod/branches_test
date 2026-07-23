#include <iostream>
using namespace std;

int addNumbers(int num1, int num2, int num3) {
    int sum = num1 + num2 + num3;
    return sum; // Returns the result to the caller
}
int main() {

  int first_number, second_number, third_number, sum;
    
  cout << "Enter three nums: ";
  cin >> first_number >> second_number >> third_number;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  sum = addNumbers(first_number, second_number, third_number);

  // prints sum s
  cout << first_number << " + " <<  second_number << " + " <<  third_number << " = " << sum;     

  return 0;
}