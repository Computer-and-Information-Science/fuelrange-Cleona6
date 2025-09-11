// Assignment 1 - Fuel Range
// TODO: Cody Leonard
#include <iostream>

// using directive to skip typing std:: each line
using namespace std;

int main() {
  // Variables
  double tankSize;   // the size of the fuel tank in gallons
  double mpg;        // miles per gallon the car gets
  int percentFull;   // percentage of tank filled
  double range;      // total distance the car can travel


  // Prompt user for input
  cout << "Enter the fuel tank size (in gallons): ";
  cin >> tankSize;

  cout << "Enter the miles per gallon (MPG): ";
  cin >> mpg;
  
  cout << "Enter the percent the tank is full: ";
  cin >> percentFull;

  // Calculate range
  range = (percentFull * tankSize)/100 * mpg;

  // Output result
  cout << "The vehicle can travel approximately " << range << " miles on the remaining fuel" << endl;

  return 0;
}