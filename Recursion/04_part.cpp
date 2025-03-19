#include<bits/stdc++.h>

using namespace std;


void solve(int n){


    if(n <= 0){
        return ;
    }

    cout << n << " ";

    solve(n-1);


}



int main(){

    // I have to print the values form n -> 1 so 

    int n;
    cout <<"Enter the Number : ";
    cin >> n;

    solve(n);

    return 0;

}