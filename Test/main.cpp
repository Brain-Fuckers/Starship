#include <iostream>
#include "../lib/starship.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Starship unit;
    unit.init();
    for (int i; i < 10; i++){
        unit.status((double)i);
    }
//    unit.demage();
//    cout << State << endl;

    return 0;
}

