#include <iostream>
using namespace std;

void mergeTwoArray(int arr1[],int arr2[],int m,int n){
    int k = 0; 
    int i = 0;
    int j = 0;
    int ans[m+n];
    while(i<m && j<n){
        if(arr1[i] < arr2[j]){
            ans[k++] = arr1[i++];
        } else {
            ans[k++] = arr2[j++];
        }
    }
    while(i<m){
        ans[k++] = arr1[i++];
    }
    while(j<n){
        ans[k++] = arr2[j++];
    }

    for(int i = 0; i < 11;i++){
        cout << ans[i] << endl;
    }
}

int main(){
    int arr1[5] = {3,4,5,6,7};
    int arr2[6] = {1,2,8,9,10,11};
    
    int m = 5;
    int n = 6;
    
    mergeTwoArray(arr1,arr2,m,n);

    return 0;
}