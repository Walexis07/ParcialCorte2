#include "Libros.h"

/**
 * @brief Constructor de la clase Libros.
 * Utiliza una lista de inicialización de miembros, que es más eficiente 
 * ya que asigna los valores al mismo tiempo que se crean los atributos.
 */
Libros::Libros(string titulo, string autor, string disponible, string codigoLibro)
    : titulo(titulo), autor(autor), disponible(disponible), codigoLibro(codigoLibro) {}

void Libros::setTitulo(string titulo) {
    this->titulo = titulo;
}

void Libros::setAutor(string autor) {
    this->autor = autor;
}

void Libros::setCodigoLibro(string codigoLibro) {
    this->codigoLibro = codigoLibro;
}

void Libros::setDisponible(string disponible) {
    this->disponible = disponible;
}

string Libros::getTitulo() const {
    return titulo;
}

string Libros::getAutor() const {
    return autor;
}

string Libros::getDisponible() const {
    return disponible;
}

string Libros::getCodigoLibro() const {
    return codigoLibro;
}