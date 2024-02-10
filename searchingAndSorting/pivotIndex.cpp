#include <iostream>
using namespace std;
#include <vector>
int findPivotIndex(vector<int>& nums){
    vector<int>lsum(nums.size(),0);
    vector<int>rsum(nums.size(),0);
    for(int i = 1; i < nums.size(); i++){
        lsum[i] = lsum[i-1] + nums[i-1];
    }
    for(int j = nums.size() - 2; j >=0;j--){
        rsum[j] = nums[j+1] + rsum[j+1];
    }

    for(int i = 0; i<nums.size();i++){
        if(lsum[i]==rsum[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int>nums{1,7,3,6,5,6};
    cout << findPivotIndex(nums);

    
    return 0;

}