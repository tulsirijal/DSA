#include <iostream>
using namespace std;
bool findNum(int arr[][2],int row,int cols,int num){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j]==num){
                return true;
            }

        }
    }
    return false;
}
void findMinNum(int arr[][2], int row, int cols){
     int minNum = INT_MAX;
     int maxNum = INT_MIN;
     for(int i = 0; i < row; i++){
        for(int j = 0; j < cols;j++){
            if(arr[i][j]<minNum){
                minNum = arr[i][j];
            }
        }
     }
    cout << minNum << endl;
}
void findMaxNum(int arr[][2], int row, int cols){
     int minNum = INT_MAX;
     int maxNum = INT_MIN;
     for(int i = 0; i < row; i++){
        for(int j = 0; j < cols;j++){
            if(arr[i][j]>maxNum){
                maxNum = arr[i][j];
            }
        }
     }
    cout << maxNum << endl;
}
void transpose(int arr[][3],int row,int cols,int transposeArray[][3]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            transposeArray[j][i] = arr[i][j];
        }
    }
}
void printTranspose(int arr[][3],int row,int cols){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}
int main(){
    // int arr[2][3] = {{1,2,3}
    //                 ,{4,5,6}};
    // // cout << arr[1][1];
    // cout << "Printing row wise:" << endl;
    // for(int i =0; i<2;i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    // }
    // cout << "Printing column wise:" << endl;
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << arr[j][i];
    //     }
    //     cout << endl;
    // }

    // Printing sum of rows 
    // int brr[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    // for(int i  = 0; i < 4; i++){
    //       int sum = 0;
    //     for(int j =0; j < 3; j++){
    //         sum+=brr[i][j];
    //     }
    //     cout << sum << endl;
        
    // }
    // printing sum of cols 
    // int crr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // for(int i  = 0; i < 4; i++){
    //       int sum = 0;
    //     for(int j =0; j < 3; j++){
    //         sum+=crr[j][i];
    //     }
    //     cout << sum << endl;
        
    // }
    

    // linear search in 2d array
    int drr[3][3] = {{2,4,3},{6,8,7},{9,10,11}};
    // int num = 1;
    // cout << findNum(drr,2,2,num) << endl;
   
    // findMinNum(drr,2,2);
    // findMaxNum(drr,2,2);
    int transposeArray[3][3];
    transpose(drr,3,3,transposeArray);
    printTranspose(drr,3,3);

}