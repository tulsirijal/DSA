#include <iostream>
#include <vector>
using namespace std;
void swap_elements(vector<int>& arr,int index1,int index2){
    int temp = index1;
    arr[index1] = arr[index2];
    arr[index2] = arr[temp];
}
int main(){
    vector<int> array {1,2,3,4};
    int index1,index2;
    cout << "Provide indexes that you want to swap" << endl;
    cin >> index1;
    cin >> index2;
    swap_elements(array,index1,index2);

    for(int i = 0; i < array.size(); i++){
        cout << array[i] << endl;
    }


    return 0;
}