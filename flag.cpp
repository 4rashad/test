#include <conio.h>
#include <graphics.h>
#include <time.h>
#include <stdio.h>


int main()
{
void rict();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

setfillstyle(SOLID_FILL, 13);
    floodfill(222, 222, WHITE);
settextstyle(GOTHIC_FONT,HORIZ_DIR,5);


rict();


getch();
closegraph();
    return 0;
}

void rict(){
int z=RED;
for(int x=40;x<=300;x++){
    for(int y=40;y<=400;y++){
        if(x<=115){z=RED;}else if (x<=212){z=WHITE;}else{z=BLACK;}
            putpixel(y,x,z);}}
setcolor(GREEN);
setbkcolor(WHITE);
outtextxy(130,140,"Çááå ÇßÈÑ");


}
