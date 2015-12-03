
void indexgame()
{
// int gd=DETECT,gm,i=0;
 char ch='a';
clearviewport();
//initgraph(&gd,&gm,"");
 //setbkcolor(9);
while(1)
{ setfillstyle(7,9);
 floodfill(1,1,15);

   setcolor(14);

   setcolor(14);
  settextstyle(4,HORIZ_DIR,8);
 outtextxy(90,90,"MONOPOLY");
  //if(i<3)
  //{


  setcolor(14);
 settextstyle(5,HORIZ_DIR,4);

 outtextxy(250,220,"PLAY");

  settextstyle(5,HORIZ_DIR,4);
 outtextxy(250,270,"HELP");

 settextstyle(5,HORIZ_DIR,4);
 outtextxy(250,320,"CREDITS");


// settextstyle(5,HORIZ_DIR,4);
// outtextxy(250,370,"EXIT");


 ch=getch();

 switch(ch)
 {
  case 'p':
	   {
	   board();


	   break;
	   }
  case 'h':
	  {
	    gamerules();

	     break;
	     }
   case 'c':
	  {
	  credits();


	   break;
	   }
    case  27:
	    {


	       exit(0);


		break;
		}

   }
}
//getch();
//closegraph();
//return;
}