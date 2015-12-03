void load()
{
randomize();
 setcolor(128+random(16));
       settextstyle(4,0,7);
       outtextxy(160,30,"WELCOME");
       setcolor(128+random(16));
       outtextxy(280,150,"TO");
       setcolor(128+random(16));
       outtextxy(220,330,"MONOPOLY");
       rectangle(0,0,639,479);
       rectangle(4,4,635,475);
       delay(50);
}
