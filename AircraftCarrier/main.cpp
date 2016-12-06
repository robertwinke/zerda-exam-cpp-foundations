//============================================================================
// Name        : vizsga2.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Aircraft.hpp"
#include "F16.hpp"
#include "F35.hpp"

using namespace std;

int main() {
  int availableAmmo = 55;
  F35 p;



  p.refill(availableAmmo);
  cout << p.fight() << endl;
  cout << p.getType() << endl;
  cout << p.getStatus() << endl;

//make variables constant!!!
	return 0;
}
