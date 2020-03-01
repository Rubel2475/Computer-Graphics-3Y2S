#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

const int LEFT=1, RIGHT=2, BOTTOM=4, TOP=8;
int lef,t,r,b;  ///left,top,right,bottom

int getcode(int x, int y){
    int code=0;

    if(x<lef)
        code = code|LEFT;
    if(x>r)
        code = code|RIGHT;
    if(y<t)
        code = code|TOP;
    if(y>b)
        code = code|BOTTOM;
    return code;
}

int main(){

    int accept=0,permission=0;
    int x, y, outcode, outcode1, outcode2;
	cout<<"Enter Rectangle Coefficients (Left, Top, Right, Below): ";
	cin>>lef>>t>>r>>b;
	int x1,y1,x2,y2; //xOne,yOne
	cout<<"Enter Line Coefficients (x1,y1,x2,y2): ";
	cin>>x1>>y1>>x2>>y2;

    int gd0 = DETECT, gm0;
    initgraph(&gd0, &gm0, "");

    setcolor(BLUE);
	line(x1,y1,x2,y2);
    rectangle(lef,t,r,b);

    outcode1=getcode(x1,y1);
	outcode2=getcode(x2,y2);


	while(1){

        float m = (float)((y2-y1)/(x2-x1));

        if(outcode1==0 && outcode2==0){
			accept = 1;
			break;
		}
        else if((outcode1 & outcode2)!=0)
            break;
        else{
            if(outcode1==0){
                outcode = outcode2;
            }
            else outcode = outcode1;


            if(outcode & LEFT){
                x = lef;
                y = y1+ m*(x-x1);
            }
            else if(outcode & RIGHT){
                x = r;
                y = y1+ m*(x-x1);
            }
            else if(outcode & BOTTOM){
                y = t;
                x = x1 + (y-y1)/m;
            }
            else if(outcode & TOP){
                y = b;
                x = x1 + (y-y1)/m;
            }


            if(outcode == outcode1){
                x1 = x;
                y1 = y;
                outcode1 = getcode(x1,y1);
            }
            else{
                x2 = x;
                y2 = y;
                outcode2 = getcode(x2,y2);
            }
        }
	}

    setcolor(WHITE);
	if(accept==1){
        cout<<"To See Graph After Clipping Press 1:";
        cin>>permission;
        if(permission!=1)return 0;
        closegraph();
        int gd1= DETECT, gm1;
        initgraph(&gd1, &gm1, "");
		line(x1,y1,x2,y2);
		setcolor(RED);
		rectangle(lef,t,r,b);
	}
    getch();
    closegraph();

    return 0;
}
