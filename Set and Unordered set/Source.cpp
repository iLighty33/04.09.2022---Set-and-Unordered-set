#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
#include <iterator>
#include "Unit.h"

using namespace std;

int main()
{
    system("chcp 1251>null");

    // Fill and show my Units
    Unit myUnit1("Коля", "Саппорт", 15);
    Unit myUnit2("Эльвира", "Маг", 18);
    Unit myUnit3("Витя", "Дагерщик", 20);
    Unit myUnit4("Надя", "Хиллер", 18);
    Unit myUnit5("Этнони", "Профет", 25);

    Unit myUnit6("Вася", "Гладиатор", 14);
    Unit myUnit7("Настя", "Саппорт", 15);
    Unit myUnit8("Костя", "Мечник", 17);
    Unit myUnit9("Валя", "Чёрнокнижник", 19);
    Unit myUnit10("Этнони", "Профет", 25);

    std::cout << "Моя коллекция 1: " << std::endl;
    std::set <Unit*> myUnitCollection1;
    myUnitCollection1.emplace(new Unit(myUnit1));
    myUnitCollection1.emplace(new Unit(myUnit2));
    myUnitCollection1.emplace(new Unit(myUnit3));
    myUnitCollection1.emplace(new Unit(myUnit4));
    myUnitCollection1.emplace(new Unit(myUnit5));

    std::set<Unit*>::iterator it;

    for (it = myUnitCollection1.begin(); it != myUnitCollection1.end(); it++) {
        (*it)->showMyUnit();
    }

    std::cout << "\nМоя коллекция 2: " << std::endl;
    std::set <Unit*> myUnitCollection2;
    myUnitCollection2.emplace(new Unit(myUnit6));
    myUnitCollection2.emplace(new Unit(myUnit7));
    myUnitCollection2.emplace(new Unit(myUnit8));
    myUnitCollection2.emplace(new Unit(myUnit9));
    myUnitCollection2.emplace(new Unit(myUnit10));

    for (it = myUnitCollection2.begin(); it != myUnitCollection2.end(); it++) {
        (*it)->showMyUnit();
    }

    // Check - Are there Units from 1st collecton into 2nd collection

    std::cout << "\n";

    Unit::CheckName(myUnitCollection1, myUnitCollection2);
    Unit::CheckFraction(myUnitCollection1, myUnitCollection2);
    Unit::CheckSize(myUnitCollection1, myUnitCollection2);
    Unit::CheckAll(myUnitCollection1, myUnitCollection2);

    return 0;
}
