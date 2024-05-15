//attempt at getting something to bounce up and down using physics


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>


#define ROWS 50
#define COLS 50
#define FRAMERATE 1

typedef struct bird{
    int x;
    int y;
}bird;

//display birdy, and grid outline
void displayGrid(int grid[ROWS][COLS], bird birdy){

    printf(" ");
    for(int k = 0; k < COLS; k ++){    //outline
        printf("-");
    }
    printf("\n");
    for(int r = 0; r < ROWS; r++){
        printf("|");    //outline 
        for(int c = 0; c < COLS; c++){
            if(r == birdy.y && c == birdy.x){
                printf("B");
            }
            else if(grid[r][c] == 0){
                printf(" ");
                
            }
            else{
                printf("%d", grid[r][c]);
            }
            
        }
        printf("|\n");  //outline
    }
    printf(" ");
    for(int k = 0; k < COLS; k ++){
        printf("-");    //outline
    }
    printf("\n");
}


int main(){

    //lets make a small grid to jump in
    int grid[ROWS][COLS];
    //init grid to all zeros'
    for(int r = 0; r < ROWS; r ++){
        for(int c = 0; c < COLS; c ++){
            grid[r][c] = 0;
        }
    }

    //initialize birdy at center of the grid
    bird birdy;
    birdy.x = (ROWS/2) - 1;
    birdy.y = (COLS/2) - 1;
    printf("%d\n", birdy.x);
    

    displayGrid(grid, birdy);
    while(1){
        //let it fall
        while(birdy.y > 0){
            sleep(FRAMERATE);
            system("clear");
            displayGrid(grid, birdy);
            birdy.y = birdy.y - 1;
        }
        
        //let it rise 
        while(birdy.y < ROWS){
            sleep(FRAMERATE);
            system("clear");
            displayGrid(grid, birdy);
            birdy.y = birdy.y + 1;
        }
    }


    return 0;
}