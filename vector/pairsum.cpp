#include <iostream>
#include <vector>
using namespace std;
int main(){
    int num[]={1,2,3,4,5,6,7,8,10};
    int sum = 10;
    for(int i = 0; i < 8; i++){
        for(int j = i + 1; j < 8; j++){
            for(int k = j + 1; k < 8; k++){
                for(int l = k + 1; l < 8; l++){
                    if(num[i] + num[j] + num[k] + num[l]==sum){
                   cout << num[i] << num[j] << num[k] << num[l] << endl;
                }
            }
            }
        }
    }
    return 0;
}
 