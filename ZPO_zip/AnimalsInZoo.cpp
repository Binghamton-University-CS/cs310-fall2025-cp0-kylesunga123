#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo()
{
    numAnimals = 0;
}

AnimalsInZoo::AnimalsInZoo(Animal a)
{
    animal = a;
    numAnimals = 1;
}

void AnimalsInZoo::addAnimal(Animal a)
{
    animal = a;
    numAnimals = 1;
}

void AnimalsInZoo::display()
{
    std::cout << "numAnimals=" << numAnimals << std::endl;
    if (numAnimals > 0)
    {
        animal.display();
    }
}