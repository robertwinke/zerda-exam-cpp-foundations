/*
 * Aircraft.hpp
 *
 *  Created on: Dec 6, 2016
 *      Author: robertwinke
 */
#include <string>


#ifndef AIRCRAFT_HPP_
#define AIRCRAFT_HPP_

class Aircraft {
protected:
  std::string type;
  unsigned int ammo, maxAmmo, baseDamage, allDamage;
public:
  Aircraft();
  int fight();
  void refill(unsigned int& availableAmmo);
  std::string getType();
  unsigned int getAllDamage();
  std::string getStatus();
  virtual ~Aircraft();
};



#endif /* AIRCRAFT_HPP_ */
