#include <iostream>
#include <string>
using namespace std;

void reverse(string& str,int i , int j){
    // cout << str << endl;
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
}

int main(){
    string str = "tulsi";
    int i = 0;
    int j = str.length() - 1;
    reverse(str,i,j);
    cout << str << endl;

    return 0;
}