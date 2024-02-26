#include <iostream>
#include <string>
using namespace std;

void solvePermutations(string s, int low,  vector<string> &ans){

    if(low>=s.size()){
        ans.push_back(s);
        return;
    }
    for(int i = low; i<s.length();i++){

    swap(s[low],s[i]);
    solvePermutations(s,low+1,ans);
    swap(s[low],s[i]);
    }
    

}

int main(){
    string s = "abc";
    vector<string> ans;
    string output;
    int low= 0;
    solvePermutations(s,low,ans);

    for(int i = 0; i< ans.size();i++){
        cout << ans[i] << " ";
    }
}