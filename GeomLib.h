#ifndef GEOMLIB_H
#define GEOMLIB_H

namespace GeomLib
{
    typedef struct
    {
        double a;
        double b;
        double obsah;
        bool isObsahCalculated;
        double obvod;
        bool isObvodCalculated;

    }tObdelnik;

    typedef struct
    {
        double polomer;
        double obsah;
        bool isObsahCalculated;
        double obvod;
        bool isObvodCalculated;

    }tKruh;

    double VypocitejObsah(double a, double b);
    void VypocitejObsah(tObdelnik &ob);

    double VypocitejObsah(double polomer);
    void VypocitejObsah(tKruh &kr);

    double VypocitejObvod(double a, double b);
    void VypocitejObvod(tObdelnik &ob);

    double VypocitejObvod(double polomer);
    void VypocitejObvod(tKruh &kr);

    void ZvetseniObjektu(tObdelnik &ob, double zvetseni=2);
    void ZvetseniObjektu(tKruh &kr, double zvetseni=2);

    void printObjektu(const tObdelnik &ob);
    void printObjektu(const tKruh &kr);
}


#endif // GEOMLIB_H
