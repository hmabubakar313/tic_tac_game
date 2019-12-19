
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }


   setcolor(10);

    /* draw the circle */
   line(450,150,450,300);
   line(500,150,500,300);
   line(400,200,550,200);
   line(400,250,550,250);
   //setcolor(20);
   /*1*///circle(425,175,10);
   /*4*///circle(425,225,10);
   /*7*///circle(425,275,10);
   /*2*///circle(475,175,10);
   /*3*///circle(525,175,10);
   /*5*///circle(475,225,10);
   /*8*///circle(475,275,10);
   /*9*///circle(525,275,10);
   /*6*///circle(525,225,10);
   setcolor(14);
   rectangle(375,125,575,325);

   int B;
	int B1=-1,B2=-1,B3=-1,B4=-1,B5=-1,B6=-1,B7=-1,B8=-1,B9=-1;
   int G=1 ,p=1;
   while(G<=9)
   {
	cout<<"player"<<p;
	if(p==1)
	{
		setcolor(30);
	}
	else
	{
		setcolor(40);
	}
       /*	while(j==0)
	{
	if((B<1)||(B>9))
		{
		cout<<"Invalid No";
		}
	else if(((B==1)&&(B1!=-1))||((B==2)&&(B2!=-1))||((B==3)&&(B3!=-1))||((B==4)&&(B4!=-1))||((B==5)&&(B5!=-1))||((B==6)&&(B6!=-1))||((B==7)&&(B7!=-1))||((B==8)&&(B8!=-1))||((B==9)&&(B9!=-1)))
       */	cout<<"Enter box no  =  ";
	cin>>B;
	if(B==1)
	{
		circle(425,175,10);
		if(p==1)
		{
			B1=0;
		}
		else
		{
			B1=1;
		}
	}
	else if(B==2)
	{
		circle(475,175,10);
		if(p==1)
		{
			B2=0;
		}
		else
		{
			B2=1;
		}
	}
	else if(B==3)
	{
		circle(525,175,10);
		if(p==1)
		{
			B3=0;
		}
		else
		{
			B3=1;
		}

	}
	else if(B==4)
	{
		/*4*/circle(425,225,10);
		if(p==1)
		{
			B4=0;
		}
		else
		{
			B4=1;
		}
	}
	else if(B==5)
	{
		/*5*/circle(475,225,10);
		if(p==1)
		{
			B5=0;
		}
		else
		{
			B5=1;
		}
	}
	else if(B==6)
	{
	   /*6*/circle(525,225,10);
		if(p==1)
		{
			B6=0;
		}
		else
		{
			B6=1;
		}
	}
	else if(B==7)
	{
		 /*7*/circle(425,275,10);
		if(p==1)
		{
			B7=0;
		}
		else
		{
			B7=1;
		}
	}
	else if(B==8)
	{
		/*8*/circle(475,275,10);
		if(p==1)
		{
			B8=0;
		}
		else
		{
			B8=1;
		}
	}
	else if(B==9)
	{
		/*9*/circle(525,275,10);
		if(p==1)
		{
			B9=0;
		}
		else
		{
			B9=1;
		}
	}
	else
	{
		cout<<"Invailad";
	}
	if(p==1)
	{
	 p=2;
	}
	else if(p==2)
	{
	p=1;
	}
	if(((B1==0)&&(B2==0)&&(B3==0))||((B3==0)&&(B6==0)&&(B9==0))||((B4==0)&&(B5==0)&&(B6==0))||((B7==0)&&(B8==0)&&(B9==0))||((B1==0)&&(B5==0)&&(B9==0))||((B3==0)&&(B5==0)&&(B7==0)))
	{
	cout<<"player 1 is win";
	G=10;
	}
	if(((B1==1)&&(B2==1)&&(B3==1))||((B3==1)&&(B6==1)&&(B9==1))||((B4==1)&&(B5==1)&&(B6==1))||((B7==1)&&(B8==1)&&(B9==1))||((B1==1)&&(B5==1)&&(B9==1))||((B3==1)&&(B5==1)&&(B7==1)))
	{
	cout<<"player 2 is win";
	G=10;
	}
	G=G+1;
   }
   /* clean up */
   getch();
   closegraph();
   return 0;
}

