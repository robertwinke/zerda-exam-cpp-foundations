/*
 * Aircraft.cpp
 *
 *  Created on: Dec 6, 2016
 *      Author: robertwinke
 */

#include "Aircraft.hpp"
#include "Util.h"


Aircraft::Aircraft() {
  ammo = 0;
  maxAmmo = 0;
  baseDamage = 0;
  type = "";
}
int Aircraft::fight() {
  int damage;
  damage = ammo * baseDamage;
  ammo = 0;
  return damage;
}
void Aircraft::refill(unsigned int& availableAmmo) {
  if (availableAmmo > maxAmmo) {
    ammo = maxAmmo;
    availableAmmo -= maxAmmo;
  }
  else {
    ammo = availableAmmo;
    availableAmmo = 0;
  }
}
std::string Aircraft::getType() {
  return type;
}
std::string Aircraft::getStatus() {
  return "Type " +  type + ", Ammo " + toString(ammo) + ", Base Damage " + toString(baseDamage) + ", All Damage " + toString(ammo*baseDamage);

}
Aircraft::~Aircraft() {

}
