#include "GeomLib.h"
#include "cmath"
#include <iostream>

using namespace std;

double GeomLib::VypocitejObsah(double a, double b)
{
    double vysledek = a * b;
    return vysledek;
}

void GeomLib::VypocitejObsah(GeomLib::tObdelnik &ob)
{
    ob.obsah = VypocitejObsah(ob.a, ob.b);
    ob.isObsahCalculated = true;
}

double GeomLib::VypocitejObsah(double polomer)
{
    double vysledek = M_PI * pow(polomer, 2);
    return vysledek;
}

void GeomLib::VypocitejObsah(GeomLib::tKruh &kr)
{
    kr.obsah = VypocitejObsah(kr.polomer);
    kr.isObsahCalculated = true;
}

double GeomLib::VypocitejObvod(double a, double b)
{
    double vysledek = 2 * (a + b);
    return vysledek;
}

void GeomLib::VypocitejObvod(GeomLib::tObdelnik &ob)
{
    ob.obvod = VypocitejObvod(ob.a, ob.b);
    ob.isObvodCalculated = true;
}

double GeomLib::VypocitejObvod(double polomer)
{
    double vysledek = 2 * M_PI * polomer;
    return vysledek;
}

void GeomLib::VypocitejObvod(GeomLib::tKruh &kr)
{
    kr.obvod = VypocitejObvod(kr.polomer);
    kr.isObvodCalculated = true;
}

void GeomLib::ZvetseniObjektu(GeomLib::tObdelnik &ob, double zvetseni)
{
    ob.a *= zvetseni;
    ob.b *= zvetseni;
    ob.isObsahCalculated = false;
    ob.isObvodCalculated = false;
}

void GeomLib::ZvetseniObjektu(GeomLib::tKruh &kr, double zvetseni)
{
    kr.polomer *= zvetseni;
    kr.isObsahCalculated = false;
    kr.isObvodCalculated = false;
}

void GeomLib::printObjektu(const GeomLib::tObdelnik &ob)
{
    cout <<"-----------------------------" << endl;
    cout <<"Parametry obdelniku: " << endl;
    cout <<"Strana A je rovna: " << ob.a << endl;
    cout <<"Strana B je rovna: " << ob.b << endl;

    if(ob.isObsahCalculated == true)
    {
        cout <<"Obsah obdelniku je: " <<ob.obsah << endl;
    }
    if(ob.isObvodCalculated == true)
    {
        cout <<"Obvod obdelniku je: " <<ob.obvod << endl;
    }
    cout <<"-----------------------------" << endl;
}

void GeomLib::printObjektu(const GeomLib::tKruh &kr)
{
    cout <<"Parametry kruhu: " << endl;
    cout <<"Polomer kruhu je: " << kr.polomer << endl;

    if(kr.isObsahCalculated == true)
    {
        cout <<"Obsah kruhu je: " <<kr.obsah << endl;
    }
    if(kr.isObvodCalculated == true)
    {
        cout <<"Obvod kruhu je: " <<kr.obvod << endl;
    }
    cout <<"-----------------------------" << endl;
}
