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
  std::string name;
  std::vector<Aircraft*> aircrafts;
  unsigned int storedAmmo;
  unsigned int healthPoint;
  bool isThereAmmoLeft();
  int destroyingPower();
  void fillAllF35();
  void fillAllF16();

public:
  Carrier(std::string name, unsigned int ammo, unsigned int health);
  void addAircraft(std::string type) throw(const char*);
  void fillAll() throw(const char*);
  void fight(Carrier&);
  void suffersDamage(unsigned int);
  std::string getStatus();
  ~Carrier();
};


#endif /* CARRIER_HPP_ */
