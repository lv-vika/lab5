#include "Fish.h"

string Fish::getName()
{
    return name;
}

string Fish::getSpecies()
{
    return species;
}

string Fish::getFood()
{
    return prefered;
}

int Fish::getAge()
{
    return age;
}

int Fish::getSpace()
{
    return needed_space;
}

int Fish::getSize()
{
    return size;
}

bool Fish::getAggressive()
{
    return is_aggressive;
};

Fish::Fish(string name, string spEcies, string prefered, int age, int needed_space, int size, bool is_aggressive)
{
    this->name = name;
    this->species = spEcies;
    this->prefered = prefered;
    this->age = age;
    this->needed_space = needed_space;
    this->size = size;
    this->is_aggressive = is_aggressive;

}
Fish::~Fish() {}

