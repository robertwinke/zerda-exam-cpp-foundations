/*
 * Carrier.cpp
 *
 *  Created on: Dec 6, 2016
 *      Author: robertwinke
 */


#include "Carrier.hpp"
#include "Util.h"

Carrier::Carrier(std::string name,unsigned int ammo, unsigned int health) {
  this->name = name;
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
    for (unsigned int i  = 0; i < aircrafts.size(); i++) {
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
  for (unsigned int i = 0; i < aircrafts.size(); i++) {
    enemy.suffersDamage(aircrafts[i]->fight());
  }
}
std::string Carrier::getStatus() {
  if (healthPoint == 0) {
    return "It's dead Jim :(";
  }
  else {
    std::string status = name + "\n";
    int totalDamage = 0;
    for (unsigned int i = 0; i < aircrafts.size(); i++) {
      totalDamage += aircrafts[i]->getAllDamage();
    }
    status += "Aircraft count: " + toString(aircrafts.size()) + ", Ammo storage: "
    + toString(storedAmmo) + ", Total damage: " + toString(totalDamage) + ", Health: " + toString(healthPoint) + "\n";
    status += "Aircrafts: \n";
    for (unsigned int i = 0; i < aircrafts.size(); i++) {
      status += aircrafts[i]->getStatus();
    }
    return status;
  }
}
bool Carrier::isThereAmmoLeft() {
  return storedAmmo != 0;
}
void Carrier::suffersDamage(unsigned int damage) {
  if (damage >= healthPoint) {
    healthPoint = 0;
  }
  else {
    healthPoint -= damage;
  }
}
Carrier::~Carrier() {
  for (unsigned int i = 0; i < aircrafts.size(); i++) {
    delete aircrafts[i];
  }
}

