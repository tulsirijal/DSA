#include <iostream>
using namespace std;
int main(){

     int arr[] = {1,2,3,4};
     int size = 4;
     int end = size - 1;
     int start = 0;
     while(start <=end){
        
        start++; 
        end--;
     }
     for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
     }
    return 0;
}