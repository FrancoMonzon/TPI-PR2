#ifndef DUENIO_H_INCLUDED
#define DUENIO_H_INCLUDED

using namespace std;

#include <string>

#include "datos.h"

class Duenio : public Datos{

public:

    Duenio(string, int, int, int, string);

    float Precios();

    string Actividades();

    string RegistroEmpleados();

    string MenuComidas();

};

#endif // DUENIO_H_INCLUDED
