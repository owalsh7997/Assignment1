#include <iostream>

using namespace std;

int main(){
  int maxCapacity;
  int numPeople;

  cout << "Max Capacity: ";
  cin >> maxCapacity;

  cout << "How many people are attending?: ";
  cin >> numPeople;

  if (numPeople <= maxCapacity){
    cout << "It's legal to hold this meeting and " << maxCapacity - numPeople << " more people may attend" << endl;
  }

  if (numPeople > maxCapacity){
    cout << "It's illegal to hold this meeting due to fire regulations " << numPeople - maxCapacity << " person(s) must be excluded to reach fire safety" << endl;
  }

}
