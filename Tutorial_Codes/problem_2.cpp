// Create a base class called "Animal" with a method called makeSound(). Derived classes of "Animal" is "Dog".
// Use Polymorphism with virtual function to implement the program.
#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void makeSound()
    {
        cout << "make a sound" << endl;
    }
};
class Dog : public Animal
{
    void makeSound() override
    {
        cout << "bark bark" << endl;
    }
};
int main()
{
    Animal *animalPtr;
    Dog dogObj;
    animalPtr = &dogObj;
    animalPtr->makeSound();
    return 0;
}