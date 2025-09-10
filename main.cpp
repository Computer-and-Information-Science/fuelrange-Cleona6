// Assignment 1 - Fuel Range
// TODO: Cody Leonard
#include <iostream>

// using directive to skip typing std:: each line
using namespace std;

int main() {
  // Variables
  double tankSize;   // the size of the fuel tank in gallons
  double mpg;        // miles per gallon the car gets
  double range;      // total distance the car can travel

  // Prompt user for input
  cout << "Enter the fuel tank size (in gallons): ";
  cin >> tankSize;

  cout << "Enter the miles per gallon (MPG): ";
  cin >> mpg;

  // Calculate range
  range = tankSize * mpg;

  // Output result
  cout << "The car can travel approximately " << range << " miles on a full tank." << endl;

  return 0;
}