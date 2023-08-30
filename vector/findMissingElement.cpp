#include <iostream>
#include <vector>
using namespace std;
int findMissingElement(vector<int> nums){
    for(int i = 0; i < nums.size();i++){
        int index = nums[i] - 1;
        if(nums[i] != nums[nums[i]]){ 
            swap(nums[i],nums[nums[i]]);
        }
    }
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]!=i+1){
            return i+1;
        }  
    }
}
int main(){
    vector<int> nums {1,2,2,3};
    findMissingElement(nums);
    return 0;
}