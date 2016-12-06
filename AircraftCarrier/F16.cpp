/*
 * F16.cpp
 *
 *  Created on: Dec 6, 2016
 *      Author: robertwinke
 */

#include "F16.hpp"

F16::F16(): Aircraft() {
  this->type = "F16";
  this->maxAmmo = 8;
  this->baseDamage = 30;
  this->allDamage = maxAmmo * baseDamage;
}
