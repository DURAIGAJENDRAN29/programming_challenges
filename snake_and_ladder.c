#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // create a board
    int val = 1;
    int board[10][10];
    for(int i = 0;i<10;i++){
        for(int j =0 ;j<10;j++){
         board[i][j] = val;
         val++;
        }
    }
    for(int i = 9; i >= 0; i--) {
        if (i % 2 == 0) {
            // Print row from left to right
            for(int j = 0; j < 10; j++) {
                printf("%4d ", board[i][j]);
            }
        } else {
            // Print row from right to left
            for(int j = 9; j >= 0; j--) {
                printf("%4d ", board[i][j]);
            }
        }
        printf("\n");
    }
    int pos = 0;
    int dice;
    int access;
    while(pos<=100){
        printf("enter 1 to roll the dice :");
        scanf("%d",&access);
        if(access == 1){
            srand(time(0));
            dice = 1+rand()%6;
            printf("dice is: %d\n",dice);
            pos += dice;
            switch(pos){
                // climb the ladder
                case 4:
                printf("you climb the ladder");
                pos+=10;
                break;
                case 8:
                printf("you climb the ladder");
                pos += 22;
                break;
                case 28:
                printf("you climb the ladder");
                pos +=48;
                break;
                case 21:
                printf("you climb the ladder");
                pos += 21;
                break;
                case 50:
                printf("you climb the ladder");
                pos +=17;
                break;
                case 71:
                printf("you climb the ladder");
                pos +=21;
                break;
                case 80:
                printf("you climb the ladder");
                pos+= 18;
                break;
                // bitting the snake
                case 36:
                printf("you are bitted by the snake");
                pos -=30;
                break;
                case 32:
                printf("you are bitted by the snake");
                pos -= 22;
                break;
                case 48:
                printf("you are bitted by the snake");
                pos -=22;
                break;
                case 62:
                printf("you are bitted by the snake");
                pos -= 44;
                break;
                case 88:
                printf("you are bitted by the snake");
                pos -=64;
                break;
                case 95:
                printf("you are bitted by the snake");
                pos -=39;
                break;
                case 97:
                printf("you are bitted by the snake");
                pos -= 19;
                break;
            }
            printf("yours position is: %d\n",pos);
        }else{
            exit(0);
        }
    }
    if (pos == 100){
        printf("you won");
    }
    

    return 0;
}