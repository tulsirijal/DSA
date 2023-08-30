#include <iostream>
using namespace std;
bool isPrime(int num){

    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return false;
        } 
    } 
   return true;
}

int printPrimeNum(int num){
    for(int i = 0; i <= num; i++){
       if(isPrime(i)){
        cout << i << endl;
       }

    }
}



int celsiusToFahrenheit(int a ){
    return (a * (9/5)) + 32;
}
int main(){
    int  number;
    cin >> number;
    // bool ans = isPrime(number);
    printPrimeNum(number);
    // printReverse(number);
    // cout << celsiusToFahrenheit(number);
    // cout << ans;
    return 0;
}