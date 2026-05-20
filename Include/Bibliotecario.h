#ifndef BIBLIOTECARIO_H

// Define la clase Bibliotecario para evitar inclusiones múltiples

#define BIBLIOTECARIO_H

// Declaraciones de métodos y atributos de la clase Bibliotecario

#include "Persona.h"

/**
 * @class Bibliotecario
 * @brief Clase que representa a un bibliotecario en el sistema bibliotecario, heredando atributos y métodos de Persona.
 */
class Bibliotecario : public Persona {
    private:
        int codigoEmpleado;
        int salario;
        string rol;

    public:

        Bibliotecario(string nombre, int edad, int ID, int codigoEmpleado, int salario, string rol);       // Constructor para inicializar los atributos de la clase Bibliotecario.

        // Setters y getters para los atributos de la clase Bibliotecario.

        /**
         * @brief Establece el código de empleado que representa a un bibliotecario en el sistema bibliotecario.
         * @param codigoEmpleado Variable código de empleado que se establecerá como atributo codigoEmpleado.
         * @return No retorna nada.
         */
        void setCodigoEmpleado(int codigoEmpleado);

        /**
         * @brief Establece el salario del bibliotecario.
         * @param salario Variable que se establecerá como atributo salario.
         * @return No retorna nada.
         */
        void setSalario(int salario);

        /**
         * @brief Obtiene el código de empleado que representa a un bibliotecario en el sistema bibliotecario.
         * @return El código de empleado del bibliotecario.
         */
        int getCodigoEmpleado() const;

        /**
         * @brief Obtiene el salario del bibliotecario.
         * @return El salario del bibliotecario.
         */
        int getSalario() const;

        /**
         * @brief Sobrescribe el método de Persona para mostrar el rol de esta.
         * @return No retorna nada.
         */
        string mostrarRol(string rol) const override;

        /**
         * @brief Sobrescribe el método de Persona para mostrar información específica de bibliotecario.
         * @return No retorna nada.
         */
        void mostrarInformacion() const override;

};

#endif

// Fin de las declaraciones de la clase Bibliotecario