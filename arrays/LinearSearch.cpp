#include <iostream>
using namespace std;
bool findNum(int arr[],int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int array[] = {1,2,3,4,5};
    int num;
    int size = 5;
    cout << "Enter the number you want to find" << endl;
    cin >> num;
    if(findNum(array,size,num)){
        cout << "Found";
    } else {
        cout << "Not Found";
    }
    return 0;
}