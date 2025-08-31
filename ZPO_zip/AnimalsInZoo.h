#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H
#include <iostream>
#include <string>
#include "Animal.h"

class AnimalsInZoo {
public:
    AnimalsInZoo();              // default constructor
    AnimalsInZoo(Animal a);      // constructor with one animal

    void addAnimal(Animal a);    // add or replace animal
    void display();              // show number of animals and details

private:
    int numAnimals;
    Animal animal;
};

#endif
