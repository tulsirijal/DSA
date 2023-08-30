#include <iostream>
using namespace std;
int main(){
    int N = 10;
    int K = 3;
    int value = 1 << K;
    int kth_value = N | value;
    cout << kth_value ;

}