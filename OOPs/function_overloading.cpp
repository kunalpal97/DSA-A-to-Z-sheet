#include<bits/stdc++.h>

using namespace std;

// function overloading is when two or more than two functions having same name but parameter is different is called as function overloading


void display(int a , int b){

    cout << "a is " << a << endl <<"b is " << b <<endl;

}


void display(string name , string surname){

    cout << "Name is : " << name << " surname is "<< endl << surname << endl;
}

void display(int a , int b , int c) {

    cout <<"Sum of three number is : " << a + b + c << endl;
}


int main(){

    display(5 , 2);
    display("Kunal" , "Pal");
    display(10 , 20 , 20);
    // display(10,66,1,9); no instance of overlaoding function "display" matchesthe argument list



}