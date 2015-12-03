#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include"credits.c"
#include"rules.c"
#include"board.c"
#include"index.c"
void main()
{int gd=DETECT,gm;
initgraph(&gd,&gm,"") ;
//clearviewport();
clearviewport();;
indexgame() ;
getch();
closegraph();
}