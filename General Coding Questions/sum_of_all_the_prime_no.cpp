#include<bits/stdc++.h>

using namespace std;

// tcs ke nqt mai.. ye code aaya tha 20th march ko 


bool check_prime(int n){

    if(n == 1){
        return false;
    }
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){

    int n;
    cout <<"Enter the Number : ";
    cin >> n;

    int sum = 0;
    for(int i=2; i<=n; i++){
        if(check_prime(i)){
            sum += i;
        }
    }
    cout <<"Sum of prime number are : " << sum << endl;

}