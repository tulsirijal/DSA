#include <iostream> 
#include <vector>
using namespace std;
int main(){
    int arr1[] = {1,2,3,4};
    int arr2[] = {5,6,7};
    vector<int>ans;

    for(int i = 0; i < 4; i++){
        ans.push_back(arr1[i]);
    }
    for(int i = 0; i < 3; i++){
        ans.push_back(arr2[i]);
    }
    for(int i = 0; i < ans.size(); i++){
        cout  << ans[i];
    }

} 