#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 0, 1, 1, 1, 0, 0};
    int countOf1 = 0;
    int countOf0 = 0;
    for (int i = 0; i < 7; i++)
    {
        if (array[i] == 1)
        {
            countOf1++;
        }
        if(array[i]==0){
            countOf0++;
        }
    }
    cout << countOf1 << endl;
    cout << countOf0;
}