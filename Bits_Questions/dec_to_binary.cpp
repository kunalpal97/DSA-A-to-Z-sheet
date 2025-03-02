#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cout <<"Enter the Number : ";
    cin >> n;

    string str = "";
    int num = n;

    while(num){

        int rem = num % 2;
        str += to_string(rem);
        num = num/2;
    }
    reverse(str.begin() , str.end());

    int ans = stoi(str);


    cout << "The Binary Conversion of " << n << " is " << ans << endl;

}