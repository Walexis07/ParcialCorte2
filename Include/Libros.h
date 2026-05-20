#ifndef LIBROS _H

// Se definen los métodos y atributos para llevar a cabo el desarrollo del proyecto

#define LIBROS_H

// Declaraciones de métodos y atributos de la clase Libros

#include "Librerias.h"

/**
 * @class Libros
 * @brief Clase Libros que representa los libros en el sistema bibliotecario.
 * Esta clase es una clase base abstracta que define los atributos y métodos comunes a todos los tipos de libros.
 */

class Libros {
    private:
        string titulo;
        string autor;
        string disponible;
        string codigoLibro;

    public:        
        Libros(string titulo, string autor, string disponible,string codigoLibro);       // Constructor para inicializar los atributos de la clase Libros.
            
        virtual ~Libros() = default;                   // Destructor virtual para realizar polimorfismo.

        // Setters y getters para los atributos de la clase Libros.

        /**
         * @brief Establece el nombre que representa a una persona en el sistema bibliotecario.
         * @param titulo Variable nombre que se establecerá como atributo nombre.
         * @return No retorna nada.
         */
        void setTitulo(string titulo);

        /**
         * @brief Establece la edad que tiene una persona en el sistema bibliotecario.
         * @param autor Variable edad que se establecerá como atributo edad.
         * @return No retorna nada.
         */
        void setAutor(string autor);

        /**
         * @brief Establece el documento de identidad que representa a una persona en el sistema bibliotecario.
         * @param codigoLibro Variable documento de identidad que se establecerá como atributo ID.
         * @return No retorna nada.
         */
        void setCodigoLibro(string codigoLibro);

                /**
         * @brief Establece el documento de identidad que representa a una persona en el sistema bibliotecario.
         * @param codigoLibro Variable documento de identidad que se establecerá como atributo ID.
         * @return No retorna nada.
         */
        void setDisponible(string disponible);

        /**
         * @brief Obtiene el nombre que representa a una persona en el sistema bibliotecario.
         * @return El nombre de la persona.
         */        
        string getTitulo() const;

        /**
         * @brief Obtiene la edad que tiene una persona en el sistema bibliotecario.
         * @return La edad de la persona.
         */
        string getAutor() const;

        /**
         * @brief Obtiene el documento de identidad que representa a una persona en el sistema bibliotecario.
         * @return El documento de identidad de la persona.
         */
        string getDisponible() const;

        /**
         * @brief Obtiene el código del libro.
         * @return El código del libro  .
         */
        string getCodigoLibro() const;

        /**
         * @brief Método virtual puro para mostrar el rol de las clases hijas de Libros en el sistema bibliotecario.
         * @return El rol de la persona.
         */
        virtual string mostrarRol() const = 0;
        
        /**
         * @brief Método virtual puro para mostrar información de las clases hijas de Libros en el sistema bibliotecario.
         * @return No retorna nada.
         */
        virtual void mostrarInformacion() const = 0;
    };

#endif

// Fin de las declaraciones de librerias y elementos globales