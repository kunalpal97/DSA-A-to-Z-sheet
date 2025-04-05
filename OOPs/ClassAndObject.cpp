
#include<bits/stdc++.h>

using namespace std;

// we can create a class using the class key word it is nothing but a user define data type 
// where we created our data member and data function 


class Book {

    public:  // access specifier matlb hai class ki wo chizze kon use kar skta hai agar wo private hai to koi nhi use karta 
    // but if it is public then anyone can use it no matter form anywhere form the code
    // these are the data members
    string Author_name;
    string Book_name;
    int isbn_no;

    public:

    // these are the member functions 

    void Add_the_book(){

        // book ko retrieve kar ke dega

        cout << "This is an add book function" << endl;

    }

    void getmyBook(){

        // get your book here 
        cout <<"This is normal get book Function" <<endl;
    }

};


int main(){

    Book b1; // object hum main function ke andar banate hai 
    // how to create an object just write class name and any_object name for that class for eg: Book obj; so obj is an object here 
    b1.Author_name = "Ravi kant gupta";
    b1.Book_name = "Kya pata duniya jaane wo";  // this is we assign the values to the data members of the class

    cout << b1.Author_name << endl;

    cout << b1.Book_name << endl;

    return 0;

}