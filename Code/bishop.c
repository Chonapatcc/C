#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int arr[][BOARD_SIZE],int x,int y)
{
    arr[y][x]='B';
    for(int i=1; i <BOARD_SIZE ;i++)
    {
        if(y+i<BOARD_SIZE && x+i <BOARD_SIZE)
        {
            arr[y+i][x+i]='X';
        }
        if(y-i>=0 && x-i>=0)
        {
            arr[y-i][x-i]='X';
        }
        if(y-i>=0 && x+i<BOARD_SIZE)
        {
            arr[y-i][x+i]='X';
        }
        if(y+i<BOARD_SIZE && x-i >=0)
        {
            arr[y+i][x-i]='X';
        }
    }
    
}

int main()
{
    int x,y;
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d",&x,&y);

    int arr[BOARD_SIZE][BOARD_SIZE];

    for(int i=0 ; i< BOARD_SIZE ; i++)
    {
        for(int y =0 ;y<BOARD_SIZE ;y++)
        {
            arr[i][y]=' ';
        }
    }

    bishopMoves(arr,x,y);


    //print

    printf("  0 1 2 3 4 5 6 7\n");
    printf("------------------\n");
    for(int i =0 ; i<BOARD_SIZE ;i++)
    {
        printf("%d|",i);
        for(int y=0 ; y<BOARD_SIZE ;y++)
        {
            printf("%c|",arr[i][y]);
        }
        printf("\n------------------\n");
    }

    
}