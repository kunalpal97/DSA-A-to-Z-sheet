#include<bits/stdc++.h>

using namespace std;


bool checkPalindrome(string str){

    if(str.size() == 1){
        return true;

    }
    int start = 0 , end = str.size()-1;

    while(start<end){

        if(str[start]!= str[end]){
            return false;
            break;
        }
        start++;
        end--;
        
    }
    return true;
}


int solve(string &s){

    int n = s.size();

    int count = 0;

    for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){

            string ans = "";

            for(int k=i; k<=j; k++){
                ans += s[k];
                
            }
            if(checkPalindrome(ans)){
                count++;
            }
        }
    }

    return count+n;

}


int main(){

    string s;
    cout <<"Enter the String : ";
    cin >> s;

    int ans = solve(s);
    cout << "The possible number of strings can be formed will be : " << ans << endl;

    return 0;
}