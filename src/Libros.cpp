#include "Libro.h"

Libro::Libro(string titulo, string autor, string disponible, string codigoLibro){
    this->titulo = titulo;
    this->autor = autor;
    this->disponible = disponible;
    this->codigoLibro = codigoLibro;
}

void Libro::setTitulo(string titulo) {
    this->titulo = titulo;
}

void Libro::setAutor(string autor) {
    this->autor = autor;
}

void Libro::setCodigoLibro(string codigoLibro) {
    this->codigoLibro = codigoLibro;
}

void Libro::setDisponible(string disponible) {
    this->disponible = disponible;
}

string Libro::getTitulo() const {
    return titulo;
}

string Libro::getAutor() const {
    return autor;
}

string Libro::getDisponible() const {
    return disponible;
}

string Libro::getCodigoLibro() const {
    return codigoLibro;
}