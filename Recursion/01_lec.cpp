#include<bits/stdc++.h>

using namespace std;


void solve(int count){


    if(count >= 5){
        return ;
    }

    cout << count <<" ";
    count++;

    solve(count);
}

int main(){

    int count = 1;


    cout <<"This is my main function" << endl;

    solve(count);


}