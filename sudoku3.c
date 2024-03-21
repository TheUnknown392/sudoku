#include <time.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int count=0;
int matrix[9][9]={0};
void inputRow(int matrix[9][9],int suffeledArr[],int* row);
void inputRandoms(int arr[9]);
void newValueInput(int value[]);
void SinglePrintMatrix(int matrix[9][9]);
void cheakValue(int f, int value[]);

void main(){
    int values[9]={1,2,3,4,5,6,7,8,9};
    srand(time(0));
    inputRandoms(values);
    for(int i=0;i<=8;i++){
        if(count==0){
        inputRow(matrix, values, &count);
        }else{
            newValueInput(values);
        }
    }
    SinglePrintMatrix(matrix);
    getch();
}

// inputs the row in the matrix
void inputRow(int matrix[9][9],int suffeledArr[],int *count){
    for(int i=0;i<9;i++){
        matrix[*count][i]=suffeledArr[i];
    }
    (*count)++;
}

//generates new inputs and cheaks for uniqueness in colunm, if not unique then rerolls with inputRandoms() function
void newValueInput(int value[]){
    inputRandoms(value);
    int temp[9]={0};
    int i,k=count,flag=0;
    //discarded:
    //   for(int i=0;i<count;i++){
    //       for(int j=0;j<=8;j++){
    //           if(matrix[count-(i+1)][j]==value[j]){
    //           inputRandoms(value);   
    //           }
    //       } 
    //   }
    for(int j=0;j<9;j++){
        for(i=0;i<=count;i++){
            //puts the value of one colunm in temp[i]
            temp[i]=matrix[i][j];
        }
        //     //puts the latest value in temp without removing one of the data

             temp[count+1]=value[j];

        // if(count!=k&&count!=8){
        //     temp[i+1]=value[i];
        // }

         for(k=count+1;k>=0;k--){
             //cheaks for ununique value
             if(temp[k]==temp[8-k]){
                 if(((k)/(8-k))==1){//is uniwue
                     flag=1;
                 }else{//is not unique
                     flag=0;
                 }
             }
         }

        


    }
cheakFlag(flag,value);
}

//suffels the value[] array to generate unique combanition of values
void inputRandoms(int arr[9]){
        int j=0,temp=0;
    for (int i = 9 - 1; i > 0; i--) {
        j = rand() % (i+1); //segmentation error
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}


// prints out the matrix

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
void cheakFlag(int f, int value[]){
if(f==0){
    newValueInput(value);
}else if(f==1){
    inputRow(value);
}else{
    printf("error");
}

}