#pragma once
#include "Fish.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Aquarium
{
private:
    int free_space;
    vector<Fish>fish;

public:
    bool add_fish(Fish fish);
    void top_tree();
    vector<Fish> bubbleSortIncrease(vector<Fish> array);
    int getFreeSpace();
};