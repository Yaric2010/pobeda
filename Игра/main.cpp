#include "TXLib.h"

void boll(int x, int y)
{
    txSetFillColor(TX_YELLOW);
    txCircle(x, y, 10);

}

void spawn()
{
    txSetFillColor(TX_GREEN);
    txRectangle(0,0,800,600);
    txLine(0,50, 75, 50);


}


int main()
{
    int yplay = 10;
    int xplay = 10;

    txCreateWindow (800, 600);
    while(true)
    {
        boll(xplay, yplay);


        if(GetAsyncKeyState ('A'))
        {
            xplay -=2;

        }
        if(GetAsyncKeyState ('D'))
        {
            xplay +=2;

        }

        if(GetAsyncKeyState ('W'))
        {
            yplay -=2;

        }
        if(GetAsyncKeyState ('S'))
        {
            yplay +=2;

        }

        txSleep(1);

        txSetFillColor(TX_BLACK);
        txRectangle(0,0,800,600);


    }

    txTextCursor (false);
    return 0;
}
 /*
 if(y2 == 180)
        {
            y +=v;
        }

        if(y2 == 0)
        {
            y -=v;
        }

        if(y > 580)
        {
            y2 = 0;
            //v +=0.2;
        }

       if(y < 20)
        {
            y2 = 180;
            //v +=0.2;
        }


        if(x2 == 90)
        {
            x +=v;
        }

        if(x2 == 270)
        {
            x -=v;
        }

        if(x > 780)
        {
            x2 = 270;
            //v +=0.2;
        }

        if(x < 20)
        {
            x2 = 90;
           // v +=0.2;
        }
        txSleep(1);

        txSetFillColor(TX_BLACK);
        txRectangle(0,0,800,600);
  */
