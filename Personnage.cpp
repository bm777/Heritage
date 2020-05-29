#include "Personnage.h"

using namespace std;

Personnage::Personnage(): m_live(100), m_name("Jack")
{

}
Personnage::Personnage(string name) : m_live(100), m_name(name)
{

}
void Personnage::receive(int degats)
{
	m_live -= degats;
}
void Personnage::punch(Personnage &target) const
{
	target.receive(10);
}
void Personnage::selfPresent() const
{
	cout << "Hello, my name is " << m_name << "." << endl;
	cout << "I still have " << m_live << " points of live." << endl;
	
}