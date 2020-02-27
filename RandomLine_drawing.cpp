#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main(){

    int gdrive=DETECT,gmode;
    initgraph(&gdrive,&gmode,"");

    int n=0;
    while(1){
        n++;
        setcolor(rand()%20);
        line(rand()%25,rand()%100, rand()%400,50+rand()%300);   /// a + rand()%n Here, a=the first number in range, n=the number of terms in your range
        delay(100);     //Sleep(100);

        if(n>50){
            cleardevice();
            n=0;
        }
    }

    getch();
    closegraph();

    return 0;
}



/*
//random number generating

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(void)
{
     // to prevent sequence repetition between runs
     srand(time(NULL));


     for(int i = 1; i <=10; i++)     // looping to print 10 numbers
     {
           cout << 10 + rand()%46;   // formula for numbers
           cout<< " ";
     }

     return 0;
}
*/

