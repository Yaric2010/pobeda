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
    txLine(40, 0, 40, 200);
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

}
void tomP(int y, int x)
{
    txSetFillColor(RGB(160,160,160));
    txCircle(x + 20, y + 30, 10);



}


int main()
{
    int TomPX = 0;
    int TomPY = 0;
    txCreateWindow (800, 600);
    enter();
    fon_n();
    tomP(TomPY, TomPX);


    txTextCursor (false);
    return 0;
}

