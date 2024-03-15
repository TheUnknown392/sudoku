#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

// randomly suhuffels vlaue's potision
void inputRandoms(int arr[]){
    for (int i = 9 - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

// fills matrix according to the scrambled vlaue
void fillMatrix(int matrix[3][3], int arr[], int n) {
    int index = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = arr[index++];
        }
    }
}

// prints single matrix
void SinglePrintMatrix(int matrix[3][3]) {
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// filling the values to all the matrix
void matrixPlaceAll(int matrixA[3][3],int matrixB[3][3],int matrixC[3][3],int matrixD[3][3],int matrixE[3][3],int matrixF[3][3],int matrixG[3][3],int matrixH[3][3],int matrixI[3][3]){
int vlaue[9]={1,2,3,4,5,6,7,8,9};
inputRandoms(vlaue);
fillMatrix(matrixA,vlaue,9);
inputRandoms(vlaue);
fillMatrix(matrixB,vlaue,9);
inputRandoms(vlaue);
fillMatrix(matrixC,vlaue,9);
inputRandoms(vlaue);
fillMatrix(matrixD,vlaue,9);
inputRandoms(vlaue);
fillMatrix(matrixE,vlaue,9);
inputRandoms(vlaue);
fillMatrix(matrixF,vlaue,9);
inputRandoms(vlaue);
fillMatrix(matrixG,vlaue,9);
inputRandoms(vlaue);
fillMatrix(matrixH,vlaue,9);
inputRandoms(vlaue);
fillMatrix(matrixI,vlaue,9);
}

// swaps two intigers
void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

//makes sure there is no same number in same row
void matrixFixRow(int matrix[3][3], int matrixb[3][3]){
for(int i=0;i<=2;i++){
    for(int j=0;j<=2;j++){
        if(matrix[i][j]==matrixb[i][j]){
        }
    }
}
}

int main(){
int i,j,temp[2][2],l;
srand(time(0));
int matrixA[3][3],matrixB[3][3],matrixC[3][3],matrixD[3][3],matrixE[3][3],matrixF[3][3],matrixG[3][3],matrixH[3][3],matrixI[3][3];
matrixPlaceAll(matrixA,matrixB,matrixC,matrixD,matrixE,matrixF,matrixG,matrixH,matrixI);


return 0;
}