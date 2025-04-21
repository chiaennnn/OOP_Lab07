# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include <iostream>
# include <iomanip>
# include <cmath>
# include "Cylinder.h"

using namespace std ;

double Cylinder :: SurfaceArea(){ 
    double circle = 2*(radius*radius*M_PI) ;
    double rec = height*(2*radius*M_PI) ;
    return (circle+rec) ;
}

double Cylinder :: Volume(){

    return (radius*radius*M_PI*height) ;
}

double Cylinder :: Circumference(){

    return (2*radius*M_PI) ;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height ;
    return in ;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: " << fixed << setprecision(3) << cldr.Circumference() << endl ;
    out << "SurfaceArea: " << fixed << setprecision(3) << cldr.SurfaceArea() << endl ;
    out << "Volume: " << fixed << setprecision(3) << cldr.Volume() << endl ;
    return out;
}

# endif
