/*
 * Aircraft.cpp
 *
 *  Created on: Dec 6, 2016
 *      Author: robertwinke
 */

#include "Aircraft.hpp"


Aircraft::Aircraft() {
  ammo = 0;
  maxAmmo = 8;
  baseDamage = 30;
}
int Aircraft::fight() {
  int damage;
  damage = ammo * baseDamage;
  ammo = 0;
  return damage;
}
void Aircraft::refill(int& availableAmmo) {
  ammo = maxAmmo;
  availableAmmo -= maxAmmo;
}
//std::string Aircraft::getType() {
//
//
//}
//std::string Aircraft::getStatus() {
//
//}
