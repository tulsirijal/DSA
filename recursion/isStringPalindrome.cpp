#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string& str,int i , int j){
    
    if(i>j){
        return true;
    }
    if(str[i]==str[j]){
        i++;
        j--;
        return isPalindrome(str,i,j);
    } else {
        return false;
    }
}

int main(){
    string str = "rammar";
    int i = 0; 
    int j = str.length() - 1;
    bool ans = isPalindrome(str,i,j);
    
    if(ans){
        cout << "it is a palindrome " << endl;
    } else {
        cout << "it is not a palindrome " << endl;
    }

    return 0;
}