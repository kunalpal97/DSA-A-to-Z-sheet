#include<bits/stdc++.h>

using namespace std;

// there are four piller in opps 
/*
1 . st one is encapsulation example  ,  abstraction , inheritance , polymorphism these are the examples 

1. encapsulation is nothing but bunding  the data variables and member function togeather is called encapuslation here the data is being restrited no one without the permission can access


 */


class Person{

    private:

    string name;
    int age;


    public:
    // making constructor 
    Person(string n , int a){
        name = n;
        age = a;
    }

    void getThedata(){
        cout << "Name of person : " << name << endl <<"Age of person :" << age << endl;
    }

};


int main(){

    Person p1("Kunal" , 22);
    p1.getThedata();


}