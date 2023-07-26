#include <iostream>
using namespace std;
void countFrom1ToN(int num){
    for(int i = 1; i <=num; i++){
        cout << i << endl;
    }
}
int main(){
    int n;
    cin >> n;
    countFrom1ToN(n);
    return 0;
}