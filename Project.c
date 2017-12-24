#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    printf("Player1 press x to choose X or o to choose O\n");
    char player1,player2;
    scanf("%c",&player1);
    if (player1=='x' || player1=='X')
    {
        printf("Player1 is X\nPlayer2 is O");
        player2 = 'o';
    }

}
