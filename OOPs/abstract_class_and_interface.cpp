#include<bits/stdc++.h>

using namespace std;



class Shape{
    public:
    virtual void fun() = 0;   // pure virtual function 
    virtual void print() = 0;

    // void print(){
    //     cout <<"This is my regular function of class Shape " << endl;
    // }


};

// this is the concrete class which is the class of the abstract class

class Circle : public Shape{

    public:
    void fun(){
        cout <<"This is my fun method in Circle class " <<endl;
    }
    void print(){
        cout <<"This is the print method of circle class " <<endl;
    }
};


// interface 


int main(){

    Circle c;

    c.fun();
    c.print();

}