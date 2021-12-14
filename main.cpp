#include <iostream>
#include "GeomLib.h"

using namespace std;
using namespace GeomLib;

int main()
{
    tObdelnik o1;
    o1.a = 6;
    o1.b = 3;
    o1.isObsahCalculated = false;
    o1.isObvodCalculated = false;


    tKruh k1;
    k1.polomer = 10;
    k1.isObsahCalculated = false;
    k1.isObvodCalculated = false;

    double ObdelnikVypocitejObsah = VypocitejObsah(o1.a, o1.b);
    cout <<"Obsah obdelniku je: " << ObdelnikVypocitejObsah << endl;

    VypocitejObsah(o1);

    double KruhVypocitejObsah = VypocitejObsah(k1.polomer);
    cout <<"Obsah kruhu je: " << KruhVypocitejObsah << endl;

    VypocitejObsah(k1);

    double ObdelnikVypocitejObvod = VypocitejObvod(o1.a, o1.b);
    cout <<"Obvod obdelniku je: " << ObdelnikVypocitejObvod << endl;

    VypocitejObvod(o1);

    double KruhVypocitejObvod = VypocitejObvod(k1.polomer);
    cout <<"Obvod kruhu je: " << KruhVypocitejObvod << endl;

    VypocitejObvod(k1);

    printObjektu(o1);
    printObjektu(k1);

    cout <<"\nDvojnasobne zvetseni objektu:" << endl;
    ZvetseniObjektu(o1);
    ZvetseniObjektu(k1);
    printObjektu(o1);
    printObjektu(k1);

    cout <<"\nPetinasobne zvetseni objektu:" << endl;
    ZvetseniObjektu(o1,5);
    ZvetseniObjektu(k1,5);
    printObjektu(o1);
    printObjektu(k1);

    return 0;
}
