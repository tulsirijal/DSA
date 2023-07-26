#include <iostream>
using namespace std;
int findFactorial(int num){
    int factorial = 1;
    for(int i = 1; i<=num; i++){
        factorial*= i;
    }
    return factorial;

}
int main(){
    int number;
    cin >> number;
    int ans = findFactorial(number);
    cout << ans;
    return 0;
}