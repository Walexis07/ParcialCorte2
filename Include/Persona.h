#ifndef PERSONA_H

// Define la clase Persona para evitar inclusiones múltiples

#define PERSONA_H

// Declaraciones de métodos y atributos de la clase Persona

#include "Librerias.h"

class Persona {
    private:
        string nombre;
        int edad;
        int ID;

    public:        
        Persona(string nombre, int edad, int ID);       // Constructor para inicializar los atributos de la clase Persona.
            
        virtual ~Persona() = default;                   // Destructor virtual para realizar polimorfismo.

        // Setters y getters para los atributos de la clase Persona.

        /**
         * @brief Establece el nombre que representa a una persona en el sistema bibliotecario.
         * @param nombre Variable nombre que se establecerá como atributo nombre.
         * @return No retorna nada.
         */
        void setNombre(string nombre);

        /**
         * @brief Establece la edad que tiene una persona en el sistema bibliotecario.
         * @param edad Variable edad que se establecerá como atributo edad.
         * @return No retorna nada.
         */
        void setEdad(int edad);

        /**
         * @brief Establece el documento de identidad que representa a una persona en el sistema bibliotecario.
         * @param ID Variable documento de identidad que se establecerá como atributo ID.
         * @return No retorna nada.
         */
        void setID(int ID);

        /**
         * @brief Obtiene el nombre que representa a una persona en el sistema bibliotecario.
         * @return El nombre de la persona.
         */        
        string getNombre() const;

        /**
         * @brief Obtiene la edad que tiene una persona en el sistema bibliotecario.
         * @return La edad de la persona.
         */
        int getEdad() const;

        /**
         * @brief Obtiene el documento de identidad que representa a una persona en el sistema bibliotecario.
         * @return El documento de identidad de la persona.
         */
        int getID() const;

        /**
         * @brief Método virtual puro para mostrar el rol de las clases hijas de Persona en el sistema bibliotecario.
         * @return No retorna nada.
         */
        virtual string mostrarRol(string rol) const = 0;
        
        /**
         * @brief Método virtual puro para mostrar información de las clases hijas de Persona en el sistema bibliotecario.
         * @return No retorna nada.
         */
        virtual void mostrarInformacion() const = 0;
};

#endif

// Fin de las declaraciones de la clase Persona