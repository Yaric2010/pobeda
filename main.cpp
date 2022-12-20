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
    txTextOut(250, 30, "Учим основы С++, TX_lib");

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
    txTextOut(90, 30, "Для начала давайте скачаем библиотеку (Используйте двойные ковычки!):");
    txSelectFont("Comic Sans MS", 20);
    txSleep(1500);
    txSetColor(TX_GREEN);
    txTextOut(130, 100, "#include 'TXLib.h'");
    txSetColor(TX_BLACK);

    txSleep(7500);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "Теперь нам нужно создать фунцию main:");
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
    txTextOut(90, 30, "Это главная функция, все основные действия происходят в ней)");
    txSleep(4000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "Не забудьте скобочки! ()");

    txSleep(1500);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(189, 115, "()");





    txSleep(5000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "Теперь нам нужно открыть функцию main:");
    txSleep(4000);

    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "Это делается Фигурной скобочкой {:");
    txSleep(4000);

    txSleep(1500);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(130, 130, "{");



    txSleep(5000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "Пришло время сделать <<окно для рисования>>:");
    txSleep(4000);

    txSleep(3000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "Почти все команды TX_lib начинаются с tx....");
    txSleep(4000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "Команда txCreateWindow");

    txSleep(1500);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(150, 145, "txCreateWindow");

    txSleep(4000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "В скобочках указываем размер в пикселях, обычно это 800 на 600");

    txSleep(1500);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(268, 145, "(800, 600)");

    txSleep(4000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "Если программа окончена и после её нет скобок, в конце нужно ставить ;");

    txSleep(3000);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(342, 145, ";");

    txSleep(4000);



    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "Теперь выберем цвет обводки....");

    txSleep(2000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "...Используйте команду txSetColor();");

    txSleep(2000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "В скобках указываем цвет, например (TX_BLACK) или (TX_YELLOW)");

    txSleep(2000);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(150, 175, "txSetColor(TX_BLACK);");

    txSleep(4000);


    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "Для удобства я люблю отступать строчку)");

    txSleep(1500);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "Тепер пришло время научится рисовать прямоугольник");


    txSleep(1500);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "Используем txRectangle");

    txSleep(2000);

    txSetColor(TX_TRANSPARENT);
    txSetFillColor(RGB(240, 170, 140));
    txRectangle(0, 0, 1000, 100);

    txSelectFont("Comic Sans MS", 30);
    txTextOut(90, 30, "В скобках указываем кординаты правой верхней точки и левой нижней:");

    txSleep(2000);

    txSelectFont("Comic Sans MS", 20);
    txSetColor(TX_BLACK);
    txTextOut(150, 190, "txRectangle(0, 200, 800, 200);");

}





int main()
{
    int numy = 100;

    txCreateWindow (1000, 750);

    fon_zastavka(numy);


    txTextCursor (false);
    return 0;
}

