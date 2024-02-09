#include <iostream>
using namespace std;
int findFactorial(int n){
    if(n==0){
        return 1;
    }
    return n * findFactorial(n-1);

}
int main(){

    int num = 4;
    cout << findFactorial(num) << endl;

}