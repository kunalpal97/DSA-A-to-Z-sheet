#include<bits/stdc++.h>

using namespace std;

int main(){


    string s;
    cout <<"Enter the String ";
    cin >> s;


    int n = s.size();

    int count_1 = 0;
    int count_2 = 0;


    for(int i=0; i<n; i++){
        if(s[i] == '*'){
            count_1++;
        }
        else if(s[i] == '#'){
            count_2++;
        }
    }

    if(count_1 > count_2){
        cout <<"is * is more then # ans : " << count_1 - count_2 << endl;
    }

    else if(count_1 < count_2) {
        cout <<"if # is more then * ans : " << count_1 - count_2 << endl;
    }

    else if(count_1 == count_2){
        cout << "if both are equal then : " << 0 << endl;
    }


}