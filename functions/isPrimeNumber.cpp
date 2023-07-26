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

void printPrimeNum(int n){
    for(int i = 1; i<=n;i++){
        bool ans = isPrime(i);
        if(ans){
            cout << i << endl;
        }
    }
}
void printReverse(int a){
    for(int i = a; i >=0; i--){
        cout << i << endl;
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
    return 0;
}