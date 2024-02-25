#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solvePhoneKeypad(string digits, int index, vector<string> &ans, string output, string mapping[]){
    if(index>=digits.length()){
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string value = mapping[number];
    for(int i = 0; i<value.length();i++){
        output.push_back(value[i]);
        solvePhoneKeypad(digits,index+1,ans,output,mapping);
        output.pop_back();
    }

}

int main() {

    string digits = "23";
    vector<string> ans;
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string output;
    int index = 0;
    solvePhoneKeypad(digits,index,ans,output,mapping);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

}