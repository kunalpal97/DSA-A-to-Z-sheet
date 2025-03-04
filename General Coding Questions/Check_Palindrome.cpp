#include<bits/stdc++.h>

using namespace std;


int main(){

    int n;
    cout <<"Enter the Number : ";

    cin >> n;

    int num = n;
    int ans = 0;

    while(n){

        int rem = n % 10;
        ans = ans * 10 + rem;
        n = n / 10;
    }

    if(ans == num){
        cout <<"Number is a Palindrome" <<endl;
    }
    else
    cout <<"Number is Not a Palindrome" << endl;

    return 0;
}