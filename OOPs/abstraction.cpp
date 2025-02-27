#include<bits/stdc++.h>


using namespace std;


class Car{
    public:
    void start(){
        ignition();  
        cout <<"Car has been started here " <<endl;
    }

    private:
    void ignition(){
        cout <<"ignition process has started....." << endl;
    }
};

int main(){


    Car c;
    c.start(); // here you are just calling the start function does no worry about how the ignition func works it just been called 
    return 0;


}