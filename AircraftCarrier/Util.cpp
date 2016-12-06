/*
 * Util.cpp
 *
 *  Created on: Nov 13, 2016
 *      Author: robertwinke
 */
#include "Util.h"
#include <sstream>

using namespace std;

std::string toString(int number) {
  stringstream ss;
  ss << number;
  return ss.str();
}

