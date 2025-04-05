#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cout <<"Enter the Number : ";
    cin >> n;

    int temp = n;

    string ans = "";


    while(n>0){
        n--;
        ans =  char(n % 26 + 'A') + ans;
        n=n/26;
    }


    cout <<"The Excel Corresponding to " << temp << " is : " << ans << endl;
    
    return 0;

}