#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int activeSudoku[8][8];

int erand(int a){
    int b;
    do{
        b=rand()%9+1;
    }while(b==a);
return b;
}

int correctSudoku(){
    int i,j,r,cheak[8][8];
     for(i=0;i<=8;i++){
        for(j=0;j<=8;j++){
            activeSudoku[i][j]=cheak[i][j];
        }
    }

    for(i=0;i<=8;i++){
        for(j=0;j<=8;j++){
           for(r=1;r<=7;r++){
             if(cheak[i][j]==cheak[i][j+r]){
                cheak[i][j]=erand(cheak[i][j]);
             }
           }
        }
    }

    for(i=0;i<=8;i++){
        for(j=0;j<=8;j++){
            printf(" |%d| ",cheak[i][j]);
        }
        printf("\n");
    }

}
int main (){
    int i,j,k,l;
    srand(time(NULL));
    for(i=0;i<=8;i++){
        for(j=0;j<=8;j++){
            activeSudoku[i][j]=rand()%9+1;
        }
    }
    correctSudoku();
    getch();

}


// tried to randomie 1-9 number then remove it's dublicates then do it with row and colunm both by brute forcing it but the effieciency and comlications seems too high.