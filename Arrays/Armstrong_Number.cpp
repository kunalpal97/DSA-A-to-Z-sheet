#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter the Number : ";
    cin >> n;

    cout <<"Hello ji" <<endl;

    int temp = n;
    int count_digit = 0;

    cout <<"Number ky liya hai : " << n <<endl;

    while(temp!=0){
        temp%10;
        count_digit++;
        temp/=10;  
    }
    cout << "count the digit : " << count_digit << endl;

    int ans = n;
    int final = 0;

    while(ans!=0){

        final += pow(ans % 10 , count_digit);
        ans/=10;

    }

    if(final == n){
        cout <<"Its an Armstrong number";
    }
    else{
        cout <<"It is Not an Armstrong number";
    }

    
}