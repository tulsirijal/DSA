#include <iostream>
#include <vector>
using namespace std;

void sortArray(vector<int>& array){
    int h=array.size()-1,l=0,m=0;
    while(m<=h){
        if(array[m]==0){
            swap(array[m],array[l]);
            l++;
            m++;
        } else if(array[m]==1){
            m++;
        } else {
            swap(array[m],array[h]);
            h--;
        }
    }
}

int main(){

    vector<int> array {0,1,0,2,0,1};

    sortArray(array);
     return 0;
}