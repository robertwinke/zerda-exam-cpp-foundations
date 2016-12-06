/*
 * Carrier.hpp
 *
 *  Created on: Dec 6, 2016
 *      Author: robertwinke
 */
#include <vector>
#include "Aircraft.hpp"
#include "F16.hpp"
#include "F35.hpp"

#ifndef CARRIER_HPP_
#define CARRIER_HPP_


class Carrier {
private:
  std::vector<Aircraft*> aircrafts;
  unsigned int storedAmmo;
  unsigned int healthPoint;

public:
  Carrier(unsigned int ammo, unsigned int health);
  void addAircraft(std::string type) throw(const char*);
  void fillAll() throw(const char*);
  bool isThereAmmoLeft();
  void fight(Carrier&);
  std::string getStatus();
  ~Carrier();
};


#endif /* CARRIER_HPP_ */
