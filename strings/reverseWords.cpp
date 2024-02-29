#include <iostream>
#include <string>
using namespace std;


string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int i = 0;
        int l = 0;
        int r = 0;
        int size = s.length();
        while(i<size){
            while(i<size && s[i]!=' '){
                s[r++] = s[i++];
            }
            if(l<r){
                reverse(s.begin()+l,s.begin()+r);
                s[r] = ' ';
                r++;
                l = r;
            }
            i++;
        }
        return s.substr(0,r-1);
    }

int main(){
    string s = "  hello world  ";
    string ss = "a good day ";
    string str = reverseWords(s);
    string str2 = reverseWords(ss);
    cout << str << endl;
    cout << str2 << endl;


    return 0;
}