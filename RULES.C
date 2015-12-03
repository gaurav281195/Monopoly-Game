//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>

//#include <stdlib.h>
//#include <string.h>
//#include"index.c"

/*char *fname[] = { "EMPTY_FILL",
		  "SOLID_FILL",
		  "LINE_FILL",
		  "LTSLASH_FILL",
		  "SLASH_FILL",
		  "BKSLASH_FILL",
		  "LTBKSLASH_FILL",
		  "HATCH_FILL",
		  "XHATCH_FILL",
		  "INTERLEAVE_FILL",
		  "WIDE_DOT_FILL",
		  "CLOSE_DOT_FILL",
		  "USER_FILL"
		};
  */
  void rule(int col)
{
      setfillstyle(8,1);
      floodfill(1,1,col);
      setcolor(col);
      rectangle(0,0,getmaxx(),getmaxy());
      rectangle(4,4,635,475);
     // rectangle(150,8,400,125);
     //fillellipse(300,80,90,40);
 }


void gamerules()
{
   char ch='1';

//   int gdriver = DETECT, gmode, errorcode;
//   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
clearviewport();
do
{
clrscr();
      rule(14);
      setcolor(10);
      ellipse(330,78,0,360,130,42);
      setcolor(12);
      ellipse(335,85,0,360,130,42);
      //

      settextstyle(4,0,7);
      setcolor(10);
      outtextxy(230,40,"RULES" );
      setcolor(12);
      outtextxy(232,40,"RULES" );

      settextstyle(1,0,4);
      setcolor(14);
      outtextxy(60,150,"1. OBJECT");
      setcolor(2);
      outtextxy(60,190,"2. PREPARATION");
      setcolor(14);
      outtextxy(60,230,"3. TURNS");
      setcolor(2);
      outtextxy(60,270,"4. BUYING PROPERTY");
      setcolor(14);
      outtextxy(60,310,"5. MONOPOLIES");
      setcolor(2);
      outtextxy(60,350,"6. SELLING PROPERTIES");
      setcolor(14);
      outtextxy(60,390,"7. UNIQUE SPACES");

      outtextxy(60,420,"8. Exit");

     // scanf("%d",&ch);
     ch=getch();
settextstyle(1,0,2);
switch(ch)
{case '1':
       clrscr();
       rule(2);
       setcolor(14);
       settextstyle(1,0,6);
       outtextxy(30,30,"OBJECT");
       settextstyle(2,0,6);
       outtextxy(10,120,"The goal of Monopoly is to end the game as the wealthiest player.");
       outtextxy(10,140,"To do so, players must buy and sell land while gaining possession");
       outtextxy(10,160,"of property sets, building houses and hotels and trying to avoid");
       outtextxy(10,180,"paying rent to opponents while hoping they will be forced to pay");
       outtextxy(10,200,"rent to you.");
       getch();
       break;
case '2':
       clrscr();
       rule(3);
       setcolor(14);
       settextstyle(1,0,6);
       outtextxy(30,30,"PREPARATION");
       settextstyle(2,0,6);
       outtextxy(10,120,"Prior to the start of the game, each player chooses a playing");
       outtextxy(10,140,"piece to represent them and is given atotal of $1500 in");
       outtextxy(10,160,"various bills (two for $500, two for $100, two for $50, six");
       outtextxy(10,180,"for $20, five for $10, five for $5 and five for $1). One");
	outtextxy(10,200,"player is then chosen to be responsible for the bank's money,");
	outtextxy(10,220,"and players decide upon turn order.");
       getch();
	break;
case '3':
       clrscr();
       rule(3);
       setcolor(14);
       settextstyle(1,0,6);
       outtextxy(30,30,"TURNS");
       settextstyle(2,0,6);
       outtextxy(10,120,"Players then take turns rolling a pair of dice and advancing their token");
       outtextxy(10,140,"the corresponding number of spaces.\nDepending upon where each player");
       outtextxy(10,160,"lands you may purchase a property, draw a Chance or Community Chest");
       outtextxy(10,180,"Card pay rent to another player, collect or pay money to the bank,");
	outtextxy(10,200,"or be sent to jail for three turns.");
       getch();
	break;
case '4':
       clrscr();
       rule(4);
       setcolor(14);
       settextstyle(1,0,6);
       outtextxy(30,30,"BUYING PROPERTIES");
       settextstyle(2,0,6);
       outtextxy(10,120,"If a player lands on a space that no one else owns, you may");
	outtextxy(10,140,"either choose to purchase it or not. If the player chooses not");
	outtextxy(10,160,"to buy it, the bank puts the property up for auction and it goes");
       outtextxy(10,180,"to the highest bidder.");
       getch();
	break;
case '5':
       clrscr();
	rule(5);
	setcolor(14);
	settextstyle(1,0,6);
       outtextxy(30,30,"MONOPOLIES");
       settextstyle(2,0,6);
       outtextxy(10,120,"If a player secures all types of a property, it is called");
       outtextxy(10,140,"a monopoly and they are allowed to charge more money (double");
	outtextxy(10,160,"the rent for color-coded properties).\nAlso, with all property");
	outtextxy(10,180,"types except utilities and railroads, the owner of a monopoly");
	outtextxy(10,200,"may further increase the rent by adding houses and hotels.");
       getch();
	break;
case '6':
       clrscr();
	rule(6);
       setcolor(14);
       settextstyle(1,0,6);
       outtextxy(30,30,"SELLING PROPERTIES");
       settextstyle(2,0,6);
	outtextxy(10,120,"Properties may be sold to another player at any time, provided");
	outtextxy(10,140,"they do not have any houses on them. Alternately, a property may");
	outtextxy(10,160,"be mortgaged to the bank in exchange for one-half its purchase");
	outtextxy(10,180,"price, though mortgaged properties do not require players to pay");
	outtextxy(10,200,"rent if landed upon.");
       getch();
	break;
case '7':
       clrscr();
       rule(12);
	setcolor(14);
       settextstyle(1,0,6);
       outtextxy(30,30,"UNIQUE SPACES");
       settextstyle(2,0,6);
	outtextxy(10,120,"Players who pass the Start are given Rs.1500 from the bank.");
	outtextxy(10,140,"A player who hits the Go To Jail space or otherwise is sent to");
	outtextxy(10,160,"Jail must wait there for three turns, pay a fee or use a special");
	outtextxy(10,180,"card to be released and return to play.");
       getch();
	break;
case '8':
       clrscr();
       //	rule(8);
       //	setcolor(14);
      // settextstyle(1,0,6);
      // indexgame();
      // outtextxy(200,200,"EXIT");
      // getch();
       break;
}}
while(ch!='8');

 //  getch();
 //  closegraph();

   return ;
}


