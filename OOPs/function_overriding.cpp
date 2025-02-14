#include<bits/stdc++.h>

using namespace std;

class Animal {

    public:
    virtual void print(){  // virtual key word 
        cout << "I am Animal but I am the Parent class " <<endl;
    }
};


class Cat : public Animal {  // this is drived c


    public:
    virtual void print(){
        cout <<"I am the cat and I am the Child class" <<endl;
    }
};


int main(){

    // Animal a;
    // a.print(); this will print the function in the animal class

    Animal* obj = new Cat();

    obj->print();

    

}