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

class NewBook : public Book {

    public:
    void match(){

        a = 10;
        // b = 88;   in accessible in this class because it is mark as private
        c = 22;
    }

};


int main(){

    Book obj;

    obj.a = 10;
    // obj.b = 10;  // in accessible out side the class 
    // obj.c = 52;   // protected specifier is also in accessible out side the class

    obj.test();

}