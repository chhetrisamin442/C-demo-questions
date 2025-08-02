//13. Write a program that illustrate the concept of runtime polymorphism.
#include <iostream>
using namespace std;
class Animal
 {
public:
    virtual void makeSound() 
    {
        cout << "Animal makes a sound" << endl;
    }
};
class Dog : public Animal 
{
public:
    void makeSound() override 
    {
        cout << "Dog barks" << endl;
    }
};
class Cat : public Animal
 {
public:
    void makeSound() override 
    {
        cout << "Cat meows" << endl;
    }
};
void playSound(Animal &a)
 {
    a.makeSound();
}
int main() 
{
    Dog dog;
    Cat cat;
    playSound(dog);
    playSound(cat); 
    return 0;
}
