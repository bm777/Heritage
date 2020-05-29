#include <iostream>
#include "Personnage.h"
#include "Warrior.h"
#include "Magician.h"

using namespace std;

int main()
{
    cout << "----Main program------" << endl;
    Personnage peter("Peter");
    peter.selfPresent();

    return 0;
}
