#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;

    // below code convert the number into an binary form here 

    int num = n;
    string ans="";

    while(num){

        int rem = num%2;
        ans = ans + to_string(rem);
        num = num / 2;

    }

    reverse(ans.begin() , ans.end());

    cout << "Binary representation of " << n <<" is " << ans << endl;
    // swap the digit numbers here accordly 
    int first = 0 , second = 1;

    while(first + 1 < ans.size()){

        swap(ans[first] , ans[second]);
        first+=2;
        second+=2;
    }

    cout << "After swapping the bits " << ans <<endl;

    int test = stoi(ans);

    // Below part will convert the binary into a digit number

    int ans_numeric = 0;
    int power = 1;
    while(test){
        int rem = test % 10;
        test = test / 10;
        ans_numeric += rem * power;
        power = power * 2;
    }
    cout << "Number is " << ans_numeric <<endl;

    return 0;

}