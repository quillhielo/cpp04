#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    std::cout << "-----1.ANIMAL_ARRAY_TEST_CONSTRUCTORS.-----" << std::endl;
    Animal *array[4];
    for(int i = 0; i < 2; i++)
        array[i] = new Cat();
    for(int i = 2; i < 4; i++)
        array[i] = new Dog();
    std::cout << std::endl;
    std::cout << "-----2.DOG_CONSTRUCTORS.-----" << std::endl;
    Dog *a = new Dog();
    std::cout << "---------------------------" << std::endl;
    Dog *b = new Dog(*a);
    std::cout << "---------------------------" << std::endl;
    Dog *c = new Dog();
    std::cout << "---------------------------" << std::endl;
    *c = *a;
    std::cout << "-----2.1.DOG_DESTRUCTORS.-----" << std::endl;
    delete a;
    delete b;
    delete c;
    std::cout << std::endl;
    std::cout << "-----3.CAT_CONSTRUCTORS.-----" << std::endl;
    Cat *d = new Cat();
    std::cout << "---------------------------" << std::endl;
    Cat *e = new Cat(*d);
    std::cout << "---------------------------" << std::endl;
    Cat *f = new Cat();
    std::cout << "---------------------------" << std::endl;
    *f = *d;
    std::cout << "-----3.1.CAT_DESTRUCTORS.-----" << std::endl;
    delete d;
    delete e;
    delete f;
    std::cout << std::endl;    
    std::cout << "-----4.TEST_DEEP_COPY.-----" << std::endl;
    Dog *dog1 = new Dog();
    dog1->getBrain()->setIdea(0, "I want to play!");
    Dog *dog2 = new Dog(*dog1);
    std::cout << "Dog1's idea: " << dog1->getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2's idea: " << dog2->getBrain()->getIdea(0) << std::endl;
    dog2->getBrain()->setIdea(0, "I want to eat!");
    std::cout << "After changing Dog2's idea:" << std::endl;
    std::cout << "Dog1's idea: " << dog1->getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2's idea: " << dog2->getBrain()->getIdea(0) << std::endl;
    delete dog1;
    delete dog2;
    std::cout << std::endl;
    std::cout << "-----5.TEST_SUBJECT.-----" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    std::cout << std::endl;
    std::cout << "-----6.ANIMAL_ARRAY_TEST_DESTRUCTORS.-----" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        delete array[i];
        std::cout << "---------------------------" << std::endl;
    }
    return 0;
}