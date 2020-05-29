#include "Warrior.h"
#include "Personnage.h"
#include <iostream>

using namespace std;

Warrior::Warrior(string name) : Personnage(name), m_mana(100)
{

}

void Warrior::selfPresent() const
{
	Personnage::selfPresent();
	cout << "I'm a redoutable Wario." << endl;
}

