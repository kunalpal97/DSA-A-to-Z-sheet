
#include<bits/stdc++.h>

using namespace std;



class Rectangle{
    private:
    double length;
    double width;

    public:
    Rectangle(){
        // nothing is there 
        length = 0;
        width = 0;
    }
    Rectangle(double l , double w){

        length = l;
        width = w;

    }

    void display(){
        cout <<"Rectangles data " << endl <<"Length : " << length <<" , width : " << width << endl;  
    }


    Rectangle operator + (Rectangle & r){

        Rectangle r3;

        r3.length =  this->length + r.length;
        r3.width = this->width + r.width;

        return r3;
    }

    Rectangle operator - (Rectangle & r) {

        Rectangle r3;

        r3.length = this->length - r.length;
        r3.width = this->width - r.width;

        return r3;
    }

    Rectangle operator * (Rectangle & r) {

        Rectangle r3;

        r3.length = this->length * r.length;
        r3.width = this->width * r.width;

        return r3;
    }


    Rectangle operator / (Rectangle & r) {

        Rectangle r3;

        r3.length = this->length / r.length;
        r3.width = this->width / r.width;

        return r3;
    }

    void operator = (Rectangle &r)
    {
        this->length = r.length;
        this->width = r.width;
    }

    bool operator == (Rectangle &r){

        if(this->length== r.length && this->width == r.width){
            return true;
        }
        else
        return false;
    }

    bool operator > (Rectangle &r){

        double area1 = this->length * this->width;
        double area2 = r.length * r.width;

        if(area1 > area2){

            return true;
        }

        else{
            return false;
        }
    }

};


int main(){

    Rectangle r1(10.3 , 3.2);
    Rectangle r2(5.5 , 2.5);


    Rectangle r3 = r1 + r2; // operator overloading using + operator

    r3.display();

    Rectangle r4 = r1 - r2; // using - operator 

    r4.display();

    Rectangle r5 = r1 * r2; // using * operator 
    r5.display();


    Rectangle r6 = r1 / r2; // using / operator 

    r6.display();

    Rectangle r7 = r2; // simply copy the values of r2 into the r7 

    r7.display();

    if(r1 == r2){

        cout << "r1 is equal to r2" << endl;
    }

    else{
        cout <<"r1 is not equal to r2" << endl;
    } 


    if(r1 > r2){
        cout << "R1 is bigger then R2" << endl;
    }
    else{
        cout << "R2 is less then R2" << endl;
    }

}