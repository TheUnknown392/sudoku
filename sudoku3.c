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
void cheakFlag(int f, int value[]);

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

// inputs the row in the matrix
void inputRow(int matrix[9][9],int suffeledArr[],int *count){
    for(int i=0;i<9;i++){
        matrix[*count][i]=suffeledArr[i];
    }
    (*count)++;
}

//generates new inputs and cheaks for uniqueness in colunm, if not unique then rerolls with inputRandoms() function
void newValueInput(int value[]){
    int temp[9],j,f=1;

    for(int i=0;i<=count;i++){
        for(j=0;j<9;j++){
            if(matrix[i][j]!=0){
                temp[i]=matrix[i][j];   //Puts the value of colunms in e.g. temp[0-1]
            }else if(matrix[i][j]==0){
                temp[i]=value[j]; //Puts the recent value in e.g. temp[2] sus
                break;
            }else{
                printf("Error i newValueInputs");
            }

        }
            //cheaks if there are any dublicates
        for(int k=0;k==count+1;k++){
            for(int l=k;l==count+1;l++){
                if(temp[k]==temp[l]&&k!=l){
                    f=0;
                }
            }
        }
    }
    cheakFlag(f,value);
}

//suffels the value[] array to generate unique combanition of values
void inputRandoms(int arr[9]){
        int j=0,temp=0;
    for (int i = 9 - 1; i >= 0; i--) {
        do{
        j = rand() % (i+1); //segmentation error
        }while(j<=9||j>=0);
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
    inputRow(matrix,value,&count);
}else{
    printf("error");
}

}