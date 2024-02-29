#include <iostream>
#include <vector>
using namespace std;

void twoSum(vector<int>& nums,int i, int j, int target,vector<vector<int> >& ans ) {
    while(i<j){
        if(nums[i] + nums[j]>target){
            j--;
        }
        else if(nums[i]+nums[j]<target){
            i++;

        }
        else {
            while(i<j && nums[i]==nums[i+1]){
                i++;
            }
            while(i<j && nums[j]==nums[j-1]){
                j--;
            }
            ans.push_back({-target,nums[i],nums[j]});
            i++;
            j--;
        }
    }
}

void threeSum(vector<int>& nums,vector<vector<int> >& ans) {
    int size = nums.size();
    sort(begin(nums),end(nums));
    for(int i =0;i<size;i++){
        if(i>0 && nums[i] == nums[i-1]){
            continue;
        }
        int target = -nums[i];
        twoSum(nums,i+1,size-1,target,ans);
    }
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int> > ans;
    threeSum(nums,ans);
    for(auto i:ans){
        for(auto j:i){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}