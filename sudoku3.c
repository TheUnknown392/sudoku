#include <time.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int count=0;
int matrix[9][9]={0};

void inputRow(int matrix[9][9],int suffeledArr[],int* row);
void inputRandoms(int arr[]);
void newValueInput(int value[]);
void SinglePrintMatrix(int matrix[9][9]);

void main(){
    int values[9]={1,2,3,4,5,6,7,8,9};
    srand(time(0));
    inputRandoms(values);
    for(int i=0;i<9;i++){
        if(count==0){
        inputRow(matrix, values, &count);
        }else{
            newValueInput(values);
        }
    }
    SinglePrintMatrix(matrix);
    getch();
}

void inputRandoms(int arr[]){
    for (int i = 9 - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
void inputRow(int matrix[9][9],int suffeledArr[],int *count){
    for(int i=0;i<9;i++){
        matrix[*count][i]=suffeledArr[i];
    }
    (*count)++;
}
//  void newValueInput(int value[]){
//      inputRandoms(value);
//      for(int i=0;i<count;i++){
//          for(int j=0;j<=8;j++){
//              if(matrix[count-(i+1)][j]==value[j]){
//              inputRandoms(value);   
//              }
//          }
//      }
//      inputRow(matrix,value,&count);
//  }
//  void newValueInput(int value[]){
//      inputRandoms(value);
//      if(count==0){
//          for(int i=0;i<count;i++){
//              for(int j=0;j<=8;j++){
//                  if(matrix[0][j]==value[j]){
//                  inputRandoms(value);   
//                  }
//              }
//          }
//         }else if(count==1){
//             for(int i=0;i<count;i++){
//                 for(int j=0;j<=8;j++){
//                     if(matrix[0][j]==value[j]&&matrix[1][j]==value[j]){
//                         inputRandoms(value);   
//                     }
//                 }
//             } 
//         }else if(count==2){
//             for(int i=0;i<count;i++){
//                 for(int j=0;j<=8;j++){
//                     if(matrix[0][j]==value[j]&&matrix[1][j]==value[j]&&matrix[2][j]==value[j]){
//                         inputRandoms(value);   
//                     }
//                 }
//             } 
//         }else if(count==3){
//             for(int i=0;i<count;i++){
//                 for(int j=0;j<=8;j++){
//                     if(matrix[0][j]==value[j]&&matrix[1][j]==value[j]&&matrix[2][j]==value[j]&&matrix[3][j]==value[j]){
//                         inputRandoms(value);   
//                     }
//                 }
//             } 
//         }
//     }

void newValueInput(int value[]){
    inputRandoms(value);
    switch (count){
    case 0:

    for(int i=0;i<count;i++){
         for(int j=0;j<=8;j++){
            while(matrix[0][j]==value[j]){
                inputRandoms(value);   
            }
        }
    }
    break;

    case 1:
    for(int i=0;i<count;i++){
         for(int j=0;j<=8;j++){
            while(matrix[0][j]==value[j]&&matrix[1][j]==value[j]){
                inputRandoms(value);   
            }
        }
    }
    break;

    case 2:
    for(int i=0;i<count;i++){
         for(int j=0;j<=8;j++){
            while(matrix[0][j]==value[j]&&matrix[1][j]==value[j]&&matrix[2][j]==value[j]){
                inputRandoms(value);   
            }
        }
    }
    break;

    case 3:
    for(int i=0;i<count;i++){
         for(int j=0;j<=8;j++){
            while(matrix[0][j]==value[j]&&matrix[1][j]==value[j]&&matrix[2][j]==value[j]&&matrix[3][j]==value[j]){
                inputRandoms(value);   
            }
        }
    }
    break;

    case 4:
    for(int i=0;i<count;i++){
         for(int j=0;j<=8;j++){
            while(matrix[0][j]==value[j]&&matrix[1][j]==value[j]&&matrix[2][j]==value[j]&&matrix[3][j]==value[j]&&matrix[4][j]==value[j]){
                inputRandoms(value);   
            }
        }
    }
    break;

    case 5:
    for(int i=0;i<count;i++){
         for(int j=0;j<=8;j++){
            while(matrix[0][j]==value[j]&&matrix[1][j]==value[j]&&matrix[2][j]==value[j]&&matrix[3][j]==value[j]&&matrix[4][j]==value[j]&&matrix[5][j]==value[j]){
                inputRandoms(value);   
            }
        }
    }
    break;

    case 6:
    for(int i=0;i<count;i++){
         for(int j=0;j<=8;j++){
            while(matrix[0][j]==value[j]&&matrix[1][j]==value[j]&&matrix[2][j]==value[j]&&matrix[3][j]==value[j]&&matrix[4][j]==value[j]&&matrix[5][j]==value[j]&&matrix[6][j]==value[j]){
                inputRandoms(value);   
            }
        }
    }
    break;

    case 7:
    for(int i=0;i<count;i++){
         for(int j=0;j<=8;j++){
            while(matrix[0][j]==value[j]&&matrix[1][j]==value[j]&&matrix[2][j]==value[j]&&matrix[3][j]==value[j]&&matrix[4][j]==value[j]&&matrix[5][j]==value[j]&&matrix[6][j]==value[j]&&matrix[7][j]==value[j]){
                inputRandoms(value);   
            }
        }
    }
    break;

    case 8:
    for(int i=0;i<count;i++){
         for(int j=0;j<=8;j++){
            while(matrix[0][j]==value[j]&&matrix[1][j]==value[j]&&matrix[2][j]==value[j]&&matrix[3][j]==value[j]&&matrix[4][j]==value[j]&&matrix[5][j]==value[j]&&matrix[6][j]==value[j]&&matrix[7][j]==value[j]&&matrix[8][j]==value[j]){
                inputRandoms(value);   
            }
        }
    }
    break;

    default:
        break;
    }
    inputRow(matrix,value,&count);
}

void SinglePrintMatrix(int matrix[9][9]) {
    printf("Matrix:\n");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}