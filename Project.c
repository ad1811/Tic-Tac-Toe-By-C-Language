#include<stdio.h>
#include<math.h>
#include<string.h>
void print(char arr[])
{
    printf("\t\t%c|%c|%c\n\t\t- - -\n\t\t%c|%c|%c\n\t\t- - -\n\t\t%c|%c|%c\n\t\t\n\n",
           arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8]);

}
void player1move()
{
    printf("Player1 choose your location by pressing the location number for your move\n\n");
}
void player2move()
{
    printf("Player2 choose your location by pressing the location number for your move\n\n");
}
int check2(char arr[],int loc, char player1,char player2)
{
    if(arr[loc-1]==player1||arr[loc-1]==player2)
    {
        printf("that place is already filled please try another location\n\n");
        return 1;
    }
    else
    {
        arr[loc-1] = player2;
    }
    return 0;
}
int check1(char arr[],int loc,char player1,char player2)
{
    if(arr[loc-1]==player1||arr[loc-1]==player2)
    {
        printf("that place is already filled please try another location\n\n");
        return 1;
    }
    else
    {
        arr[loc-1] = player1;

    }
return 0;
}
int main()
{
    printf("Player1 press x to choose X or o to choose O\n");
    char player1,player2;
    int loc,index;
    scanf("%c",&player1);
    if (player1=='x' || player1=='X')
    {
        printf("Player1 is X\nPlayer2 is O\n");
        player2 = 'o';
        player1 = 'x';
    }
    else if(player1=='0'||player1=='o'||player1=='O')
    {
        printf("Player1 is O\nPlayer2 is X\n");
        player2 = 'x';
        player1 = 'o';
    }
    char arr[9] = {'1','2','3','4','5','6','7','8','9'};
    print(arr);
           player1move();
           scanf("%d",&loc);
           check1(arr,loc,player1,player2);
           print(arr);
           player2move();
           scanf("%d",&loc);
           index = check2(arr,loc,player1,player2);
           print(arr);
           player1move();
           scanf("%d",&loc);
           check1(arr,loc,player1,player2);
           print(arr);
           player2move();
           scanf("%d",&loc);
           check2(arr,loc,player1,player2);
           print(arr);
           player1move();
           scanf("%d",&loc);
           check1(arr,loc,player1,player2);
           print(arr);







}
