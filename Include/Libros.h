#ifndef LIBROS_H 
#define LIBROS_H

#include "Librerias.h"
#include <string>

using namespace std;

/**
 * @class Libros
 * @brief Clase Libros que representa los libros en el sistema bibliotecario.
 * Esta clase es una clase base abstracta que define los atributos y métodos comunes a todos los tipos de libros.
 */
class Libros {
    private:
        string titulo;
        string autor;
        string disponible; // Maneja "Disponible" o "No Disponible"
        string codigoLibro;

    public:        
        // Constructor para inicializar los atributos de la clase Libros.
        Libros(string titulo, string autor, string disponible, string codigoLibro);        

        /**
         * @brief Establece el título del libro.
         * @param titulo Cadena con el título.
         */
        void setTitulo(string titulo);

        /**
         * @brief Establece el autor del libro.
         * @param autor Cadena con el autor.
         */
        void setAutor(string autor);

        /**
         * @brief Establece el código identificador del libro.
         * @param codigoLibro Cadena con el código único.
         */
        void setCodigoLibro(string codigoLibro);

        /**
         * @brief Establece el estado de disponibilidad del libro ("Disponible" / "No Disponible").
         * @param disponible Cadena con el estado.
         */
        void setDisponible(string disponible);

        /**
         * @brief Obtiene el título del libro.
         * @return El título del libro.
         */        
        string getTitulo() const;

        /**
         * @brief Obtiene el autor del libro.
         * @return El autor del libro.
         */
        string getAutor() const;

        /**
         * @brief Obtiene el estado de disponibilidad.
         * @return "Disponible" o "No Disponible".
         */
        string getDisponible() const;

        /**
         * @brief Obtiene el código del libro.
         * @return El código del libro.
         */
        string getCodigoLibro() const;

        /**
         * @brief Cambia el estado a "No Disponible" si el libro está libre.
         * @return true si el préstamo se realizó, false si ya estaba ocupado.
         */
        bool prestarLibro();

        /**
         * @brief Cambia el estado del libro a "Disponible".
         */
        void devolverLibro();


        /**
         * @brief Método virtual puro para mostrar el rol de las clases hijas de Libros.
         */
        virtual void mostrarRol() const = 0;
        
        /**
         * @brief Método virtual puro para mostrar información de las clases hijas de Libros.
         */
        virtual void mostrarInformacion() const = 0;
};

#endif // LIBROS_H