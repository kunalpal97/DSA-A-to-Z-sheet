#include<bits/stdc++.h>

using namespace std;




vector<int> solve(vector<int> &arr , int n){


    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] < arr[j]){
                arr[i] = arr[j];
                break;
            }
        }
        
    }
    arr[n-1] = 0;

    return arr;
}

int main(){

   

    vector<int> ans = {4, 5, 3, 7, 2, 11};

    solve(ans , ans.size());

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] <<" ";
    }

    return 0;





}