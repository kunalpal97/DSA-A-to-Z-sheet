#include<bits/stdc++.h>

using namespace std;


/*
inside the abstract class 
-> we have atleast one pure virtual function
-> we have on regular function 


pure virtual function are those function which dont have the implementations

*/

// this is known as abstract class

class Animal {

    public:
    void print(){
        cout <<"Printing the Animal in Animal class" << endl;
    }

    virtual void test() = 0;  // pure virtual function this 


};

class Dog : public Animal{

    public:
    void test(){
        cout <<"This is test function in Dog class" <<endl;
    }
};




int main(){
    // Animal a;
    Dog d;
    d.print();
    d.test();

    

}