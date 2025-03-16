#include<bits/stdc++.h>

using namespace std;


int max_element(int arr[] , int n){

    if(n == 0){
        cout<<"Does Not have Any element";
        return 0;
    }

    int maxi = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}


int min_element(int arr[] , int n){

    if(n == 0){
        cout <<"Array does not contain any element" <<endl;
        return 0;
    }


    int mini = INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }

    return mini;
}

int main(){


    int n; 
    cout << "Enter the Size of Array : ";
    cin >> n;

    int arr[n];

    cout<< endl <<"Enter the Array Elements : ";

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max_ans = max_element(arr , n);

    cout << endl << "Largest Element in Array is : " << max_ans <<endl;


    int min_ans = min_element(arr , n);

    cout << "Minimum Element in array is : " << min_ans <<endl;

    return 0;
}