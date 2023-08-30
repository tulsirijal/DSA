#include <iostream>
#include <vector>
using namespace std;
int findUnique(vector<int> array){
    int ans = 0;
    for(int i = 0; i < array.size(); i++){
        ans = ans ^ array[i];
    }
    return ans;
}
int main(){
     int n;
     cout << "Enter the size of vector" << endl;
     cin >> n;
     vector<int> array(n);
     for(int i = 0; i < array.size(); i++){
        cin >> array[i];
     }
    int uniqueElement  = findUnique(array);
    cout << "UNIQUE ELEMENT IS: "   << uniqueElement;
    return 0;
}