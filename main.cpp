#include "TXLib.h"
void enter()
{
    txDrawText(0, 0, 800, 600, "����������!");
    txSleep(3000);
    txSetFillColor(TX_BLACK);
    txRectangle(0, 0, 800, 600);
    txDrawText(0, 0, 800, 600, "����� ������ ������...");
    txSleep(3000);
    txSetFillColor(TX_BLACK);
    txRectangle(0, 0, 800, 600);
    txDrawText(0, 0, 800, 600, "....��� � ������!");
    txSleep(3000);
}

void fon_n(int x)
{
    txSetFillColor(TX_GREEN);
    txSetColor(TX_TRANSPARENT);
    txRectangle(0, 199, 800, 600);
    txSetFillColor(TX_WHITE);
    txRectangle(0, 0, 800, 200);
    txSetColor(TX_BLACK);
    txLine(x + 40, 0, x + 40, 200);   //�����, ��� �����
    txLine(x + 80, 0, x + 80, 200);
    txLine(x + 120, 0, x + 120, 200);
    txLine(x + 160, 0, x + 160, 200);
    txLine(x + 200, 0, x + 200, 200);
    txLine(x + 240, 0, x + 240, 200);
    txLine(x + 240 + 40, 0, x + 240 + 40, 200);
    txLine(x + 240 + 40+ 40, 0, x + 240 + 40+ 40, 200);
    txLine(x + 240 + 40+ 40+ 40, 0, x + 240 + 40+ 40+ 40, 200);
    txLine(x + 240 + 40+ 40+ 40+ 40, 0, x + 240 + 40+ 40+ 40+ 40, 200);
    txLine(x + 240 + 40+ 40+ 40+ 40+ 40, 0, x + 240 + 40+ 40+ 40+ 40+ 40, 200);
    txLine(x + 240 + 40+ 40+ 40+ 40+ 40+ 40, 0, x + 240 + 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40, 0, x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 0, x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40 + 40, 0, x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40 + 40+ 40+ 40, 0, x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40 + 40+ 40+ 40, 0, x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40 + 40+ 40+ 40+ 40, 0, x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40 + 40+ 40+ 40+ 40+ 40+ 40, 0, x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40 + 40+ 40+ 40+ 40+ 40+ 40, 0, x + 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(x, 40, x, 200);
    txLine(x - 40, 40, x - 40, 200);
    txLine(x - 40 - 40, 40, x - 40 - 40, 200);
    txLine(x - 40 - 40 - 40, 40, x - 40 - 40 - 40, 200);
    txLine(x - 40 - 40 - 40 - 40, 40, x - 40 - 40 - 40 - 40, 200);
    txLine(x - 40 - 40 - 40 - 40 - 40, 40, x - 40 - 40 - 40 - 40 - 40, 200);
    txLine(x - 40 - 40 - 40 - 40 - 40 - 40, 40, x - 40 - 40 - 40 - 40 - 40 - 40, 200);
    txLine(x - 40 - 40 - 40 - 40 - 40 - 40 - 40, 40, x - 40 - 40 - 40 - 40 - 40 - 40 - 40, 200);
    txLine(x - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40, 40, x - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40, 200);
    txLine(x - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40, 40, x - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40, 200);
    txLine(x - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40, 40, x - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40, 200);
    txLine(x - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40, 40, x - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40, 200);
    txLine(x - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40, 40, x - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40 - 40, 200);
}
void tomP1(int y, int x)
{
    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(160,160,160));
    POINT telo[] = {{x + 20, y + 30}, {x + 30, y + 30}, {x + 33, y + 50}, {x + 29, y + 70}, {x + 35, y + 95}, {x + 5, y + 95}, {x, y + 70}, {x + 7, y + 50}, {x + 11, y + 30},};
    txPolygon(telo, 9);

    txCircle(x + 25, y + 30, 20);

    txSetFillColor(RGB(255, 255, 255));
    txCircle(x + 20, y + 65, 10);

    txEllipse(x - 20, y + 60, x + 60, y + 115);

    txSetFillColor(RGB(160,160,160));
    POINT yxo1[3] = {{x + 5, y + 30}, {x + 8, y}, {x + 30, y + 30}};
    txPolygon(yxo1, 3);

    POINT yxo2[3] = {{x + 25, y + 30}, {x + 30, y}, {x + 45, y + 30}};
    txPolygon(yxo2, 3);
}

void tomP2(int y, int x)
{
    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(160,160,160));
    POINT telo[] = {{x + 20, y + 30}, {x + 30, y + 30}, {x + 33, y + 50}, {x + 29, y + 70}, {x + 35, y + 95}, {x + 5, y + 95}, {x, y + 70}, {x + 7, y + 50}, {x + 11, y + 30},};
    txPolygon(telo, 9);

    txCircle(x + 25, y + 30, 20);

    txSetFillColor(RGB(255, 255, 255));
    txCircle(x + 20, y + 65, 10);
    txCircle(x + 10, y + 110, 10);
    txCircle(x + 30, y + 60, 10);
    txCircle(x - 10, y + 70, 10);
    txEllipse(x - 15, y + 60, x + 55, y + 115);

    txSetFillColor(RGB(160,160,160));
    POINT yxo1[3] = {{x + 5, y + 30}, {x + 8, y}, {x + 30, y + 30}};
    txPolygon(yxo1, 3);

    POINT yxo2[3] = {{x + 25, y + 30}, {x + 30, y}, {x + 45, y + 30}};
    txPolygon(yxo2, 3);
}

void tree(int x, int y, int y2, int x2)
{
    txSetFillColor(TX_BROWN);
    POINT star[4] = {{x-20 + 600, y + 50}, {x + 20 + 600, y + 50}, {x2 + 20,y2}, {x2 - 20,y2}};
    txPolygon(star, 4);
    txSetFillColor(TX_GREEN);
    txCircle(x + 600, y, 100);




}

void tomP(int TomPY, int TomPX)
{
    tomP1(TomPY, TomPX);


}

void dp(int x, int y)
{
    txSetFillColor(TX_BROWN);
    txEllipse(x, y, x + 20, y + 10);
    txLine(x, y + 5, x - 15, y + 2);



}

void slep(int TomPX, int TomPY)
{
   txSleep(1);
   tomP2(TomPY, TomPX);
   txSleep(2);
}

int main()
{
    int TomPX = - 200;
    int TomPY = 300;
    int treeX = 0;
    int treeY = 0;
    int GerryX = 0;
    int GerryY = 380;
    int treeY2 = 400;
    int treeX2 = 600;
    int boom = 50;
    int zabX = 0;

    txCreateWindow (800, 600);

    //enter();
    fon_n(zabX);
    tomP(TomPY, TomPX);
    tree(treeX, treeY, treeY2, treeX2);

    while(TomPX < 540)
    {
        txBegin();
        fon_n(zabX);
        dp(GerryX, GerryY);
        tree(treeX, treeY, treeY2, treeX2);
        tomP(TomPY, TomPX);
        TomPX += 5;
        GerryX += 4;
        slep(TomPX, TomPY);
        txEnd();
    }

    while(treeX < 300)
    {
        txBegin();
        fon_n(zabX);
        dp(GerryX, GerryY);
        tree(treeX, treeY, treeY2, treeX2);
        tomP(TomPY, TomPX);
        slep(TomPX, TomPY);
        treeX += 2;
        treeY +=1;
        txEnd();
    }

    while(treeY2 > 0)
    {
        txBegin();
        fon_n(zabX);
        dp(GerryX, GerryY);
        tree(treeX, treeY, treeY2, treeX2);
        tomP(TomPY, TomPX);
        slep(TomPX, TomPY);
        treeX +=3;
        treeY2 -=3;
        treeY +=4;
        treeX2 +=2;
        TomPX +=2;
        TomPY -=3;
        txEnd();
    }

    while(boom < 900)
    {

        txSetFillColor(RGB(255, 36, 0));
        txCircle(850, 300, boom - 50);

        txSetFillColor(RGB(255, 255, 0));
        txCircle(850, 300, boom - 120);

        txSetFillColor(RGB(255, 36, 0));
        txCircle(850, 300, boom - 150);

        txSetFillColor(RGB(255, 255, 0));
        txCircle(850, 300, boom - 200);

        txSetFillColor(RGB(255, 36, 0));
        txCircle(850, 300, boom - 230);

        txSetFillColor(RGB(255, 255, 0));
        txCircle(850, 300, boom - 270);

        txSetFillColor(RGB(255, 36, 0));
        txCircle(850, 300, boom - 350);

        txSetFillColor(RGB(255, 255, 0));
        txCircle(850, 300, boom - 370);

        txSetFillColor(RGB(255, 36, 0));
        txCircle(850, 300, boom - 400);





        boom +=10;
        txSleep(2);
    }

    txSleep(1000);

    while(boom > 150)
    {
        fon_n(zabX);


        txSetFillColor(RGB(255, 36, 0));
        txCircle(850, 300, boom - 50);

        txSetFillColor(RGB(255, 255, 0));
        txCircle(850, 300, boom - 120);

        txSetFillColor(RGB(255, 36, 0));
        txCircle(850, 300, boom - 150);

        txSetFillColor(RGB(255, 255, 0));
        txCircle(850, 300, boom - 200);

        boom -=5;
        zabX +=5;
        txSleep(2);
    }

    fon_n(zabX);



    txTextCursor (false);
    return 0;
}

