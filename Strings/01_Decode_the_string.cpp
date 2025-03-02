#include<bits/stdc++.h>

using namespace std;

// i/p 3[abc] -> o/p abcabcabc

// this is how we will solve this type of questions 
// 3[a2[ab]] ->  abab  -> 3[aabab] -> this will my final output aababaababaabab

string solve(string &str){

    stack<char> st;

    for(int i=0; i<str.size(); i++){

        if(str[i]!= ']') st.push(str[i]);
        else{
            string word;
            while(!st.empty() && st.top()!='['){
                word.push_back(st.top());
                st.pop();
            }
            reverse(word.begin() , word.end());
            st.pop();
            string nums;
            while(!st.empty() && isdigit(st.top())){
                nums.push_back(st.top());
                st.pop();
            }
            reverse(nums.begin() , nums.end());

            int n = stoi(nums);
            string repeated;
            for(int j=0; j<n; j++){
                repeated.append(word);
            }

            for(char c : repeated){
                st.push(c);
            }

        }
    }

    string ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin() , ans.end());
    return ans;

    
}


int main(){


    string str;
    cout << "Entre the String : ";

    cin >> str;


    string ans = solve(str);
    cout << "ans String is : " << ans << endl;
}