#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool allZero(vector<int>& counter){
    for(int i:counter){
        if(i!=0){
            return false;
        }
    }
    return true;
}

int findOccurence(string txt, string pat){
    int n = txt.length();
    vector<int> counter(26,0);
    for(int i =0; i<pat.length();i++){
        counter[pat[i]-'a']++;
    }
    int i =0;
    int j =0;
    int ans = 0;
    int windowSize = pat.length();
    while(j<n){
        counter[txt[j]-'a']--;
        if(j-i+1==windowSize){
            if(allZero(counter)){
                ans++;
            }
            counter[txt[i]-'a']++;
            i++;
        }
        j++;
    }
    return ans;

}

int main(){

    string txt = "forxaxorfabfa";
    string pat = "for";

    int occurence = findOccurence(txt,pat);
    cout << occurence << endl;


    return 0;
}