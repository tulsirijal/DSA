#include <iostream>
#include <vector>
using namespace std;
int findExtraELement01(vector<int> nums){
    int ans = -1;
    for(int i = 0; i < nums.size();i++){
        int index =abs( nums[i]); 
        if(nums[index] < 0){
            ans = index;
            return ans;
        }
        nums[index] *= - 1;

    }
}
int findExtraElement02(vector<int> nums){
    while(nums[0]!=nums[nums[0]]){
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];
}
int main (){
    vector<int> nums {1,2,2,3,4,5};
    // first approach -> negative marking approach
    findExtraELement01(nums);
    // second approach
    findExtraElement02(nums);

    return 0;
}