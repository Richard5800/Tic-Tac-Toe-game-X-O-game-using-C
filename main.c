#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void developer();
void print(char a,char b,char c,char d,char e,char f,char g,char h,char i);
void print(char a,char b,char c,char d,char e,char f,char g,char h,char i)
{
system("cls");
printf("\n\t\t\tTic Tac Toe X-O Game\n");
printf("Player 1 takes : X\nPlayer 2 takes : O");
printf("\n\n\n\t\t\t\t %c | %c | %c ",a,b,c);
printf("\n\t\t\t\t-----------");
printf("\n\t\t\t\t %c | %c | %c ",d,e,f);
printf("\n\t\t\t\t-----------");
printf("\n\t\t\t\t %c | %c | %c \n",g,h,i);

}


void main()
{

int m,con;
do
{
char a='*',b='*',c='*',d='*',e='*',f='*',g='*',h='*',i='*';

print(a,b,c,d,e,f,g,h,i);
while((a=='*')||(b=='*')||(c=='*')||(d=='*')||(e=='*')||(f=='*')||(g=='*')||(h=='*')||(i=='*'))
{
here:
 printf("Player 1 Turn: X   (1-9) ");
 scanf( "%d",&m);
 switch(m)
 {
 case 1:
 if(a=='*')
 {
 a='X';
 break;
 }
 else
 printf("It is already filled\n");
 goto here;

  case 2:
 if(b=='*')
 {
 b='X';
 break;
 }
 else
 printf("It is already filled\n");
 goto here;

  case 3:
 if(c=='*')
 {
 c='X';
 break;
 }
 else
 printf("It is already filled\n");
 goto here;

  case 4:
 if(d=='*')
 {
 d='X';
 break;
 }
 else
 printf("It is already filled\n");
goto here;
  case 5:
 if(e=='*')
 {
 e='X';
 break;
 }
 else
 printf("It is already filled\n");
 goto here;

  case 6:
 if(f=='*')
 {
 f='X';
 break;
 }
 else
 printf("It is already filled\n");
 goto here;
  case 7:
 if(g=='*')
 {
 g='X';
 break;
 }
 else
 printf("It is already filled\n");
 goto here;

  case 8:
 if(h=='*')
 {
 h='X';
 break;
 }
 else
 printf("It is already filled\n");
 goto here;
  case 9:
 if(i=='*')
 {
 i='X';
 break;
 }
 else
 printf("It is already filled\n");
 goto here;

 }
 print(a,b,c,d,e,f,g,h,i);
 if(((a=='X')&&(b=='X')&&(c=='X'))||((d=='X')&&(e=='X')&&(f=='X'))||((g=='X')&&(h=='X')&&(i=='X'))||((a=='X')&&(d=='X')&&(g=='X'))||((b=='X')&&(e=='X')&&(h=='X'))||((c=='X')&&(f=='X')&&(i=='X'))||((a=='X')&&(e=='X')&&(i=='X'))||((c=='X')&&(e=='X')&&(g=='X')))
 break;
 there:
 if((a!='*')&&(b!='*')&&(c!='*')&&(d!='*')&&(e!='*')&&(f!='*')&&(g!='*')&&(h!='*')&&(i!='*'))
 break;
 printf("Player 2 Turn: O   (1-9) ");
 scanf( "%d",&m);
 switch(m)
 {
 case 1:
 if(a=='*')
 {
 a='O';
 break;
 }
 else
 printf("It is already filled\n");
 goto there;

  case 2:
 if(b=='*')
 {
 b='O';
 break;
 }
 else
 printf("It is already filled\n");
  goto there;

  case 3:
 if(c=='*')
 {
 c='O';
 break;
 }
 else
 printf("It is already filled\n");
  goto there;
  case 4:
 if(d=='*')
 {
 d='O';
 break;
 }
 else
 printf("It is already filled\n");
  goto there;

  case 5:
 if(e=='*')
 {
 e='O';
 break;
 }
 else
 printf("It is already filled\n");
  goto there;

  case 6:
 if(f=='*')
 {
 f='O';
 break;
 }
 else
 printf("It is already filled\n");
  goto there;

  case 7:
 if(g=='*')
 {
 g='O';
 break;
 }
 else
 printf("It is already filled\n");
  goto there;

  case 8:
 if(h=='*')
 {
 h='O';
 break;
 }
 else
 printf("It is already filled\n");
  goto there;

  case 9:
 if(i=='*')
 {
 i='O';
 break;
 }
 else
 printf("It is already filled\n");
  goto there;

 }
 print(a,b,c,d,e,f,g,h,i);
 if(((a=='O')&&(b=='O')&&(c=='O'))||((d=='O')&&(e=='O')&&(f=='O'))||((g=='O')&&(h=='O')&&(i=='O'))||((a=='O')&&(d=='O')&&(g=='O'))||((b=='O')&&(e=='O')&&(h=='O'))||((c=='O')&&(f=='O')&&(i=='O'))||((a=='O')&&(e=='O')&&(i=='O'))||((c=='O')&&(e=='O')&&(g=='O')))
   break;
}
if(((a=='X')&&(b=='X')&&(c=='X'))||((d=='X')&&(e=='X')&&(f=='X'))||((g=='X')&&(h=='X')&&(i=='X'))||((a=='X')&&(d=='X')&&(g=='X'))||((b=='X')&&(e=='X')&&(h=='X'))||((c=='X')&&(f=='X')&&(i=='X'))||((a=='X')&&(e=='X')&&(i=='X'))||((c=='X')&&(e=='X')&&(g=='X')))
{
printf("\n\nPlayer 1 [X] won the match");
developer();


}
else if(((a=='O')&&(b=='O')&&(c=='O'))||((d=='O')&&(e=='O')&&(f=='O'))||((g=='O')&&(h=='O')&&(i=='O'))||((a=='O')&&(d=='O')&&(g=='O'))||((b=='O')&&(e=='O')&&(h=='O'))||((c=='O')&&(f=='O')&&(i=='O'))||((a=='O')&&(e=='O')&&(i=='O'))||((c=='O')&&(e=='O')&&(g=='O')))
{
printf("\n\nPlayer 2 [O] won the match");
developer();
}


else
{
printf("\n\nThe match is drawn");
developer();

}
printf("\n\n\n\nDo you wanna reset the game and play again?\n Then press 1\n Press any other key to exit ");
scanf("%d",&con);
}while(con==1);
getch();
}
void developer()
{
printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t    Developed by:Richie");
}
