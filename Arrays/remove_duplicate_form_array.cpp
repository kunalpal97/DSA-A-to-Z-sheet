#include<bits/stdc++.h>

using namespace std;


vector<int> solve(int arr[] , int n){
    
    vector<int> ans;
    if(n <= 1){
        cout <<"Array elements does not have Sufficient Elements " <<endl;
        return "-1";
    }

    unordered_map<int , int> mp;


    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }





}


int main(){

    int n;
    cout <<"Enter the Size of Array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the Array Elements : ";

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "The Array Elements : ";

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }


    int bool = solve(arr , n);
}