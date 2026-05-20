#ifndef USUARIO_H

// Define la clase Usuario para evitar inclusiones múltiples

#define USUARIO_H

// Declaraciones de métodos y atributos de la clase Usuario

#include "Persona.h"

/**
 * @class Usuario
 * @brief Clase que representa a un usuario en el sistema bibliotecario, heredando atributos y métodos de Persona.
 */
class Usuario : public Persona {
    private:
        int codigoUsuario;
        int librosPrestados;
        string rol;

    public:

        Usuario(string nombre, int edad, int ID, int codigoUsuario, int librosPrestados, string rol);       // Constructor para inicializar los atributos de la clase Ususario.

        // Setters y getters para los atributos de la clase Usuario.

        /**
         * @brief Establece el código de usuario que representa a una persona en el sistema bibliotecario.
         * @param codigoUsuario Variable código de usuario que se establecerá como atributo codigoUsuario.
         * @return No retorna nada.
         */
        void setCodigoUsuario(int codigoUsuario);

        /**
         * @brief Establece la cantidad de libros prestados por el usuario.
         * @param librosPrestados Variable que se establecerá como atributo librosPrestados.
         * @return No retorna nada.
         */
        void setLibrosPrestados(int librosPrestados);

        /**
         * @brief Obtiene el código de usuario que representa a una persona en el sistema bibliotecario.
         * @return El código de usuario de la persona.
         */
        int getCodigoUsuario() const;

        /**
         * @brief Obtiene la cantidad de libros prestados por el usuario.
         * @return La cantidad de libros prestados.
         */
        int getLibrosPrestados() const;

        /**
         * @brief Sobrescribe el método de Persona para mostrar el rol de esta.
         * @return No retorna nada.
         */
        string mostrarRol(string rol) const override;

        /**
         * @brief Sobrescribe el método de Persona para mostrar información específica de estudiante.
         * @return No retorna nada.
         */
        void mostrarInformacion() const override;

};

#endif

// Fin de las declaraciones de la clase Usuario