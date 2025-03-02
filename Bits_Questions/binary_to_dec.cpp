#include<bits/stdc++.h>

using namespace std;

// program which convert the Binary to digit 

// eg 01101 -> 13

int main(){
    int n;
    cout <<"Enter the Binary Number : ";
    cin >> n;

    int num = n;
    int dec_num = 0;
    int power = 1;

    while(n){
        int rem = n % 10;
        n = n / 10;
        dec_num += rem * power;
        power *= 2;
    }

    cout << "The given Binary : " << num << endl << "converted digit is : " << dec_num << endl;
    return 0;
} 