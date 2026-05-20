#include "Usuario.h"

Usuario::Usuario(string nombre, int edad, int ID, int codigoUsuario, int librosPrestados, string rol) : Persona(nombre, edad, ID) {
    this->codigoUsuario = codigoUsuario;
    this->librosPrestados = librosPrestados;
    this->rol = rol;
}

int Usuario::getCodigoUsuario() const {
    return codigoUsuario;
}

int Usuario::getLibrosPrestados() const {
    return librosPrestados;
}

void Usuario::setCodigoUsuario(int codigoUsuario) {
    this->codigoUsuario = codigoUsuario;
}

void Usuario::setLibrosPrestados(int librosPrestados) {
    this->librosPrestados = librosPrestados;
}

string Usuario::mostrarRol(string rol) const {
    std::cout << rol << std::endl;
    return rol;
}

void Usuario::mostrarInformacion() const {
    
    std::cout << "-> [" << mostrarRol(rol) << "] Nombre: " << getNombre() << " | Edad: " << getEdad() << " | ID: " << getID() 
              << " | Codigo: " << getCodigoUsuario() << "\n" << "Cantidad de libros prestados: " << getLibrosPrestados() 
              << "\n" << std::endl;
}