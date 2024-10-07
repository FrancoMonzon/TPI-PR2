#include <iostream>

#include <string>

#include "Duenio.h"

#include "Hoteles.h"

Hotel::Hotel(string _nombre, int _dni, int _telefono, int _id, string _contrasenia) : Duenio(_nombre, _dni, _telefono, _id, _contrasenia){

}

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

    float Precios();

    string Actividades();

    string RegistroEmpleados();

    string MenuComidas();
