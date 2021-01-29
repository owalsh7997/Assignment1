#include <iostream>

using namespace std;

int main(){
  double numHours;
  double overTimePay;
  double grossPay;
  double socTax;
  double fedTax;
  double stateTax;
  double medTax = 10;
  double netPay;

  cout << "Number of hours worked: ";
  cin >> numHours;

  if (numHours <= 40){
    grossPay = (numHours * 16);
  }
  else{
    overTimePay = 1.5*(16*(numHours - 40));
    grossPay = (40.0 * 16.0) + (overTimePay);
  }

  socTax = 0.06*grossPay;
  fedTax = 0.14*grossPay;
  stateTax = 0.05*grossPay;

  netPay = grossPay - socTax - fedTax - stateTax - medTax;

  cout << "Tax Deducted Pay: " << endl;
  cout << "   Gross Pay = " << grossPay << endl;
  cout << "   Social Security Tax = " << socTax << endl;
  cout << "   Federal Income Tax = " << stateTax << endl;
  cout << "   State Income Tax = " << fedTax << endl;
  cout << "   Medical Fee = " << medTax << endl;
  cout << "Net Pay = " << netPay << endl;

}
