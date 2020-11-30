

/*Створити клас Fish(name, age, species, size, prefferedFood, isAggressive, neededSpace(cubic meters)).Створити клас
Aquarium,який мiстить різних рибок, та має поля totalVolume(cubic meters) і freeSpace(cubic meters).Додати методи
для виведення 3 - ьох найбільших риб у акваріумі.У методі main створіть декілька акваріумів, враховуючи вимоги
рибок(агресивних можна додавати лише до агресивних, вільне місце в акваріумі повинне завжди залишатися >= 0) 
та продемонструйте роботу класів.*/


#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Fish
{
protected:
    string name, spicies, preffered_food;
    int age, needed_space, size;
    bool is_aggressive;
    
public:
    string getname()
    {
        return name;
    }
    string getspicies()
    {
        return spicies;
    }
    string getfood()
    {
        return preffered_food;
    }
    int getage()
    {
        return age;
    }
    int getspace() 
    {
        return needed_space;
    }
    int getsize()
    {
        return size;
    }
    bool getaggressive() 
    {
        return is_aggressive;
    };

    
    Fish(string name, string spicies, string preffered_food, int age, int needed_space, int size, bool is_aggressive)
    {
        this->name = name;
        this->spicies = spicies;
        this->preffered_food = preffered_food;
        this->age = age;
        this->needed_space = needed_space;
        this->size = size;
        this->is_aggressive = is_aggressive;

    }
  ~Fish() {}
};

class Aquarium
{
private:
    int free_space;
     vector<Fish>fish;
public:

    Aquarium()
    {
        free_space = 100;
    }


    int getfree_space()
    {
        return free_space;
    }
    bool add_fish(Fish fish)
    {
        if (free_space > fish.getspace())
        {
            this->fish.push_back(fish);
            free_space -= fish.getspace();
            return true;
        }
        else
        {
            cout << "\n There is not enough space for this fish";
                return false;
        }
    }


    void top_tree()
    {
        fish = Sort(fish);
        for (int i = 0; i < 3; i++) 
        {
            cout << "\n" << fish[i].getname() << " " << fish[i].getsize();
        }
    }

    vector<Fish> Sort(vector<Fish> array)
    {
        int sizef = array.size();
        for (int i = sizef; i > 0; i--)
            for (int j = sizef - i; j > 0; j--)
            {
                if (array[j].getsize() > array[j - 1].getsize())
                {
                    swap(array[j], array[j - 1]);
                }
            }


        return array;
    }
   
};


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









