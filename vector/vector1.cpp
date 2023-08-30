#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector<int> array;
    // cout << array.capacity() << endl;
    // cout << array.size() << endl;
    // array.push_back(5);
    // array.push_back(6);
    // for(int i = 0; i < array.size(); i++){
    //     cout << array[i] << " ";
    // }
     
    // dynamic vector
    // int n;
    // cout << " Enter the size of vector" << endl;
    // cin >> n;
    // vector<int> brr(n,10);
    // for(int i = 0; i < brr.size(); i++){
    //     cout << brr[i] << endl;
    // }

    vector<int>v = {7, 5, 16, 8};
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
     

    return 0;
}