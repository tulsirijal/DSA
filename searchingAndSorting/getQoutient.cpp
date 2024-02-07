#include <iostream>
using namespace std;

int getQuotient(int divisor, int dividend){
    int start = 0;
    int end = dividend;
    int mid = start + (end - start)/2;
    int ans = 0;
    while(start<=end){
        if(mid * divisor <= dividend){
            ans = mid;
            start = mid + 1;
        } else if(mid * divisor > dividend){
            end = mid - 1;
        }
        mid= start+(end - start)/2;
    }
    return ans;
}

int main(){

    int divisor = -1;
    int dividend = 35;
    int quotient = getQuotient(abs(divisor),abs(dividend));
    
    if((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0)){
    quotient = 0-quotient;
    }
  cout << quotient << endl;
    return 0;
}