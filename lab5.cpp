#include <iostream>
#include <string>
#include <vector>
#include "Aquarium.h"
#include "Fish.h"


int main()
{
    Aquarium good;
    Aquarium bad;

    good.add_fish(Fish("Dodo", "gip", "bread", 1, 3, 1, false));
    good.add_fish(Fish("luppy", "fogo", "bread", 2, 5, 3, false));
    good.add_fish(Fish("rigo", "nofa", "bread", 1, 7, 4, false));
    good.add_fish(Fish("dobby", "elf", "bread", 3, 10, 6, false));
    bad.add_fish(Fish("reib", "joru", "meat", 1, 5, 4, true));
    bad.add_fish(Fish("fokko", "jofa", "meat", 4, 16, 10, true));
    bad.add_fish(Fish("fomni", "hrei", "meat", 2, 7, 6, true));
    bad.add_fish(Fish("ewi", "jemi", "meat", 1, 4, 7, true));
  
    good.top_tree();
    bad.top_tree();

    return 0;
}









