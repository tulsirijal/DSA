#include <iostream>
#include <vector>
using namespace std;
int main(){
    int array1[] = {1,2,3,4,5};
    int array2[] = {1,5,6 ,7,8};
    vector<int> ans;
    for(int i = 0; i < 5; i++){
        for(int j=0; j<5;j++){
            if(array1[i] == array2[j]){
                ans.push_back(array1[i]);
            }
        }
    }
    for(int i=0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
