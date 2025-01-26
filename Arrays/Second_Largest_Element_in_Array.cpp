#include<bits/stdc++.h>

using namespace std;


int Second_Largest_element(int arr[] , int n){ 

    if(n == 0){
        cout <<"There is No element in Array ";
        return 0;
    }


    int first_maxi = -1; 

    for(int i=0; i<n; i++){

        if(arr[i] > first_maxi){
            first_maxi = arr[i];
        }
    }

    int second_maxi = -1;

    for(int i=0; i<n; i++){

        if(arr[i] > second_maxi && arr[i] != first_maxi){

            second_maxi = arr[i];
        }
    }

    return second_maxi;

}


int main(){

    int n;
    cout <<"Enter the Size of Array : ";
    cin >> n;

    int arr[n];
 
    cout << endl << "Enter the Array Elements : ";

    for(int i=0; i<n; i++){

        cin >> arr[i];

    }

    cout << endl << "Enter Array Elements Are : ";

    for(int i=0; i<n ; i++){

        cout << arr[i] <<" ";
    }

    // find the second largest elements

    int second_lar_ele = Second_Largest_element(arr , n);


    cout << endl << "Second Largest Element in Array is :"<< second_lar_ele <<endl;

    return 0;



}

