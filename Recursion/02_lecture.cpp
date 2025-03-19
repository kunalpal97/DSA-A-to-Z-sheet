#include<bits/stdc++.h>

using namespace std;

//  print the name n times using the recursion here 


void solve(int n , int i){

    if(i > n) {
        return ;
    }

    cout <<"Kunal " << endl;

    solve(n , i+1);

}

// also understand the time complexity of the recursion is matter so 
// TC -> O(N) , ans space complexity is O(N) 



int main(){

    int n;
    cout << "Enter the Number ";
    cin >> n;
    solve(n , 1);
    
}