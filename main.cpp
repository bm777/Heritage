#include <iostream>
#include "Personnage.h"
#include "Warrior.h"
#include "Magician.h"

using namespace std;

int main()
{
    cout << "----Main program------" << endl;
    Personnage myPersonnage;
    Warrior myWarrior;

    myPersonnage.punch(myWarrior);
    myWarrior.punch(myPersonnage);

    return 0;
}
