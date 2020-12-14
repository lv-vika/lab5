#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Fish
{
  protected:
    string name, species, prefered;
    int age, needed_space, size;
    bool is_aggressive;

  public:
    string getSpecies();
    string getName();
    string getFood();   
    int getAge();    
    int getSpace();  
    int getSize();
    bool getAggressive();

    Fish(string name, string spicies, string prefered, int age, int needed_space, int size, bool is_aggressive);
    ~Fish();
};