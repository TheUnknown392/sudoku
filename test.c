#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int test[9]={1,2,3,4,5,6,7,8,9};
int inputRandoms(int arr[]){
    for (int i = 9 - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
void fillMatrix(int matrix[3][3], int arr[], int n) {
    int index = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = arr[index++];
        }
    }
    inputRandoms(test);
}
void main (){
int compair[9]={1,2,3,4,5,6,7,8,9};
int matrixA[3][3];
fillMatrix(matrixA,compair,9);
inputRandoms(compair);
int count;
for(int i=0;i<=2;i++){
    for(int j=0;j<=2;j++){
        for(int k=0;k<=8;k++){
            if(matrixA[i][j]==compair[k]){
                count++;
                if(count>1){
                    
                }
            }
        }
    }
}
}