#include<bits/stdc++.h>

using namespace std;


class World{

    public:
    World() // default constructor or parameterised constructor 
    {
        cout << "Default constructor " << endl;
    }

    ~World(){ // this is Destructor 
        cout << "Destructor is called " << endl;
    }
};


int main(){

    World w1;  // constructor is called
    cout << "Some thing is there in the main function " << endl;

    return 0;



}