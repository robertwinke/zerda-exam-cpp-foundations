//============================================================================
// Name        : vizsga2.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Aircraft.hpp"
using namespace std;

int main() {
  int availableAmmo = 55;
  Aircraft p;


  p.refill(availableAmmo);
  cout << p.fight();

//make constructor virtual and variables constant!!!
	return 0;
}
