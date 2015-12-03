//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>
//#include"index.c"
//#include"newrules.c"
void credits()
{
// int gd=DETECT,gm;
 char ch;
// initgraph(&gd,&gm,"");
clearviewport();
 setfillstyle(7,9);
 floodfill(1,1,15);
// setbkcolor(8);

{ settextstyle(4,HORIZ_DIR,7);
 outtextxy(170,25,"CREDITS");

  settextstyle(7,HORIZ_DIR,4);
 outtextxy(25,120,"DESIGNED BY:");

   settextstyle(6,HORIZ_DIR,4);
 outtextxy(40,190,"Naman Singhal");

  settextstyle(6,HORIZ_DIR,4);
 outtextxy(40,260,"Jaspreet Singh");

   settextstyle(6,HORIZ_DIR,4);
 outtextxy(400,190,"Gaurav Singhal");

settextstyle(6,HORIZ_DIR,4);
 outtextxy(400,260,"Karan Grover");

 settextstyle(7,HORIZ_DIR,4);
 outtextxy(25,350,"GUIDED BY:");

settextstyle(6,HORIZ_DIR,4);
 outtextxy(40,400,"Mr. Pulkit Mehndiratta");
}
if(kbhit)
{ch=getch();
//else
clearviewport();
//indexgame();
}// getch();
// closegraph();
 return;
 }





