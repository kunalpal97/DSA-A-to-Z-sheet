#include<bits/stdc++.h>

using namespace std;


// run time polymorphism -> this type of polymorphism can be resolve at the run time and it an example of late binding
// run time polymorphism also known as Dynamic polymorphism

// its can be achive using the function overriding -> ye kya hota wo tuje pata function with same name and parameter 
//one is present in parent class other is present in child class


class A{

    public:
     void addTwoNumber(int a , int b){

        cout << "addition of two number in Parent class is : " << a + b << endl;
    }


};


class B : public A{

    public:
     void addTwoNumber(int a , int b){
        cout << "addition of two number in child class is : " << a + b << endl;
    }
};

int main(){

    A *obj = new B();

    obj->addTwoNumber(52 , 11);


}