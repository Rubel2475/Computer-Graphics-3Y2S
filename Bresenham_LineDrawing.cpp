#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main(){

    int x1,y1,x2,y2;

    Input:
    cout<< "Enter the Starting point: ";
    cin >> x1 >> y1;
    cout<< "Enter the Ending point: ";
    cin >> x2 >> y2;

    if(x1>x2){
        swap(x1,x2);
        swap(y1,y2);
    }
    if((x1<0||x2<0||y1<0||y2<0) || (abs((y2-y1)/(x2-x1))>1)){
        cout<< "Invalid ipuut\n";
        goto Input;
    }

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int c=2*(y2-y1);
    int decisionParam = c-(x2-x1);

    for(int x=x1,y=y1; x<=x2; x++){

        putpixel(x,y,GREEN);
        delay(100);

        /*if(x==x2 && y==y2){
            break;
        }*/

        if(decisionParam<0){
            decisionParam = decisionParam + c;
        }
        else{
            y++;
            decisionParam = decisionParam + c - 2*(x2-x1);
        }
    }

    getch();
    closegraph();

    return 0;
}
