#include "Datos.h"

#include <string>

///constructor

Datos::Datos(string _nombre, int _dni, int _telefono, int _id, string _contrasenia){

    nombre = _nombre;

    dni = _dni;

    telefono = _telefono;

    id = _id;

    contrasenia = _contrasenia;

    }


    ///setters y getters de nombre

    void Datos::setNombre(string _nombre){

        nombre = _nombre;

    }

   string Datos::getNombre(){

        return nombre;

    }

    ///setters y getters de dni

    void Datos::setDni(int _dni){

        dni = _dni;

    }

    int Datos::getDni(){

        return dni;

    }


    ///setters y getters de telefono

    void Datos::setTelefono(int _telefono){

        telefono = _telefono;

    }
    int Datos::getTelefono(){

        return telefono;

    }


    ///setters y getters de id

    void Datos::setId(int _id){

        id = _id;

    }

    int Datos::getId(){

        return id;

    }


    ///setters y getters de contraseña

    void Datos::setContrasenia(string _contrasenia){

        contrasenia = _contrasenia;

    }

    string Datos::getContrasenia(){

        return contrasenia;

    }


