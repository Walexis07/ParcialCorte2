#ifndef ASIGNACION_H

// Se definen los métodos y atributos para llevar a cabo el desarrollo del proyecto

#define ASIGNACION_H

// Declaraciones de métodos y atributos de la clase Asignacion

#include "Librerias.h"
#include "Usuario.h"
#include "Bibliotecario.h"
#include "Libro.h"

/**
 * @class Asignacion
 * @brief Clase Asignacion que representa la asignación de libros a usuarios en el sistema bibliotecario.
 * Esta clase es una clase base abstracta que define los atributos y métodos comunes a todos los tipos de libros.
 */
class Asignacion {
    private:
        string codigoDeAsignacion;
        string estadoDeAsignacion;
        Usuario* usuarioAsignado;
        Bibliotecario* bibliotecarioAsignado;
        Libro* libroAsignado;
            
    public:        
        // Constructor 1 para inicializar los atributos de la clase Asignacion (No se requiere estado de asignacion).
        Asignacion(string codigoDeAsignacion, Usuario* usuarioAsignado, Bibliotecario* bibliotecarioAsignado, Libro* libroAsignado);       

        // Constructor 2 para inicializar los atributos de la clase Asignacion (Se requiere estado de asignacion).
        Asignacion(string codigoDeAsignacion, string estadoDeAsignacion, Usuario* usuarioAsignado, Bibliotecario* bibliotecarioAsignado, Libro* libroAsignado);

        // Setters y getters para los atributos de la clase Libros.

        /**
         * @brief Establece el código de asignación.
         * @param codigoDeAsignacion Variable código de asignación que se establecerá como atributo código de asignación.
         * @return No retorna nada.
         */
        void setcodigoDeAsignacion(string codigoDeAsignacion);

        /**
         * @brief Establece el estado de la asignación.
         * @param estadoDeAsignacion Variable estado de asignación que se establecerá como atributo estado de asignación.
         * @return No retorna nada.
         */
        void setEstadoDeAsignacion(string estadoDeAsignacion);

        /**
         * @brief Establece el usuario asignado.
         * @param usuarioAsignado Puntero al usuario que se establecerá como atributo usuario asignado.
         * @return No retorna nada.
         */
        void setUsuarioAsignado(Usuario* usuarioAsignado);

        /**
         * @brief Establece el libro asignado.
         * @param libroAsignado Puntero al libro que se establecerá como atributo libro asignado.
         * @return No retorna nada.
         */
        void setLibroAsignado(Libro* libroAsignado);

                /**
         * @brief Establece el bibliotecario asignado.
         * @param bibliotecarioAsignado Puntero al bibliotecario que se establecerá como atributo bibliotecario asignado.
         * @return No retorna nada.
         */
        void setBibliotecarioAsignado(Bibliotecario* bibliotecarioAsignado);

        /**
         * @brief Obtiene el código de asignación de un prestamo de libro.
         * @return El código de asignación.
         */        
        string getCodigoAsignacion() const;

        /**
         * @brief Obtiene el estado de la asignación de un prestamo de libro.
         * @return El estado de la asignación.
         */
        string getEstadoDeAsignacion() const;

        /**
         * @brief Obtiene la instancia del usuario que solicita un préstamo de libro en el sistema bibliotecario.
         * @return La instancia del usuario.
         */
        Usuario* getUsuarioAsignado() const;

        /**
         * @brief Obtiene la instancia del libro que está asignado a un usuario en el sistema bibliotecario.
         * @return La instancia del libro.
         */
        Libro* getLibroAsignado() const;

        /**
         * @brief Obtiene la instancia del bibliotecario que realiza la asignación en el sistema bibliotecario.
         * @return La instancia del bibliotecario.
         */
        Bibliotecario* getBibliotecarioAsignado() const;
        
        /**
         * @brief Método para asignar un libro a un estudiante a través de una Asignación de prestamo en el sistema bibliotecario.
         * @return No retorna nada.
         */
        void asignarLibroAEstudiante(Asignacion* nuevaAsignacion);

        /**
         * @brief Método para mostrar información especifica de una Asignación de prestamo de libro en el sistema bibliotecario.
         * @return No retorna nada.
         */
        void mostrarInformacion() const;
    };

#endif

// Fin de las declaraciones de la clase Asignacion