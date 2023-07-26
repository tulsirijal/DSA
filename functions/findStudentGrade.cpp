#include <iostream>
using namespace std;
char findGrade(int grade){
   if(grade >= 90){
     return 'A';
   } else if(grade >=80){
    return 'B';
   } else if(grade >=70){
    return 'C';
   } else if(grade >=60){
    return 'D';
   } else {
    return 'E';
   }
}
int main(){
    int studentGrade;
    cout << "Enter your grade" << endl;
    cin >> studentGrade;
    char finalGrade = findGrade(studentGrade);
    cout << finalGrade << endl;
}