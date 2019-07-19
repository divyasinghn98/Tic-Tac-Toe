
#include<stdio.h>
#include<conio.h>
void input();
void display();
int winner();
char a[10]={ '0','1','2','3','4','5','6','7','8','9'};
void input()
{ int w=0,m,i,c;
  char mark;
  for(i=0;i<9;i++)
  { if(w==0)
    { m=(i%2==0)?1:2;
      printf("\n player %d turn \n",m);
      scanf("%d",&c);
      mark=(m==1) ? 'X': 'O';
      if(c==1 && a[1]=='1')
      a[1]=mark;
      else if(c==2 && a[2]=='2')
      a[2]=mark;
      else if(c==3 && a[3]=='3')
      a[3]=mark;
      else if(c==4 && a[4]=='4')
      a[4]=mark;
      else if(c==5 && a[5]=='5')
      a[5]=mark;
      else if(c==6 && a[6]=='6')
      a[6]=mark;
      else if(c==7 && a[7]=='7')
      a[7]=mark;
      else if(c==8 && a[8]=='8')
      a[8]=mark;
      else if(c==9 && a[9]=='9')
      a[9]=mark;
      else
      { printf("invalid move");
	i--;
	getch();
      }
       display();
       w=winner();
       if(w==1)
       { if(mark=='X')
	 printf("conguralations player1:X wins");
	 else
	 printf("conguralations player2:O wins");
       }
    }
    if(w==-1)
    printf("Oopss.....draw match");

  }
}

void display()
{ printf("\n %c | %c | %c\n",a[1],a[4],a[7]);
  printf("\n ------------\n");
  printf("\n %c | %c | %c\n",a[2],a[5],a[8]);
  printf("\n ------------\n");
  printf("\n %c | %c | %c\n",a[3],a[6],a[9]);

}

int winner()
{
   if(a[1]==a[4] && a[1]==a[7])
   return 1;
   else if(a[2]==a[5] && a[2]==a[8])
   return 1;
   else if(a[3]==a[6] && a[3]==a[9])
   return 1;
   else if(a[1]==a[2] && a[1]==a[3])
   return 1;
   else if(a[4]==a[5] && a[4]==a[6])
   return 1;
   else if(a[7]==a[8] && a[7]==a[9])
   return 1;
   else if(a[1]==a[5] && a[1]==a[9])
   return 1;
   else if(a[3]==a[5] && a[3]==a[7])
   return 1;

else if(a[1]!='1' && a[2]!='2' && a[3]!='3' && a[4]!='4' && a[5]!='5' && a[6]!='6' && a[7]!='7' && a[8]!='8' && a[9]!='9')
return -1;

else
return 0;

}

void main()
{
  printf("\n WELCOME ...... TIC TAC TOE GAME\n ");
  getch();
  printf("\n please decide player1=X  player2=O \n");
  getch();
  printf("\n 1 | 4 | 7\n");
  printf("\n ---------\n");
  printf("\n 2 | 5 | 8\n");
  printf("\n ---------\n");
  printf("\n 3 | 6 | 9\n");
  printf("please enter grid no for input");
input();
getch();
}
