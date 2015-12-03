#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#include"cityname.c"
#include"intro.c"
char buf[10];
int x1=45,y1=410;
int x2=30,y2=410;
int count1=-1,count2=-1;
int fbank=0,fmen=0;
 int flag=0;
int count=0;
struct rect
{int x1,y1,x2,y2,no;
 struct rect *next,*prev;
}*hrect,*rect;

struct linklist
{int cardno;
int house;
struct linklist *next,*prev;
}*cbank,*cred,*cblue,*hbank,*hred,*hblue;
typedef struct linklist node;
struct balance
{long int amount;
}abank,ared,ablue;
void manr();
void manb();
//Structure containing informations of cities
struct bus
{
 int city_no;
 char city[20];
 int price;
 int rent;
 int cost_house;
 int renthouse;
 int mortgage;
 int sell;
 }ob[24];

// Function to create Circles on the Dice
void cir(int x,int y)
{
  circle(x,y,4);
  setfillstyle(1,9);
  floodfill(x,y,15);
}

// Function to Print Outcome on the dice

void swtch(int c,int i)
{

 switch(c)
    {
	 case 1: cir(217+i,335);
	     break;

	 case 2: cir(205+i,333);
		 cir(225+i,333);
	      break;

	 case 3: cir(205+i,323);
		 cir(215+i,333);
		 cir(225+i,343);
	      break;

	 case 4: cir(205+i,323);
		 cir(230+i,323);
		 cir(205+i,343);
		 cir(230+i,343);
	      break;

	 case 5: cir(205+i,320);
		cir(230+i,320);
		cir(217+i,333);
		cir(205+i,345);
		cir(230+i,345);
	      break;


	 case 6: cir(205+i,320);
		 cir(230+i,320);
		 cir(205+i,333);
		 cir(230+i,333);
		 cir(205+i,346);
		 cir(230+i,346);
	      break;
    }

}

// Fuction to Display the information of cities depending on the outcome of the dices

int card(int i,node *header)
{node *ptr;
char ch;
int k;
flag=0;
 setcolor(10);
 setfillstyle(1,0);
 bar3d(130,130,505,380,0,0);

 settextstyle(1,HORIZ_DIR ,5);
 if(i==0)
 { outtextxy(250,140,ob[i].city);
   outtextxy(130,145,"_________________") ;

  outtextxy(135,210,"Rs.1500 has been");
   outtextxy(180,260,"added to your");
   outtextxy(240,310,"account");
    if(header==hred)
    { ared.amount=ared.amount+1500;
    }
     else if(header==hblue)
     { ablue.amount=ablue.amount+1500;
     }

  getch();
 }
 else if(i==7)
 {outtextxy(190,140,ob[i].city);
 outtextxy(130,145,"_________________") ;

 outtextxy(150,200,"Rs.500 added to ") ;
 outtextxy(190,240,"your account");
 outtextxy(160,280,"from opponents");
 outtextxy(240,320,"account");
   if(header==hred)
    { ared.amount=ared.amount+500;
     ablue.amount=ablue.amount-500;
    }
     else if(header==hblue)
     { ablue.amount=ablue.amount+500;
       ared.amount=ared.amount-500;
     }

  getch();
 }
 else if(i==12)
 {outtextxy(250,140,ob[i].city);
 outtextxy(130,145,"_________________") ;

 outtextxy(230,210,"Penalty");
   outtextxy(290,260,"of");
  outtextxy(250,320,"Rs.500");
   if(header==hred)
    { ared.amount=ared.amount-500;
    }
     else if(header==hblue)
     { ablue.amount=ablue.amount-500;
     }

  getch();
 }
 else if(i==19)
 {outtextxy(260,140,ob[i].city);
 outtextxy(130,145,"_________________") ;

 outtextxy(150,200,"Rs.500 added to ") ;
 outtextxy(220,240,"opponents");
 outtextxy(180,280,"account from");
 outtextxy(190,320,"your account");
   if(header==hred)
    { ared.amount=ared.amount-500;
     ablue.amount=ablue.amount+500;
    }
     else if(header==hblue)
     { ablue.amount=ablue.amount-500;
       ared.amount=ared.amount+500;
     }

  getch();
 }

else
{
outtextxy(190,140,ob[i].city);
 outtextxy(130,145,"_________________") ;

   settextstyle(1,0,3);
   outtextxy(145,200,"Price: ")  ;
      sprintf(buf,"%d",ob[i].price);
   outtextxy(220,200,buf);
   if(fbank==1)
  { outtextxy(145,240,"Do you want to buy(Y/N)?");
     ch=getch();
  }
   else if(fmen==0)
   { //ptr=header;
    if(header==hblue)
    ptr=hred;
    else if(header==hred)
   ptr=hblue;
   while(ptr->cardno!=i)
    ptr=ptr->next;
//  printf("%d\t",ptr->house) ;
//   printf("%d",ptr->cardno) ;

   if(ptr->house==0)
   { outtextxy(145,230,"Rent: ")  ;
	sprintf(buf,"%d",ob[i].rent);
   outtextxy(220,230,buf);
   outtextxy(140,270,"Rent amount has been shifted ");
   outtextxy(190,310,"to opponent's account");
   if(header==hred)
   {   ablue.amount=ablue.amount+ob[i].rent;
	ared.amount=ared.amount-ob[i].rent;
   }
   else if(header==hblue)
   {   ared.amount=ared.amount+ob[i].rent;
	ablue.amount=ablue.amount-ob[i].rent;
   }}
    if(ptr->house==1)
   { outtextxy(145,230,"Rent: ")  ;
	sprintf(buf,"%d",ob[i].renthouse);
   outtextxy(220,230,buf);
   outtextxy(140,270,"Rent amount has been shifted ");
   outtextxy(190,310,"to opponent's account");
   if(header==hred)
   {   ablue.amount=ablue.amount+ob[i].renthouse;
	ared.amount=ared.amount-ob[i].renthouse;
   }
   else if(header==hblue)
   {   ared.amount=ared.amount+ob[i].renthouse;
	ablue.amount=ablue.amount-ob[i].renthouse;
   }}


   getch();

   }
   else if(fmen==1)
   {
      outtextxy(145,260,"Cost of house: ")  ;
   outtextxy(145,290,"Rent with house: ")  ;
   outtextxy(145,320,"Bank mortgage value: ")  ;

    sprintf(buf,"%d",ob[i].cost_house);
   outtextxy(320,260,buf);

   sprintf(buf,"%d",ob[i].renthouse);
   outtextxy(360,290,buf);

    sprintf(buf,"%d",ob[i].mortgage);
   outtextxy(410,320,buf);
   settextstyle(1,0,2);

   outtextxy(140,350,"Do you want to have a house(Y/N)?");
   ch=getch();
   if(ch=='y' || ch=='Y')
   {ptr=header;
   while(ptr->cardno!=i)
   ptr=ptr->next;
   ptr->house=1;



   if(header==hred)
   {
	ared.amount=ared.amount-ob[i].cost_house;
   }
   else if(header==hblue)
   {
	ablue.amount=ablue.amount-ob[i].cost_house;
   }

   }

   getch();


   }

   if((ch=='y' || ch=='Y') && fbank==1)
{flag=1;
setcolor(10);
 setfillstyle(1,0);
 rect=hrect;
 while(rect->no!=i)
 rect=rect->next;
if(header==hblue)
{setcolor(1);
//printf("%d %d %d %d",rect->x1,rect->y1,rect->x2,rect->y2);
if(i>0 && i<8)
rectangle(rect->x1+5,rect->y1+5,rect->x2-5,rect->y2-5);
else if(i>=8 && i<12)
rectangle(rect->x1+5,rect->y1-5,rect->x2-5,rect->y2+5);
else if(i>=12 && i<19)
rectangle(rect->x1+5,rect->y1+5,rect->x2-5,rect->y2-5);
else if(i>=19 && i<24)
rectangle(rect->x1+5,rect->y1+5,rect->x2-5,rect->y2-5);


}


else if(header==hred)
{setcolor(4);
//printf("%d %d %d %d",rect->x1,rect->y1,rect->x2,rect->y2);
if(i>0 && i<8)
rectangle(rect->x1+5,rect->y1+5,rect->x2-5,rect->y2-5);
else if(i>=8 && i<12)
rectangle(rect->x1+5,rect->y1-5,rect->x2-5,rect->y2+5);
else if(i>=12 && i<19)
rectangle(rect->x1+5,rect->y1+5,rect->x2-5,rect->y2-5);
else if(i>=19 && i<24)
rectangle(rect->x1+5,rect->y1+5,rect->x2-5,rect->y2-5);


}   setcolor(10);

 bar3d(130,130,505,380,0,0);

 settextstyle(1,HORIZ_DIR ,5);

 outtextxy(190,140,ob[i].city);
 outtextxy(130,145,"_________________") ;

   settextstyle(1,0,3);
   outtextxy(145,200,"Price: ")  ;
      sprintf(buf,"%d",ob[i].price);
   outtextxy(220,200,buf);

   outtextxy(145,230,"Rent: ")  ;
   outtextxy(145,260,"Cost of house: ")  ;
   outtextxy(145,290,"Rent with house: ")  ;
   outtextxy(145,320,"Bank mortgage value: ")  ;
   outtextxy(145,350,"Selling value: ")  ;


   sprintf(buf,"%d",ob[i].rent);
   outtextxy(220,230,buf);

   sprintf(buf,"%d",ob[i].cost_house);
   outtextxy(320,260,buf);

   sprintf(buf,"%d",ob[i].renthouse);
   outtextxy(360,290,buf);

    sprintf(buf,"%d",ob[i].mortgage);
   outtextxy(410,320,buf);

   sprintf(buf,"%d",ob[i].sell);
   outtextxy(320,350,buf);
   getch();
}}

 setcolor(0);
 bar3d(130,130,505,380,0,0);

 setcolor(4);
 settextstyle(GOTHIC_FONT,HORIZ_DIR ,7);
 outtextxy(135,210,"MONOPOLY");
 return flag;
}
void buy(int count,node *header)
{ int f;
 node *ptr1;
 fbank=0;
 fmen=0;
 cbank=hbank;
 ptr1=header;
 while(cbank!=NULL)
{if(cbank->cardno==count && count!=0 && count!=7 && count!=12 && count!=19)
 {fbank=1;
  cbank=cbank->prev;
  break;
 }

else
cbank=cbank->next;
}


if(fbank==0  && (count!=0 && count!=7 && count!=12 && count!=19))

{   while(ptr1->next->next!=NULL)

{if(ptr1->cardno==count)
 {fmen=1;
  break;
 }

else
ptr1=ptr1->next;
}
}


f=card(count,header);

if(fbank==1 && f==1)
{ //    printf("buy");
  cbank->next=cbank->next->next;
  cbank->next->prev=cbank;

if(header==hred)
{cred->cardno=count;
cred->house=0;
//printf("%d",cred->cardno) ;
cred->next=(node*)malloc(sizeof(node));
cred->next->prev=cred;
cred=cred->next;
cred->next=NULL;
}
else if(header==hblue)
{cblue->cardno=count;
cblue->house=0;
//printf("%d",cblue->cardno) ;
cblue->next=(node*)malloc(sizeof(node));
cblue->next->prev=cblue;
cblue=cblue->next;
cblue->next=NULL;
}



}
//else printf("no");

}





void balance()
{
 setcolor(10);
 setfillstyle(1,0);
 bar3d(130,130,505,380,0,0);

 settextstyle(1,HORIZ_DIR ,5);

  outtextxy(140,140,"Account Balance:");
   outtextxy(130,145,"_________________") ;
      settextstyle(1,HORIZ_DIR ,4);

       sprintf(buf,"Player(RED):  %d",ared.amount);
   outtextxy(150,230,buf);
    sprintf(buf,"Player(BLUE):  %d",ablue.amount);
   outtextxy(150,300,buf);

	    getch();

 setcolor(0);
 bar3d(130,130,505,380,0,0);

 setcolor(4);
 settextstyle(GOTHIC_FONT,HORIZ_DIR ,7);
 outtextxy(135,210,"MONOPOLY");


}

void board()
{
 char ch='n';
// int gd= DETECT,gm;
 int i,n,j=0,k=0,sum=0,d,red=0,blue=0;
 FILE *fp;
 clearviewport();
hbank=(node*)malloc(sizeof(node));
hred=(node*)malloc(sizeof(node));
hblue=(node*)malloc(sizeof(node));
cbank=hbank;
cred=hred;
cblue=hblue;
cblue->prev=NULL;
cred->prev=NULL;
cred->cardno=25;
cblue->cardno=25;
cred->next=(node*)malloc(sizeof(node));
cred=cred->next;
cblue->next=(node*)malloc(sizeof(node));
cblue=cblue->next;


  cbank->prev=NULL;
 fp=fopen("info.txt","r");
// Loop to get information of cities annd store it in structure
for(i=0;i<24;i++)
{ fscanf(fp,"City No.: %d\nCity: %s\nPrice: Rs. %d\nRent Site: Rs. %d\nCost of House: Rs. %d\nRent with House: Rs. %d\nBank Mortgage Value: Rs. %d\nSelling Value: Rs. %d\n\n",&ob[i].city_no,&ob[i].city,&ob[i].price,&ob[i].rent,&ob[i].cost_house,&ob[i].renthouse,&ob[i].mortgage,&ob[i].sell);
  cbank->cardno=i;
  cbank->house=0;
  cbank->next=(node*)malloc(sizeof(node));
  cbank->next->prev=cbank;
  cbank=cbank->next;
 }  cbank->prev->next=NULL;
 fclose(fp);
 cbank=hbank;
 abank.amount=10000;
 ared.amount=10000;
 ablue.amount=10000;

//initgraph(&gd,&gm,"");

// function to load intro page on starting
	load();
getch();
clearviewport();

manr();
manb();

setcolor(4);

settextstyle(GOTHIC_FONT,HORIZ_DIR ,7);
   outtextxy(135,210,"MONOPOLY");
   setcolor(4);
  setfillstyle(0,4);
   bar3d(190,310,240,360,15,10);
     bar3d(350,310,400,360,15,10);
   setcolor(14);
hrect=(struct rect*)malloc(sizeof(struct rect));
   rect=hrect;

//loops to print the board
j=0;
for(i=0;i<8;i++)
{
rectangle(10+j,392,87+j,470);
rect->no=count;
rect->x1=10+j;
rect->y1=392;
rect->x2=87+j;
rect->y2=470;
rect->next=(struct rect*)malloc(sizeof(struct rect));
rect->next->prev=rect;
rect=rect->next;
j=j+77;
count++;
}
j=0;
for(i=0;i<5;i++)
{
rectangle(549,314-j,626,392-j);
rect->no=count;
rect->x1=549;
rect->y1=392-j;
rect->x2=626;
rect->y2=314-j;
rect->next=(struct rect*)malloc(sizeof(struct rect));
rect->next->prev=rect;
rect=rect->next;
j=j+78;
count++;
}
j=77;
for(i=0;i<7;i++)
{
rectangle(549-j,2,626-j,80);
rect->no=count;
rect->x1=549-j;
rect->y1=2;
rect->x2=626-j;
rect->y2=80;
rect->next=(struct rect*)malloc(sizeof(struct rect));
rect->next->prev=rect;
rect=rect->next;
j=j+77;
count++;
}
k=0;
for(i=0;i<4;i++)
{
rectangle(10,80+k,87,158+k);
rect->no=count;
rect->x1=10;
rect->y1=80+k;
rect->x2=87;
rect->y2=158+k;
rect->next=(struct rect*)malloc(sizeof(struct rect));
rect->next->prev=rect;
rect=rect->next;
k=k+78;
count++;

}
rect->prev->next=NULL;
// funtion included in cityname.c to print the cities and their prices on board
display();
//printf("%d",count);
rect=hrect;

//while(rect!=NULL)
//{printf("\t%d",rect->x1);
//rect=rect->next;
//}


i=0;
// Loop to print the dice and get values on it and move the players accordingly
while(ch=='n'|| ch=='m')
{
	ch=getch();
	sum=0;
	setcolor(4);
	setfillstyle(0,4);
	bar3d(190,310,240,360,15,10);
	bar3d(350,310,400,360,15,10);

setcolor(15);
randomize();
d=0 ;
swtch(d,0);
sum=sum+d;

d=4 ;
swtch(d,160) ;
sum=sum+d;
i=0;
// Loop to move the players according to sum of number on dices
for(n=0;n<sum;n++)
{
	if(ch=='m')
	{
		manr();

	}
	else if(ch=='n')
	{
		manb();
	}
}
if(ch=='n')
{
	while(count2!=ob[i].city_no)
	i++;
	delay(1000);
	buy(i,hblue);
	if(fbank==1 && flag==1)
	{abank.amount=abank.amount+ob[i].price;
	ablue.amount=ablue.amount-ob[i].price;

	}


}
else if(ch=='m')
{
	while(count1!=ob[i].city_no)
	i++;
	delay(1000);
	buy(i,hred);
	if(fbank==1 && flag==1)
	{abank.amount=abank.amount+ob[i].price;
	ared.amount=ared.amount-ob[i].price;

	}

}

balance();
if(ch!='m' && ch!='n')
	exit(0);
}

getch();
closegraph();
}
// function to create the red player
void manr()
{

count1++;
setcolor(0);

	circle(x1,y1,5);

	line(x1,y1+5,x1,y1+10);
	line(x1,y1+5,x1-5,y1+7);
	line(x1,y1+5,x1+5,y1+7);
	line(x1,y1+10,x1-5,y1+15);
	line(x1,y1+10,x1+5,y1+15);


if(count1>0 && count1<=7)
	x1=x1+77;
else if(count1>7 && count1<=12)
	y1=y1-78;
else if(count1>12 && count1 <=19)
	x1=x1-77;
else if(count1>19 && count1<=24)
	y1=y1+78;
if(count1>=24)
	count1=0;

setcolor(4);
circle(x1,y1,5);

	line(x1,y1+5,x1,y1+10);
	line(x1,y1+5,x1-5,y1+7);
	line(x1,y1+5,x1+5,y1+7);
	line(x1,y1+10,x1-5,y1+15);
	line(x1,y1+10,x1+5,y1+15);

}
// Function to create the blue player
void manb()
{
count2++;
setcolor(0);
circle(x2,y2,5);

	line(x2,y2+5,x2,y2+10);
	line(x2,y2+5,x2-5,y2+7);
	line(x2,y2+5,x2+5,y2+7);
	line(x2,y2+10,x2-5,y2+15);
	line(x2,y2+10,x2+5,y2+15);

if(count2>0 && count2<=7)
	x2=x2+77;
else if(count2>7 && count2<=12)
	y2=y2-78;
else if(count2>12 && count2<=19)
	x2=x2-77;
else if(count2>19 && count2<=24)
	y2=y2+78;
if(count2>=24)
	count2=0;

setcolor(1);
circle(x2,y2,5);

	line(x2,y2+5,x2,y2+10);
	line(x2,y2+5,x2-5,y2+7);
	line(x2,y2+5,x2+5,y2+7);
	line(x2,y2+10,x2-5,y2+15);
	line(x2,y2+10,x2+5,y2+15);

}
