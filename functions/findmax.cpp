#include <iostream>
using namespace std;
int findMax(int a , int b, int c){
    if(a > b && a > c){
        return a;
    } else if (b > a && b > c){
        return b;
    } else {
        return c;
    }
}

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int maxNumber = findMax(a,b,c);
    cout << maxNumber << endl;
    return 0;

}