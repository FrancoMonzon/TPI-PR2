#ifndef HOTELES_H_INCLUDED
#define HOTELES_H_INCLUDED

#include <iostream>

#include "Duenio.h"

class Hotel : public Duenio{

public:

    Hotel(string, int, int, int, string);

    string NombreHotel();

    string Calidad();

    string Cochera();

    int Habitaciones();

    int Pisos();

    string Piscina();

    string Quincho();

    string Pais();

    string Provincia();

    string CodigoPostal();

    string NombreDuenio();

    string DniDuenio();

    int CelularDuenio();

};

#endif // HOTELES_H_INCLUDED
