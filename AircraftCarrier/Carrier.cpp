/*
 * Carrier.cpp
 *
 *  Created on: Dec 6, 2016
 *      Author: robertwinke
 */


#include "Carrier.hpp"

Carrier::Carrier(unsigned int ammo, unsigned int health) {
  storedAmmo = ammo;
  healthPoint = health;
}
void Carrier::addAircraft(std::string type) throw(const char*) {
  Aircraft* aircraftToAdd;
  if (type == "F16") {
    aircraftToAdd = new F16;
  }
  else if (type == "F35") {
    aircraftToAdd = new F35;
  }
  else {
    throw "no such aircraft type";
  }
  aircrafts.push_back(aircraftToAdd);
}
void Carrier::fillAll() throw (const char*){
  if (isThereAmmoLeft()) {
    for (int i  = 0; i < aircrafts.size(); i++) {
      if (aircrafts[i]->getType() == "F35") {
        aircrafts[i]->refill(storedAmmo);
      }
    }
    for (unsigned int i  = 0; i < aircrafts.size(); i++) {
      if (aircrafts[i]->getType() == "F16") {
        aircrafts[i]->refill(storedAmmo);
      }
    }
  }
  else {
    throw "there is no ammo left";
  }
}
void Carrier::fight(Carrier& enemy) {

}
std::string Carrier::getStatus() {
  return "ize";
}
bool Carrier::isThereAmmoLeft() {
  return storedAmmo != 0;
}
Carrier::~Carrier() {
  for (unsigned int i = 0; i < aircrafts.size(); i++) {
    delete aircrafts[i];
  }
}

