#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;

void drawCircle(int x, int y, int xc, int yc);

int main(){

    int xc,yc,r,x,y,pk;

    cout << "Enter the centered coordinate: ";
    cin >> xc >> yc;
    cout << "Enter the radius: ";
    cin >> r;

    int gdrive,gmode;
    initgraph(&gdrive,&gmode,"");

    x=0,y=r;
    pk = 1-r;

    drawCircle(x,y,xc,yc);

    while(x<y){

        ++x;
        if(pk<0){
            pk += 2*x +1;
        }
        else{
            --y;
            pk += 2*x +1 - 2*y;
        }

        drawCircle(x,y,xc,yc);
    }

    getch();
    closegraph();

    return 0;
}

void drawCircle(int x, int y, int xc, int yc){

    putpixel(x+xc, -y+yc, BLUE);
    putpixel(x+xc, y+yc, BLUE);
    putpixel(-x+xc, -y+yc, GREEN);
    putpixel(-x+xc, y+yc, GREEN);

    putpixel(y+xc, -x+yc, RED);
    putpixel(y+xc, x+yc, RED);
    putpixel(-y+xc, -x+yc, WHITE);
    putpixel(-y+xc, x+yc, WHITE);

    delay(100);
}
