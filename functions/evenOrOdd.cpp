#include <iostream>
using namespace std;
string findEvenOrOdd(int number){
    if(number % 2==0){
        return "Even";
    } else {
        return "Odd";
    }
}
int main(){
    int number;
    cin >> number;
    string ans = findEvenOrOdd(number);
    cout << ans;
    return 0;
}