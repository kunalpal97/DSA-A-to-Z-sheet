#include<bits/stdc++.h>

using namespace std;


class Animal{


    public:
    void eat(){
        cout << "eating something..........  " <<endl;
    }

    void sleep(){
        cout << "Animal is sleeping...." <<endl;
    }
};


class Dog : public Animal { // inheriting the parent properties

    public:
    void bark(){
        cout << "Dog is barking........" << endl;
    }
    void legs(){

        cout << "I have 4 legs...." <<endl;
    }

};

class Cat : public Animal {

    public:
    void meow(){
        cout << "Cat do meow meow ....." <<endl;
    }

};

int main(){

    // Dog doggie;
    // doggie.eat();
    // doggie.bark();

    cout << endl << "Know For cat" <<endl;

    Cat c1;
    c1.meow();
    c1.sleep();
    c1.eat();

    return 0;



}