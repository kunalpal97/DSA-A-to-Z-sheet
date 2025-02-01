#include<bits/stdc++.h>

// Do this code later for the Interview Purpose Okay 
// This program is for you have given a string you have to reverse the vowels only 
// so in this program  a , e , i , o , u if you have you have to reverse it that 
// without altering the other character 


using namespace std;


bool solve(char s){

    
    int arr[10] = {'a' , 'e' , 'i' ,'o' , 'u' , 'A' ,'E' , 'I' , 'O' , 'U'};

    for(int i=0; i<10; i++){

        if(arr[i] == s){
            return true;
        }
    }

    return false;
}



int main(){

    string s;
    cout << "Enter the String : ";
    cin >> s;
    int start = 0 ,  end = s.size()-1;


    cout << endl << "Before swap of the Element is : " << s << endl;


    while(start<end){

        if(solve(s[start]) && solve(s[end])){
            swap(s[start] , s[end]);
            start++;
            end--;
        }

        else if(!solve(s[start])){
            start++;
        }

        else if(!solve(s[end])){
            end--;
        }
    }
    cout << endl << "After swap of the element become : " << s <<endl;

    return 0;

}