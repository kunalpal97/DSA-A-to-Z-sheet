#include<bits/stdc++.h>
using namespace std;

class A{

    public:
    A(){
        cout << "This is Constructor of class of A" << endl;
    } 
};

class B : public A{

    public:
    B(){
        cout <<"This is Constructor of class of B" << endl;
    }
};

class C :  public A{

    public:
    C(){
        cout << "This is Constructor of class of C" << endl;
    }
};

class D : public B , public C{
    public:
    D(){

        cout <<"This is Constructor of class of D" << endl;
    }
};


int main(){

    // creating the object 

    D obj;  // yaha pe D class ke object ke constructor ko run kar na hai 

    // so jab tak D class ke constructor ke pass ke call jayega 
    // tp agar wo class ke pass koi parent class hai to pahle wo run hogi 

    // so pahle parent class ke constuctor ko chalna padega then hum child class ke constructor ko chalyege okay

}