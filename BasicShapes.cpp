//#include<iostream>
#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main(){

    int gdrive=DETECT,gmode, left=100,top=100,right=200,bottom=200,x=150,y=290,radius=50;
    initgraph(&gdrive, &gmode, "");

    line(100,50, 350,50);   //void line(int x1,int y1, int x2,int y2)

    rectangle(left,top,right,bottom);   //void rectangle(int left, int top, int right, int bottom);
    bar(left+150,top,right+150,bottom);  //void bar(int left, int top, int right, int bottom);

    circle(x,y,radius);     //void circle(int x,int y, int radius);
    ellipse(x+160,y, 0,360, 100,50);   //void ellipse(int x,int y, int start_angle, int EndAngle, X_radius,Y_radius)

    outtext("Different shapes:");    //void outtext(char* textString)
    outtextxy(190,400,"Figure: basic shapes of some graphic object");   //void outtextxy(int x,int y, char* textString)

    getch();
    closegraph();


    return 0;
}
