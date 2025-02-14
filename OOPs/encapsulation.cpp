#include<iostream>

using namespace std;

/* 
Above is the Example of encapuslation where the we bundle the data variable with the member functions and here the data begin restricted for directly access

so this is will give you and extract Security in top of that 
 */

class Bank{


    private:
    double amount;

    public:

    // this is the Constructor we have created here 
    Bank(double initial_amount){
        if(initial_amount >= 0){
            amount = initial_amount;
        }
        else{
            cout <<"Amount can not be negative so Please enter the correct amount" <<endl;
        }
    }

    void depositMoney(double money){
        if(money >= 0){
            amount += money;
        }
        else{
            cout <<"Enter the Correct data here Please!!" <<endl;
        }
    }

    void WidrowMoney(double wedrowmoney){
        if(amount >= wedrowmoney && wedrowmoney >= 0){
            amount -= wedrowmoney;
        }
        else{
        cout <<"Sorry you dont have sufficient amount to widrow it thankyou !" <<endl;
        }

    }

    double getmoney(){
        return amount;
    }


};


int main(){

    Bank b(1000);

    cout << "Initial Amount in Bank Account is : " << b.getmoney() << endl;

    double depomoney = 500.00;

    b.depositMoney(depomoney);

    cout << "After deposit " << depomoney << " in Bank Account is : " << b.getmoney() << endl;

    double takeoutmoney = 300;

    b.WidrowMoney(takeoutmoney);

    cout << "After withdrowing money " << takeoutmoney <<  " amount left is : " << b.getmoney() <<endl;

    takeoutmoney = 900;

    b.WidrowMoney(takeoutmoney);

    cout << "After withdrowing money " << takeoutmoney <<  " amount left is : " << b.getmoney() <<endl;

    return 0;


}