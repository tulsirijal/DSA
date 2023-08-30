#include <iostream>
using namespace std;
int reverse(int x){
    int remainder = 0,answer = 0;
    bool isNegative = false;
    if(x <=  INT_MIN){
        return 0;
    }
    if(x < 0){
        isNegative = true;
        x = -x;
    }
    while (x > 0){
        if(answer > INT_MAX / 10){
            return 0;
        }
        remainder = x % 10;
        answer = answer * 10 + remainder;
        x = x / 10;
    }
    return isNegative ? -answer : answer;
}
int main(){
  int ans =   reverse(-123);
  cout << ans ;

}