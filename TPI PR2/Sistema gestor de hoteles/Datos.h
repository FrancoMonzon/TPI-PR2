#ifndef DATOS_H_INCLUDED
#define DATOS_H_INCLUDED

#include <iostream>

#include <string>

using namespace std;

class Datos{

private:

    string nombre;

    int dni;

    int telefono;

    int id;

    string contrasenia;

public:

    Datos(string, int, int, int, string);

    ///setters y getters correspondientes a cada atributo

    void setNombre(string);
    string getNombre();


    void setDni(int);
    int getDni();


    void setTelefono(int);
    int getTelefono();


    void setId(int);
    int getId();


    void setContrasenia(string);
    string getContrasenia();

};

#endif // DATOS_H_INCLUDED
