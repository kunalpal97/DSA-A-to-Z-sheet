#include<bits/stdc++.h>


using namespace std;

int main(){

    string s;
    cout << "Enter the string : ";
    cin >> s;
    int n = s.size();
    string ans = "";

    for(int i=0; i<n; i++){

        if(s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'e'){
            ans+='1';
        }
        else
        ans+='0';
    }

    cout << "After converting into the Binary : " << ans << endl;

    int val = stoi(ans);

    int num = val;
    int get_val = 0;
    int base = 1;

    while(num){
        int rem = num % 10;
        num /= 10;
        get_val += rem * base;
        base = base * 2;
    }
    cout << "After converting into Digit Number is : " << get_val << endl;
    return 0;

}