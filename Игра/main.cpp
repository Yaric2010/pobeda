#include "TXLib.h"

void player(int x, int y)
{
    txSetFillColor(TX_YELLOW);
    txCircle(x, y, 10);

}

void spawn()
{
    txSetFillColor(TX_GREEN);
    txSetColor(TX_NULL);
    txRectangle(0,0, 1901,1025);

    txSetFillColor(RGB(128,128,128));
    txRectangle(0,300,1901,650);

    txSetFillColor(RGB(128,128,128));
    txRectangle(900,0,1250,1025);

    txLine(0,299, 900, 299);
    txLine(0,651, 900, 651);
    txLine(1250,299, 1900, 299);
    txLine(1250,650, 1900, 650);
    txLine(899,0, 899, 300);
    txLine(1250,0, 1250, 300);
    txLine(899,650, 899, 1025);
    txLine(1250,650, 1250, 1250);

    txSetFillColor(RGB(110,110,110));
    txRectangle(0,295, 900, 301);
    txRectangle(0,655, 900, 649);
    txRectangle(1250,295, 1900, 301);
    txRectangle(1250,655, 1900, 649);
    txRectangle(895,0, 901, 300);
    txRectangle(1249,0, 1255, 300);
    txRectangle(901,650, 895, 1025);
    txRectangle(1249,650, 1255, 1250);

    txSetColor(TX_BLACK);
    txSetFillColor(RGB(100,100,100));
    txRectangle(1,1,200,280);

    txRectangle(300,1,500,280);



}


int main()
{
    int yplay = 10;
    int xplay = 10;
    float V = 2;

    txCreateWindow (1900, 1024);
    while(true)
    {
        spawn();
        player(xplay, yplay);


        if(GetAsyncKeyState ('A'))
        {
            if(xplay > 210 and yplay < 290 or yplay > 290)
            {
                if(xplay < 302 or xplay > 510 and yplay < 290 or yplay > 290)
                {
                    xplay -=V;
                }
            }
        }
        if(GetAsyncKeyState ('D'))
        {
            if(xplay < 290 or xplay > 508 and yplay < 290 or yplay > 290)
            {
                xplay=xplay + V;
                xplay  += 1;
            }
        }

        if(GetAsyncKeyState ('W'))
        {
            if(xplay > 210 or xplay < 210 and yplay > 290)
            {
                if(xplay < 300 or xplay > 510 or xplay < 510 and yplay > 290)
                {
                    yplay -=V;
                }
            }

        }
        if(GetAsyncKeyState ('S'))
        {
            yplay=yplay + V;
            yplay  += 1;
        }

        if(GetAsyncKeyState (VK_LSHIFT))
        {
            if(V < 3)
            {
                V += 0.001;
            }
        }
        else if(V >= 2)
        {
            V -= 0.005;
        }


        txSleep(1);




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
