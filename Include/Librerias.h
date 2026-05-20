#ifndef LIBRERIAS_H

// Se definen las librerias y elementos globales para llevar a cabo el desarrollo del proyecto

#define LIBRERIAS_H

// Declaraciones de librerias y elementos globales para el proyecto

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

// Uso de espacios de nombres para facilitar la escritura del código profe :3
using std::string;
using std::vector;

// Declaraciones de clases a utilizar adelantadas para evitar errores de tipo en los vectores globales
class Usuario;
class Bibliotecario;
class Libros;
class Asignacion;

// Listas globales (base de datos en memoria para el menú)
extern vector<Usuario*> usuarios;
extern vector<Bibliotecario*> bibliotecarios;
extern vector<Libros*> libros;
extern vector<Asignacion*> asignaciones;

#endif

// Fin de las declaraciones de librerias y elementos globales