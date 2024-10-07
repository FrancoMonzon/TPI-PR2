#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

using namespace std;

#include <string>

#include "datos.h"

class Cliente : public Datos{

public:

    Cliente(string, int, int, int, string);

    string Reservar();

    string Calificar();

    string DarDeBaja();

};

#endif // CLIENTE_H_INCLUDED
