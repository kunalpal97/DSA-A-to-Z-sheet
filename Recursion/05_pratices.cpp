#include<bits/stdc++.h>

using namespace std;


// task is to print the 1 -> n with out using the i+1 
// task is to print the n - > 1 with out using the i-1 here okay 

// also understand how the calling of the self made function is begin done here 



// this code will print the value form 1->n without i+1
// void solve(int i , int n){

//     if(i<1){
//         return;
//     }
//     solve(i-1 , n);
//     cout << i << " ";
// }


void print(int i , int n){

    if(i>n){
        return;
    }

    print(i+1, n);
    cout << i <<" ";
}


int main(){


    int n;
    cin >> n;

    print(1 , n);

    return 0;
}