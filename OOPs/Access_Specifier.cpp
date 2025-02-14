#include<iostream>

using namespace std;

class Book{

    public:
    int a;
    private:
    int b;
    protected:
    int c;


    public:
    void test(){

        a = 3;
        b = 9;
        c = 10;

        cout << "Public class is " << a << endl;

        cout << "private class is " << b << endl;
        
        cout << "protected class is " << c << endl;
        
    }
};


int main(){

    Book obj;

    obj.a = 10;
    // obj.b = 10;
    // obj.c = 52;

    obj.test();

}