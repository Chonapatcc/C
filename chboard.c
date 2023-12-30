#include <stdio.h>

#define BOARD_SIZE 8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main()
{
    int n,sp;
    scanf("%d",&n);
    scanf("%d",&sp);
    //create board 
    int arr[8][8];
    for(int i =0 ;i<8; i++)
    {
        for(int y=0 ; y<8 ; y++)
        {
            arr[i][y]=0;
        }
    }
    
    //input
    char temp[10];
    for(int i=0 ; i< n ; i++)
    {
        fgets(temp,10,stdin);
        int x=temp[2]-'0',y=temp[5]-'0';
        char p=temp[0];
        //printf("%d %d %c\n" , x,y,p);
        setPieceOnTable(arr,p,x,y);
    }
    
    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");

    for(int i=0 ; i<8 ;i++)
    {
        printf("%d|",i);
        for(int j =0 ; j< 8;j++)
        {
            if(arr[i][j])
            {
                printf("%c|",arr[i][j]);
            }
            else
            {
                printf(" |");
            }
            
        }
        printf("\n");
    }

}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos )
{
    board[yPos][xPos]=piece;
}
