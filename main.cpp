#include <iostream>
#include "TXLib.h"
using namespace std;

void drawKomanda1(COLORREF color)
{
    txSetFillColour(color);
    txSetColour(color);

    txCircle(50, 250 , 20);
    txCircle(300, 225 , 20);
    txCircle(300, 275 , 20);
    txCircle(200, 285 , 20);
    txCircle(200, 215 , 20);
    txCircle(250, 70, 20);
    txCircle(250, 430, 20);
    txCircle(150, 120, 20);
    txCircle(150, 380, 20);
    txCircle(350, 150, 20);
    txCircle(350, 350, 20);
}

void drawKomanda2(COLORREF color)
{
    txSetFillColour(color);
    txSetColour(color);

    txCircle(450, 650 , 420);
    txCircle(700, 625 , 420);
    txCircle(700, 675 , 420);
    txCircle(700, 685 , 420);
    txCircle(700, 615 , 420);
    txCircle(650, 470, 420);
    txCircle(650, 730, 420);
    txCircle(550, 520, 420);
    txCircle(550, 780, 420);
    txCircle(750, 550, 420);
    txCircle(750, 750, 420);
}

int main()
    {

    char str[20];
    txCreateWindow(800, 500);
    cout << "Выберите команду\n" << endl;
    cin >> str;

    HDC background_FromTXLibHelp;

    if (strcmp(str, "1") == 0) {

        background_FromTXLibHelp = txLoadImage ("1.bmp");
        txBitBlt(txDC(), 0, 0, 800, 500, background_FromTXLibHelp, 0, 0);

        drawKomanda1(TX_RED);
        txSetFillColour(TX_WHITE);
        txSetColour(TX_WHITE);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(310, 100, 610, 50, "BAYERN MUNCHEN");
        txDeleteDC (background_FromTXLibHelp);
    }

    else if (strcmp(str, "2") == 0) {
        background_FromTXLibHelp = txLoadImage ("1.bmp");
        txBitBlt(txDC(), 0, 0, 800, 500, background_FromTXLibHelp, 0, 0);

        drawKomanda1(TX_YELLOW);
        txSetFillColour(TX_WHITE);
        txSetColour(TX_WHITE);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(310, 100, 610, 50, "BOR.DORTMUND");
        txDeleteDC (background_FromTXLibHelp);
     }
    else if (strcmp(str, "3") == 0) {

        background_FromTXLibHelp = txLoadImage ("1.bmp");
        txBitBlt(txDC(), 0, 0, 800, 500, background_FromTXLibHelp, 0, 0);

        drawKomanda2(TX_RED);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(550, 780, 420, 50, "TTT");
        txSetFillColour(TX_WHITE);
        txSetColour(TX_WHITE);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(310, 100, 610, 50, "BAYERN MUNCHEN 2");
        txDeleteDC (background_FromTXLibHelp);
    }

    else if (strcmp(str, "4") == 0) {
        background_FromTXLibHelp = txLoadImage ("1.bmp");
        txBitBlt(txDC(), 0, 0, 800, 500, background_FromTXLibHelp, 0, 0);

        drawKomanda2(TX_YELLOW);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(600, 615, 420, 50, "DDD");
        txSetFillColour(TX_WHITE);
        txSetColour(TX_WHITE);
        txSelectFont ("Comic Sans MS", 32);
        txDrawText(310, 100, 610, 50, "BOR.DORTMUND 2");
        txDeleteDC (background_FromTXLibHelp);

    } else if (strcmp(str, "2") == 0) {

        background_FromTXLibHelp = txLoadImage ("1.bmp");
        txBitBlt(txDC(), 0, 0, 800, 500, background_FromTXLibHelp, 0, 0);

        txDeleteDC (background_FromTXLibHelp);

    }

    return 0;
}
