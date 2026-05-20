#include "Bibliotecario.h"


Bibliotecario::Bibliotecario(string nombre, int edad, int ID, int codigoEmpleado, float salario, string rol) : Persona(nombre, edad, ID) {
    this->codigoEmpleado = codigoEmpleado;
    this->salario = salario;
    this->rol = rol;
}

int Bibliotecario::getCodigoEmpleado() const {
    return codigoEmpleado;
}

float Bibliotecario::getSalario() const {
    return salario;
}

void Bibliotecario::setCodigoEmpleado(int codigoEmpleado) {
    this->codigoEmpleado = codigoEmpleado;
}

void Bibliotecario::setSalario(float salario) {
    this->salario = salario;
}

string Bibliotecario::mostrarRol(string rol) const {
    return rol;
}

void Bibliotecario::mostrarInformacion() const {    

    std::cout << std::fixed << std::setprecision(2);  

    std::cout << "-> [" << mostrarRol(rol) << "] Nombre: " << getNombre() << " | Edad: " << getEdad() << " | ID: " << getID() 
              << " | Codigo: " << getCodigoEmpleado() << "\n" << "Salario: " << getSalario() 
              << "\n" << std::endl;
}