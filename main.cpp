#include "TXLib.h"
void fon_stroka(int numy)
{
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 750);

    txSetFillColor(TX_WHITE);
    txRectangle(100, 100, 900, 650);


    txSetColor(TX_BLACK);
    txSelectFont("Comic Sans MS", 20);
    txTextOut(105, numy, "1");
    numy +=15;
    txTextOut(105, numy, "2");
    numy +=15;
    txTextOut(105, numy, "3");
    numy +=15;
    txTextOut(105, numy, "4");
    numy +=15;
    txTextOut(105, numy, "5");
    numy +=15;
    txTextOut(105, numy, "6");
    numy +=15;
    txTextOut(105, numy, "7");
    numy +=15;
    txTextOut(105, numy, "8");
    numy +=15;
    txTextOut(105, numy, "9");
    numy +=15;
    txTextOut(105, numy, "10");
    numy +=15;
    txTextOut(105, numy, "11");
    numy +=15;
    txTextOut(105, numy, "12");
    numy +=15;
    txTextOut(105, numy, "13");
    numy +=15;
    txTextOut(105, numy, "14");
    numy +=15;
    txTextOut(105, numy, "15");
    numy +=15;
    txTextOut(105, numy, "16");
    numy +=15;
    txTextOut(105, numy, "17");
    numy +=15;
    txTextOut(105, numy, "18");
    numy +=15;
    txTextOut(105, numy, "19");
    numy +=15;
    txTextOut(105, numy, "20");
    numy +=15;
    txTextOut(105, numy, "21");
    numy +=15;
    txTextOut(105, numy, "22");
    numy +=15;
    txTextOut(105, numy, "23");
    numy +=15;
    txTextOut(105, numy, "24");
    numy +=15;
    txTextOut(105, numy, "25");
    numy +=15;
    txTextOut(105, numy, "26");
    numy +=15;
    txTextOut(105, numy, "27");
    numy +=15;
    txTextOut(105, numy, "28");
    numy +=15;
    txTextOut(105, numy, "29");
    numy +=15;
    txTextOut(105, numy, "30");
    numy +=15;
    txTextOut(105, numy, "31");
    numy +=15;
    txTextOut(105, numy, "32");
    numy +=15;
    txTextOut(105, numy, "33");
    numy +=15;
    txTextOut(105, numy, "34");
    numy +=15;
    txTextOut(105, numy, "35");
    numy +=15;
    txTextOut(105, numy, "36");




}




void fon_zastavka(int numy)
{

    fon_stroka(numy);

    txSetColor(TX_BLACK);
    txSelectFont("Comic Sans MS", 70);
    txTextOut(250, 30, "???? ?????? ?++, TX_lib");

    txSelectFont("Comic Sans MS", 20);
    txTextOut(130, 100, "#include 'TXLib.h'");
    txTextOut(130, 115, "int main()");
    txTextOut(130, 130, "{");
    txTextOut(160, 145, "txCreateWindow(800, 600);");
    txTextOut(160, 160, "txSetFillColor(TX_GREEN);");
    txTextOut(160, 175, "txRectangle(0, 200, 600, 200);");
    txTextOut(160, 190, "txSetFillColor(TX_BLUE);");
    txTextOut(160, 205, "txRectangle(0, 0, 600, 400);");
    txTextOut(160, 220, "txSetFillColor(TX_YELLOW);");
    txTextOut(160, 235, "txCircle(300, 150, 35);");
    txTextOut(130, 250, "}");

    txSleep(8000);
    fon_stroka(numy);
    txSetColor(TX_BLACK);
    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "??? ?????? ??????? ??????? ?????????? (??????????? ??????? ???????!):");
    txSelectFont("Comic Sans MS", 20);
    txSleep(1500);
    txSetColor(TX_GREEN);
    txTextOut(130, 100, "#include 'TXLib.h'");
    txSetColor(TX_BLACK);

    for (int done = 0; done <= 5; done++)
    {
        char title [1024] = "";
        sprintf (title, "%s - [%-10.*s] %d%%", txGetModuleFileName (false), done/10, "||||||||||", done);

        SetWindowText (txWindow(), title);
        SetWindowText (Win32::GetConsoleWindow(), title);

        txSleep (200);
    }

    txSleep(7500);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "?????? ??? ????? ??????? ?????? main:");
    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLUE);
    txTextOut(130, 115, "int");
    txSleep(900);
    txSetColor(TX_BLACK);
    txTextOut(155, 115, "main");

    txSleep(5000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "??? ??????? ???????, ??? ???????? ???????? ?????????? ? ???)");
    txSleep(4000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "?? ???????? ????????! ()");

    txSleep(1500);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(189, 115, "()");

    for (int done = 5; done <= 12; done++)
    {
        char title [1024] = "";
        sprintf (title, "%s - [%-10.*s] %d%%", txGetModuleFileName (false), done/10, "||||||||||", done);

        SetWindowText (txWindow(), title);
        SetWindowText (Win32::GetConsoleWindow(), title);

        txSleep (200);
    }



    txSleep(5000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "?????? ??? ????? ??????? ??????? main:");
    txSleep(4000);

    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "??? ???????? ???????? ????????? {:");
    txSleep(4000);

    txSleep(1500);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(130, 130, "{");
    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(130, 280 + 45 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15, "}");
txSleep(1000);
    for (int done = 12; done <= 15; done++)
    {
        char title [1024] = "";
        sprintf (title, "%s - [%-10.*s] %d%%", txGetModuleFileName (false), done/10, "||||||||||", done);

        SetWindowText (txWindow(), title);
        SetWindowText (Win32::GetConsoleWindow(), title);

        txSleep (200);
    }

    txSleep(5000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "?????? ????? ??????? <<???? ??? ?????????>>:");
    txSleep(4000);

    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "????? ??? ??????? TX_lib ?????????? ? tx....");
    txSleep(4000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "??????? txCreateWindow");

    txSleep(1500);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(150, 145, "txCreateWindow");

    txSleep(4000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "? ????????? ????????? ?????? ? ????????, ?????? ??? 800 ?? 600");

    txSleep(1500);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(268, 145, "(800, 600)");

    txSleep(4000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "???? ????????? ???????? ? ????? ?? ??? ??????, ? ????? ????? ??????? ;");

    txSleep(3000);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(342, 145, ";");
txSleep(1000);
    for (int done = 15; done <= 25; done++)
    {
        char title [1024] = "";
        sprintf (title, "%s - [%-10.*s] %d%%", txGetModuleFileName (false), done/10, "||||||||||", done);

        SetWindowText (txWindow(), title);
        SetWindowText (Win32::GetConsoleWindow(), title);

        txSleep (200);
    }

    txSleep(4000);



    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "?????? ??????? ???? ???????....");

    txSleep(2000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "...??????????? ??????? txSetColor();");

    txSleep(2000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "? ??????? ????????? ????, ???????? (TX_BLACK) ??? (TX_YELLOW)");

    txSleep(2000);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(150, 175, "txSetColor(TX_BLACK);");
txSleep(1000);
    for (int done = 25; done <= 30; done++)
    {
        char title [1024] = "";
        sprintf (title, "%s - [%-10.*s] %d%%", txGetModuleFileName (false), done/10, "||||||||||", done);

        SetWindowText (txWindow(), title);
        SetWindowText (Win32::GetConsoleWindow(), title);

        txSleep (200);
    }

    txSleep(4000);


    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "??? ???????? ? ????? ????????? ???????)");

    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "?????? ???????...");


    txSleep(2000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "?????? ?? ??????? ?????? ? Fill = txSetFillColor();");


    txSleep(2500);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(150, 190, "txSetFillColor(TX_GREEN);");

    txSleep(1000);

    for (int done = 30; done <= 35; done++)
    {
        char title [1024] = "";
        sprintf (title, "%s - [%-10.*s] %d%%", txGetModuleFileName (false), done/10, "||||||||||", done);

        SetWindowText (txWindow(), title);
        SetWindowText (Win32::GetConsoleWindow(), title);

        txSleep (200);
    }

    txSleep(3000);


    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "????? ?????? ????? ???????? ???????? ?????????????");


    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "?????????? txRectangle");

    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "? ??????? ????????? ????????? ?????? ??????? ????? ? ????? ??????:");

    txSleep(3000);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(150, 205, "txRectangle(0, 400, 800, 600);");

    txSleep(1000);
    for (int done = 35; done <= 42; done++)
    {
        char title [1024] = "";
        sprintf (title, "%s - [%-10.*s] %d%%", txGetModuleFileName (false), done/10, "||||||||||", done);

        SetWindowText (txWindow(), title);
        SetWindowText (Win32::GetConsoleWindow(), title);

        txSleep (200);
    }

    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "?????? ??????? ????????? ??? ? ??? ??????????....");

    txSleep(2000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "...???????? F5");

    txSleep(2000);


    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txRectangle(600, 200, 800, 310);

    txSetFillColor(TX_GREEN);
    txRectangle(600, 275, 800, 310);


    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "???????! ???????? f ??? ???????? ????.");

    txSleep(1000);

    txSetFillColor(TX_WHITE);
    txSetColor(TX_WHITE);
    txRectangle(600, 200, 800, 310);

    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "?????????? ? ????, ????? ?? ??? ????????????? ??? ??? ??????????...");


    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "???? ?? ???, ????????:");

    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "???????? ????? ????(txSetFillColor();) ? ?????? ???????(txRectangle();)");

    txSleep(3000);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(150, 235, "txSetFillColor(TX_BLUE);");

    txSleep(1500);

    txTextOut(150, 250, "txRectangle(0, 0, 800, 400);");

    txSleep(1000);
    for (int done = 42; done <= 55; done++)
    {
        char title [1024] = "";
        sprintf (title, "%s - [%-10.*s] %d%%", txGetModuleFileName (false), done/10, "||||||||||", done);

        SetWindowText (txWindow(), title);
        SetWindowText (Win32::GetConsoleWindow(), title);

        txSleep (200);
    }

    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "? ??? ?? ?????? ????? ?? ???????? ??????....");

    txSleep(2000);


    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "??????? ???????? ???!");

    txSleep(2000);


    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "Circle - ??? ??????? ??? ?????");

    txSleep(2000);


    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "txCircle() - ? ??????? ????????? x,y, ? ????? ??????? ?????");

    txSleep(4000);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(150, 295, "txCircle(100, 100, 25);");

    txSleep(2000);


    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "??????? ?? ?????? ??????? ????...");

    txSleep(2000);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(150, 280, "txSetFillColor(TX_YELLOW);");

    txSleep(1000);
    for (int done = 55; done <= 63; done++)
    {
        char title [1024] = "";
        sprintf (title, "%s - [%-10.*s] %d%%", txGetModuleFileName (false), done/10, "||||||||||", done);

        SetWindowText (txWindow(), title);
        SetWindowText (Win32::GetConsoleWindow(), title);

        txSleep (200);
    }

    txSleep(2000);


    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "? ?? ?????? ?????-?????? ????? ?????? ?????????????");

    txSleep(2000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "??? ??????? ?? ??? ??????????!");

    txSleep(2000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "??????????? while()");

    txSleep(2000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "?????????? ??? ??????:");

    txSleep(2000);

    fon_stroka(numy);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(150, 280 + 45 + 15, "txCircle(100, 100, 25);");
    txTextOut(150, 280 + 45, "txSetFillColor(TX_YELLOW);");
    txTextOut(150, 205 + 45, "txRectangle(0, 0, 800, 400)");
    txTextOut(150, 235 + 45, "txSetFillColor(TX_BLUE);");
    txTextOut(150, 235 + 60, "txRectangle(0, 400, 800, 600)");
    txTextOut(130, 280 + 45 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15 + 15, "}");
    txTextOut(150, 190 + 45, "txSetFillColor(TX_GREEN);");
    txTextOut(150, 175 + 45, "txSetColor(TX_BLACK);");
    txTextOut(130, 115, "int main()");
    txTextOut(130, 130, "{");
    txTextOut(130, 100, "#include 'TXLib.h'");
    txTextOut(150, 145, "txCreateWindow(800, 600);");
    txSleep(2000);
    txTextOut(150, 175, "while");

    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "????????? ??????? while");

    txSleep(3000);
    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);

    txTextOut(150, 190, "{");
    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "?????? ???????? ?????????? Xsun");

    txSleep(3000);
    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(150, 160, "int Xsun = 800;");
    txSleep(3000);
    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "????????? ? ??????? ?? ??? ???? Xsun > 100 - ???????? ? ??????? ????? ???????????");

    txSleep(3000);
    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(185, 175, "(Xsun > 100)");

    txSleep(3000);
    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "???????! ?????? ??????? ????? ?????????? Xsun ???????????:");

    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "Xsun -=1;");

    txSleep(3000);
    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(150, 295 + 45 + 15, "Xsun -=1;");

    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "? ??????? ???????? ? ????????? ?????-??????...");

    txSleep(3000);
    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(150, 295 + 45 + 30, "txSleep(5);");

    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "And ????????? ??????? while()");

    txSleep(3000);
txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(150, 295 + 45 + 45, "}");

    txSleep(1000);
    for (int done = 63; done <= 80; done++)
    {
        char title [1024] = "";
        sprintf (title, "%s - [%-10.*s] %d%%", txGetModuleFileName (false), done/10, "||||||||||", done);

        SetWindowText (txWindow(), title);
        SetWindowText (Win32::GetConsoleWindow(), title);

        txSleep (100);
    }

    txSleep(2000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "???????? ???????? ????????? <<X>> ? txCircle");

    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "??? ????? ?????? 100 ????????? ???? ?????????? Xsun");

    txSleep(3000);

    txSetFillColor(TX_WHITE);
    txSetColor(TX_WHITE);
    txRectangle(150, 280 + 45 + 14, 150 + 240, 280 + 45 + 15 + 16);
    txSetColor(TX_BLACK);
    txSelectFont("Comic Sans MS", 20);
    txTextOut(150, 280 + 45 + 15, "txCircle(Xsun, 100, 25);");

}





int main()
{
    int numy = 100;

    txCreateWindow (1000, 750);

    fon_zastavka(numy);



    txTextCursor (false);
    return 0;
}

