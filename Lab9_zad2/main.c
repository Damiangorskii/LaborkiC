#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>




int main()
{

    struct Character
    {
        int life;
    };


    srand(time(NULL));
    int board[40][20];
    int i=0;
    int j=0;
    for (i=0;i<40;i++)
    {
        for (j=0;j<20;j++)
        {
            board[i][j]=0;
        }
    }

    struct Character player1;
    struct Character player2;

    player1.life=15;
    player2.life=16;
    int x1 = rand()%41;
    int x2 = rand()%41;
    int y1 = rand()%21;
    int y2 = rand()%21;
    char end;
    while (end != 'q')
    {
        srand(time(NULL));
        board[x1][y1] = 1;
        board[x2][y2] = 2;
        for (i=0;i<40;i++)
        {
            for (j=0;j<20;j++)
            {
                printf("%d" , board[i][j]);
            }
            printf("\n");
        }

        printf("Life 1 = %d  Life 2 = %d \n", player1.life, player2.life);
        scanf("%c", &end);
        system("CLS");
        int p1 = rand()%5;
        int p2 = rand()%5;
        switch(p1)
        {
        case 1:
            board[x1][y1]=0;
            x1+=1;
            break;
        case 2:
            board[x1][y1]=0;
            x1-=1;
            break;
        case 3:
            board[x1][y1]=0;
            y1+=1;
            break;
        case 0:
            board[x1][y1]=0;
            y1-=1;
            break;
        case 5:
            board[x1][y1]=1;
            break;
        }
        switch(p2)
        {
        case 1:
            board[x2][y2]=0;
            x2+=1;
            break;
        case 2:
            board[x2][y2]=0;
            x2-=1;
            break;
        case 3:
            board[x2][y2]=0;
            y2+=1;
            break;
        case 0:
            board[x2][y2]=0;
            y2-=1;
            break;
        case 4:
            board[x2][y2]=2;
            break;
        }

        if (board[x1][y1]!=0)
        {
            player1.life--;
        }
        if (board[x2][y2]!=0)
        {
            player2.life--;
        }



        if(player1.life==0)
        {printf("player 1 died");
        end = 'q';
        }
        if(player2.life==0)
        {printf("player 2 died");
        end = 'q';
        }
    }


    return 0;
}
