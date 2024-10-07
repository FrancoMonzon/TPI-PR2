#include <iostream>

#include <string>

#include "Datos.h"

#include "Cliente.h"

Cliente::Cliente(string _nombre, int _dni, int _telefono, int _id, string _contrasenia) : Datos(_nombre, _dni, _telefono, _id, _contrasenia){

    }

    ///Metodos y posibles mensajes de ejemplo

    string Cliente::Reservar(){

        return "Reserva realizada ";

    }

    string Cliente::Calificar(){

        return "Calificacion realizada ";

    }

    string Cliente::DarDeBaja(){

        return "Cliente dado de baja ";

    }
