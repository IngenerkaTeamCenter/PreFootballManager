#include <iostream>
#include "TXLib.h"
#include "cstdlib"

using namespace std;

void Title ();
void Real (const char* schemaKomandy);
void BayernMunich (const char* schemaKomandy);
void Volga (const char* schemaKomandy);
void Real2 ();
void BayernMunich2 ();
void Volga2 ();
void Circle1 (const char* schemaKomandy);
void Circle2 ();

int main()
{
    txCreateWindow ( 1250, 600);

    Title ();

    return 0;
}


void Title ()
{
    char komanda1[20];
    char komanda2[20];
    char schema_komanda1[20];

    cout << "Команда (Real, Bavaria, Volga)" << endl;
    cin >> komanda1;
    cout << "Выберите противника (Real, Bavaria, Volga)" << endl;
    cin >> komanda2;
    cout << "Выберите схему(451, 433, 422)" << endl;
    cin >> schema_komanda1;

    if (strcmp(komanda1, komanda2) == 0)
    {
        system("cls");
        cout << "Одинаковые команды!" << endl;
        Title () ;
    }

    HDC FootballPole;
    FootballPole = txLoadImage ("FootballPole.bmp");
    txBitBlt (txDC(), 0, 0, 1000, 800, FootballPole, 0, 0);

    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txSelectFont ("Arial", 50, 0, FW_BOLD);

    cout << komanda1;

    if (strcmp(komanda1, "Real") == 0)
    {
        Real (schema_komanda1);
    }
    else if (strcmp(komanda1, "Bavaria") == 0)
    {
        BayernMunich (schema_komanda1);
    }
    else if (strcmp(komanda1, "Volga") == 0)
    {
        Volga (schema_komanda1);
    }


    if (strcmp(komanda2, "Real") == 0)
    {
        Real2 ();
    }
    else if (strcmp(komanda2, "Bavaria") == 0)
    {
        BayernMunich2 ();
    }
    else if (strcmp(komanda2, "Volga") == 0)
    {
        Volga2 ();
    }

    txDeleteDC (FootballPole);
    }

void Circle1 (const char* schemaKomandy)
{
    cout << schemaKomandy;
    if (strcmp(schemaKomandy, "451") == 0)
    {
        txCircle (125, 300, 20);
        txCircle (200, 130, 20);
        txCircle (200, 200, 20);
        txCircle (200, 430, 20);
        txCircle (300, 385, 20);
        txCircle (310, 460, 20);
        txCircle (385, 350, 20);
        txCircle (400, 200, 20);
        txCircle (450, 352, 20);
        txCircle (480, 250, 20);
    }
    else if (strcmp(schemaKomandy, "433") == 0)
    {
        txCircle (25, 300, 20);
        txCircle (200, 130, 20);
        txCircle (200, 200, 20);
        txCircle (200, 430, 20);
        txCircle (300, 385, 20);
        txCircle (310, 460, 20);
        txCircle (385, 350, 20);
        txCircle (400, 200, 20);
        txCircle (450, 352, 20);
        txCircle (480, 250, 20);
    }

    else if (strcmp(schemaKomandy, "422") == 0)
    {
        txCircle (25, 300, 20);
        txCircle (200, 130, 20);
        txCircle (200, 200, 20);
        txCircle (200, 430, 20);
        txCircle (300, 385, 20);
        txCircle (310, 460, 20);
        txCircle (385, 350, 20);
        txCircle (400, 200, 20);
        txCircle (450, 444, 20);
        txCircle (480, 250, 20);
    }
}

void Circle2 ()
{
    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);

    txCircle (800, 130, 20);
    txCircle (800, 230, 20);
    txCircle (900, 300, 20);
    txCircle (800, 430, 20);
    txCircle (700, 300, 20);
    txCircle (600, 350, 20);
    txCircle (600, 200, 20);
    txCircle (550, 400, 20);
    txCircle (590, 250, 20);
    txCircle (690, 460, 20);
}

void Real (const char* schemaKomandy)
{
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txTextOut (50, 550, "Real Madrid");

    Circle1 (schemaKomandy);

    txSelectFont ("Arial", 20, 0, FW_BOLD);

    txTextOut  (1000, 100, "Mondalnio");
    txTextOut  (1000, 150, "Bermena");
    txTextOut  (1000, 200, "Kalebrate");
    txTextOut  (1000, 250, "Lordis");
    txTextOut  (1000, 300, "Koropos");
    txTextOut  (1000, 350, "Dilardos");
    txTextOut  (1000, 400, "Virgago");
    txTextOut  (1000, 450, "Girogia");
    txTextOut  (1000, 500, "Plop");
    txTextOut  (1000, 550, "Poplo");
    txTextOut  (1000, 575, "Poplita");
}

void Real2 ()
{
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txTextOut (550, 550, "Real Madrid");
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    Circle2 ();
}

void BayernMunich (const char* schemaKomandy)
{
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txTextOut (50, 550, "BayernMunich");
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);

    Circle1 (schemaKomandy);

    txSelectFont ("Arial", 20, 0, FW_BOLD);
    txTextOut  (1000, 100, "Lewandowski");
    txTextOut  (1010, 150, "Riberg");
    txTextOut  (1020, 200, "Muller");
    txTextOut  (1000, 250, "Robben");
    txTextOut  (1010, 300, "Thiago");
    txTextOut  (1020, 350, "Morostop");
    txTextOut  (1000, 400, "Lopsap");
    txTextOut  (1010, 450, "Kimmicn");
    txTextOut  (1020, 500, "Boateng");
    txTextOut  (1000, 550, "Hummeis");
    txTextOut  (1010, 575, "Neuer");
}

void BayernMunich2 ()
{
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txTextOut (550, 550, "BayernMunich");
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    Circle2 ();
}

void Volga (const char* schemaKomandy)
{
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txTextOut (50, 550, "Volga");
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);

    Circle1(schemaKomandy);

    txSelectFont ("Arial", 20, 0, FW_BOLD);
    txTextOut  (1000, 100, "Герасим Арбт");
    txTextOut  (1000, 150, "Пасько Артём");
    txTextOut  (1000, 200, "Полянин Дмитрий");
    txTextOut  (1000, 250, "Ытвувтутву Оуау");
    txTextOut  (1000, 300, "Шурыгина Диана");
    txTextOut  (1000, 350, "Шеляков Алексей");
    txTextOut  (1000, 400, "Леандро да Силва");
    txTextOut  (1000, 450, "Петров Илья");
    txTextOut  (1000, 500, "Саркисов Артур");
    txTextOut  (1000, 550, "Суругукин Илья");
    txTextOut  (1000, 575, "Вдовиченко Николай");
}

void Volga2 ()
{
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txTextOut (550, 550, "Volga");
    Circle2 ();
}
