#include "Persona.h"

Persona::Persona(string nombre, int edad, int ID) {
    this->nombre = nombre;
    this->edad = edad;
    this->ID = ID;
}

string Persona::getNombre() const {
    return nombre;
}

int Persona::getEdad() const {
    return edad;
}

int Persona::getID() const {
    return ID;
}

void Persona::setNombre(string nombre) {
    this->nombre = nombre;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::setID(int ID) {
    this->ID = ID;
}