#include <iostream>
#include <vector>
#include <string>
using namespace std;

void subsets(vector<int> &arr,int low, vector<vector<int> > &ans, vector<int> &output){
    if(low>=arr.size()){
        ans.push_back(output);
        return;
    }
    subsets(arr,low+1,ans,output);
    output.push_back(arr[low]);
    subsets(arr,low+1,ans,output);
    output.pop_back();
    
}

int main(){

    vector<int> arr =  {1,2,3};
    vector<vector<int> > ans;
    vector<int> output;
    
    int low = 0;
    subsets(arr,low,ans,output);
    for(int i = 0; i < ans.size();  i++){
        for(int j = 0; j<ans[i].size(); j++){
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}