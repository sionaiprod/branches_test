#include <iostream>
using namespace std;

int main() {

  int first_number, second_number, third_number, fourth_number, sum;
    
  cout << "Enter four nums: ";
  cin >> first_number >> second_number >> third_number >> fourth_number;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  sum = first_number + second_number + third_number;

  // prints sum s
  cout << first_number << " + " <<  second_number << " + " <<  third_number << "+" << fourth_number << " = " << sum;     

  return 0;
}