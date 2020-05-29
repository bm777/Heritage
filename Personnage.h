#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED
#include <iostream>
#include <string>

class Personnage
{
public:
	Personnage();
	Personnage(std::string name);
	//~Personnage();
	void receive(int degats);
	void punch(Personnage &target) const;

protected:
	int m_live;
	std::string m_name;

};


#endif // PERSONNAGE_H_INCLUDED
