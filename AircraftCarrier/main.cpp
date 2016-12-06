//============================================================================
// Name        : vizsga2.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Carrier.hpp"

using namespace std;

int main() {

  Carrier e("Enterprise",10000,10000);

  try {
    e.addAircraft("F16");
    e.addAircraft("F35");
  }
  catch(const char* err) {
    cout << err;
  }

  e.fillAll();
  e.fillAll();

  cout << e.getStatus() << endl;



  Carrier n("Nimitz", 1000, 2000);
  n.addAircraft("F16");
  n.fillAll();
  cout << n.getStatus() << endl;

  e.fight(n);
  cout << n.getStatus() << endl;
	return 0;
}
