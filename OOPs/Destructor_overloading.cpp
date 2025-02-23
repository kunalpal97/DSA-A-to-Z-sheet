#include<bits/stdc++.h>

using namespace std;


class Vehicle{

public:
    Vehicle(){
        cout << "Constructor is called here " << endl;
    }
    ~Vehicle(){
        cout << "This is Destructor " <<endl;
    }
};

// if you are creating an new keyword to create a new Object 
// so while deleting that object using the destructor you have use the delete keyword
// destructor is begin called for stack-allocated objects


int main(){

    Vehicle *v1 = new Vehicle();
    cout << "This is my main function" <<endl;
    delete v1; // freeing memory explicitly

}