#ifndef WARRIOR_H_INCLUDED
#define WARRIOR_H_INCLUDED

#include <iostream>
#include <string>
#include "Personnage.h"

class Warrior: public Personnage // ----import public method and attribut of Personnage
{
public:
	void hitWarrior() const;
	// ---Method which conern only Warrior
	void selfPresent() const;

};

#endif // WARRIOR_H_INCLUDED
