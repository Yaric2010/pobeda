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

void fon_n()
{
    txSetFillColor(TX_GREEN);
    txSetColor(TX_TRANSPARENT);
    txRectangle(0, 199, 800, 600);
    txSetFillColor(TX_WHITE);
    txRectangle(0, 0, 800, 200);
    txSetColor(TX_BLACK);
    txLine(40, 0, 40, 200);   //�����, ��� �����
    txLine(80, 0, 80, 200);
    txLine(120, 0, 120, 200);
    txLine(160, 0, 160, 200);
    txLine(200, 0, 200, 200);
    txLine(240, 0, 240, 200);
    txLine(240 + 40, 0, 240 + 40, 200);
    txLine(240 + 40+ 40, 0, 240 + 40+ 40, 200);
    txLine(240 + 40+ 40+ 40, 0, 240 + 40+ 40+ 40, 200);
    txLine(240 + 40+ 40+ 40+ 40, 0, 240 + 40+ 40+ 40+ 40, 200);
    txLine(240 + 40+ 40+ 40+ 40+ 40, 0, 240 + 40+ 40+ 40+ 40+ 40, 200);
    txLine(240 + 40+ 40+ 40+ 40+ 40+ 40, 0, 240 + 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(240 + 40+ 40+ 40+ 40+ 40+ 40+ 40, 0, 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 0, 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40 + 40, 0, 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(240 + 40+ 40+ 40+ 40+ 40+ 40+ 40 + 40+ 40+ 40, 0, 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40 + 40+ 40+ 40, 0, 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40 + 40+ 40+ 40+ 40, 0, 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(240 + 40+ 40+ 40+ 40+ 40+ 40+ 40 + 40+ 40+ 40+ 40+ 40+ 40, 0, 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);
    txLine(240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40 + 40+ 40+ 40+ 40+ 40+ 40, 0, 240 + 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40+ 40, 200);

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

void tree(int x, int y)
{
    txSetFillColor(TX_BROWN);
    POINT star[4] = {{x-20 + 600, y + 50}, {x + 20 + 600, y + 50}, {600 + 20,400}, {600 - 20,400}};
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

    txCreateWindow (800, 600);

    //enter();
    fon_n();
    tomP(TomPY, TomPX);
    tree(treeX, treeY);

    while(TomPX < 535)
    {
        txBegin();
        fon_n();
        dp(GerryX, GerryY);
        tree(treeX, treeY);
        tomP(TomPY, TomPX);
        TomPX += 5;
        GerryX += 4;
        slep(TomPX, TomPY);
        txEnd();
    }

    while(treeX < 300)
    {
        txBegin();
        fon_n();
        dp(GerryX, GerryY);
        tree(treeX, treeY);
        tomP(TomPY, TomPX);
        slep(TomPX, TomPY);
        treeX += 3;
        treeY += 2;
        txEnd();
    }
    txTextCursor (false);
    return 0;
}

