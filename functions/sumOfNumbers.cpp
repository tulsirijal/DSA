#include <iostream>
using namespace std;
int findSum(int num){
     int sum = 0;
     for(int i = 1; i <= num; i++){
        if(i % 2==0){

        sum+=i;
        } 
     }
     return sum;
}
int main(){
    int num;
    cin >> num;
   int ans =  findSum(num);
   cout << ans << endl;
   return 0;
}