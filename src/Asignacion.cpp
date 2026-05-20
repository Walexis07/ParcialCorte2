#include "Asignacion.h"

Asignacion::Asignacion(string codigoDeAsignacion, Usuario* usuarioAsignado, Bibliotecario* bibliotecarioAsignado, Libro* libroAsignado) {
    this->codigoDeAsignacion = codigoDeAsignacion;
    this->usuarioAsignado = usuarioAsignado;
    this->bibliotecarioAsignado = bibliotecarioAsignado;
    this->libroAsignado = libroAsignado;
}

Asignacion::Asignacion(string codigoDeAsignacion, string estadoDeAsignacion, Usuario* usuarioAsignado, Bibliotecario* bibliotecarioAsignado, Libro* libroAsignado) {
    this->codigoDeAsignacion = codigoDeAsignacion;
    this->estadoDeAsignacion = estadoDeAsignacion;
    this->usuarioAsignado = usuarioAsignado;
    this->bibliotecarioAsignado = bibliotecarioAsignado;
    this->libroAsignado = libroAsignado;
}

void Asignacion::setcodigoDeAsignacion(string codigoDeAsignacion) {
    this->codigoDeAsignacion = codigoDeAsignacion;
}

void Asignacion::setEstadoDeAsignacion(string estadoDeAsignacion) {
    this->estadoDeAsignacion = estadoDeAsignacion;
}

void Asignacion::setUsuarioAsignado(Usuario* usuarioAsignado) {
    this->usuarioAsignado = usuarioAsignado;
}

void Asignacion::setLibroAsignado(Libro* libroAsignado) {
    this->libroAsignado = libroAsignado;
}

void Asignacion::setBibliotecarioAsignado(Bibliotecario* bibliotecarioAsignado) {
    this->bibliotecarioAsignado = bibliotecarioAsignado;
}

string Asignacion::getCodigoAsignacion() const {
    return this->codigoDeAsignacion;
}

string Asignacion::getEstadoDeAsignacion() const {
    return this->estadoDeAsignacion;
}

Usuario* Asignacion::getUsuarioAsignado() const {
    return this->usuarioAsignado;
}

Libro* Asignacion::getLibroAsignado() const {
    return this->libroAsignado;
}

Bibliotecario* Asignacion::getBibliotecarioAsignado() const {
    return this->bibliotecarioAsignado;
}

void Asignacion::asignarLibroAEstudiante(Asignacion* nuevaAsignacion) {

    asignaciones.push_back(nuevaAsignacion);
    std::cout << "\t[Libro asignado con exito]\n" << std::endl;
}

void Asignacion::mostrarInformacion() const { 
    std::cout << "Asignacion [" << getEstadoDeAsignacion() << "] -> Usuario: " << getUsuarioAsignado()->getNombre() 
              << " | Codigo: " << getUsuarioAsignado()->getCodigoUsuario() << " | Libro: " << getLibroAsignado()->getTitulo()
              << " | Codigo: " << getLibroAsignado()->getCodigoLibro() << " | Bibliotecario Responsable: " 
              << getBibliotecarioAsignado()->getNombre() << " | Codigo: " << getBibliotecarioAsignado()->getCodigoEmpleado() 
              << "\n" << std::endl;
}