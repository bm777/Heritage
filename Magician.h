#ifndef MAGICIAN_H_INCLUDED
#define MAGICIAN_H_INCLUDED

#include <iostream>
#include <string>
#include "Personnage.h"

class Magician : public Personnage // ---- import all public Personnage method and attribute
{
public:
	Magician(std::string name);
	void fireMagic() const;
	void iceMagic() const;

protected:
	int m_mana;
};

#endif // MAGICIAN_H_INCLUDED
