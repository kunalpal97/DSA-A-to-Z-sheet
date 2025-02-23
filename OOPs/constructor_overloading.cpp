#include<bits/stdc++.h>

using namespace std;


class Vehicle{

    // in this video we are going to see what are the 
    // constructor overloading 
    // constructor overriding 

public:
    Vehicle(int a , int b){  // this is how we create the constructor overlaoding 
        cout << " I am First Constructor " << endl;
        cout << "Addition of the number is " << a + b << endl;
    }

    Vehicle(string fname , string lname){
        cout << " I am Second Constructor " << endl;
        cout << "Full Name is : " << fname  <<" " << lname << endl;
    }


    Vehicle(int age){
        cout << " I am Third Constructor " << endl;
        cout << "age is " << age << endl;
    }


    ~Vehicle(){
        cout << " This is Destructor Which is used to destroy the object " << endl; 
    }



};


int main(){

    Vehicle *v1 = new Vehicle(10 , 12);

    cout <<"This is the Main function okay " <<endl;

    Vehicle *v2 = new Vehicle("Kunal" , "Pal");

    Vehicle *v3 = new Vehicle(33);

    // Vehicle *v4 = new Vehicle(12,33,65,99,12);  this will give you an error 

    delete v1;
    delete v2;
    delete v3;



}