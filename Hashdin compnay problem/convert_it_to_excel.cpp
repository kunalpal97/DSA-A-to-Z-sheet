#include<bits/stdc++.h>

using namespace std;


int main(){

    int n ;
    cout <<"Enter the Number : ";
    cin >> n ;
    int temp = n;
    string ans = "";

    while(n){

        n--;
        ans = char(n % 26 + 'A') + ans;
        n/=26;
        
    }


    cout <<"The Numbers after converting to excel will be " << temp << " will be : " << ans << endl;


    return 0;
}