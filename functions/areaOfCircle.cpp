#include <iostream>
using namespace std;
int findAreaOfCircle(int radius) {
    const float pi = 3.14;
    return pi * radius * radius;
}
int main(){
    int radius;
    cout << "Enter the radius " << endl;
    cin >> radius ;
    int area = findAreaOfCircle(radius);
    cout << area;
    return 0;
}