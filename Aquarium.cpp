#include "Aquarium.h"

bool Aquarium::add_fish(Fish fish)
{
    if (free_space > fish.getSpace())
    {
        this->fish.push_back(fish);
        free_space -= fish.getSpace();
        return true;
    }
    else
    {
        cout << "\n There is not enough space for this fish";
        return false;
    }
}

void Aquarium::top_tree()
{
     fish = bubbleSortncrease(fish);
    for (int i = 0; i < 3; i++)
    {
        cout << "\n" << fish[i].getName() << " " << fish[i].getSize();
    }
}


vector<Fish> bubbleSortncrease(vector<Fish> array)
{
    int sizef = array.size();
    for (int i = sizef; i > 0; i--)
        for (int j = sizef - i; j > 0; j--)
        {
            if (array[j].getSize() > array[j - 1].getSize())
            {
                swap(array[j], array[j - 1]);
            }
        }
    return array;
}
int Aquarium::getFreeSpace()
{
    return free_space;
}
