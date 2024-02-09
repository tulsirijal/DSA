#include <iostream>
using namespace std;
void printNum(int n){
    if(n==0){
        return ;
    }
    cout << n << endl;
    printNum(n-1);
    // cout << n << endl;

}
int main(){

    int num = 4;
     printNum(num);

}