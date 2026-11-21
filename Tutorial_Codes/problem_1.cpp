// Create a base class called "Pets" with a method called makeSound(). Derived classes of "Pets" could be "Cat" and "Dog".
// Every animal can "make a sound", but each one sounds different. Use OOP approach to implement the program.

#include <iostream>
using namespace std;
class Pets
{
public:
    void makeSound()
    {
        cout << "make a sound" << endl;
    }
};

class Cat : public Pets
{
public:
    void makeSound()
    {
        cout << "meow meow" << endl;
    }
};

class Dog : public Pets
{
public:
    void makeSound()
    {
        cout << "bark bark" << endl;
    }
};

int main()
{
    Pets petObj;
    Cat catObj;
    Dog dogObj;
    petObj.makeSound();
    catObj.makeSound();
    dogObj.makeSound();
    return 0;
}