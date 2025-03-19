#include<bits/stdc++.h>

using namespace std;

// using the recursion i have to print the values form 1 -> n

// this will take TC -> O(N) , SC -> O(N)




void solve(int i , int n){

    if(i >= n){
       return ;
    }

    cout << i << " ";

    solve(i+1 , n);
}


int main(){


    //
    int n ;
    cout <<"Enter the Number : ";
    cin >> n;


    solve(1 , n);
}