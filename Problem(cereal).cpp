#include <iostream>

using namespace std;

int main(){
  double weightOunces;
  double weightTons;
  int numBoxes;

  cout << "Package Ounches: ";
  cin >> weightOunces;

  weightTons = weightOunces / 35273.92;
  numBoxes = 35273.92 / weightOunces;

  cout << weightTons << " metric tons" << endl;
  cout << numBoxes << " boxes for a metric ton." << endl;
}
