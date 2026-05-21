#include "C:\Users\USUARIO\Desktop\Programas-creados\Trabajo\ParcialCorte2/Include/Librerias.h"
#include "C:\Users\USUARIO\Desktop\Programas-creados\Trabajo\ParcialCorte2/Include/Persona.h"
#include "C:\Users\USUARIO\Desktop\Programas-creados\Trabajo\ParcialCorte2/Include/Usuario.h"
#include "C:\Users\USUARIO\Desktop\Programas-creados\Trabajo\ParcialCorte2/Include/Bibliotecario.h"
#include "C:\Users\USUARIO\Desktop\Programas-creados\Trabajo\ParcialCorte2/Include/Libro.h"
#include "C:\Users\USUARIO\Desktop\Programas-creados\Trabajo\ParcialCorte2/Include/Asignacion.h"

// Listas globales (base de datos en memoria para el menú)

vector<Usuario*> usuarios;
vector<Bibliotecario*> bibliotecarios;
vector<Libro*> libros;
vector<Asignacion*> asignaciones;

// std::cin.ignore() será la función principal para ignorar el salto de línea pendiente después de cada lectura de datos con std::cin

int main () {

std::cout << "\n\t===== SISTEMA DE GESTION BIBLIOTECARIA =====\n";
    
    do {
    int opcion;

    std::cout << "Seleccione el tipo de accion a realizar:\n";
    std::cout << "1. Registrar Usuario\n";
    std::cout << "2. Registrar Bibliotecario\n";
    std::cout << "3. Registrar Libro\n";
    std::cout << "4. Realizar Prestamo de Libro\n";
    std::cout << "5. Realizar Devolucion de Libro\n";     
    std::cout << "6. Mostrar lista de Usuarios\n";      
    std::cout << "7. Mostrar lista de Bibliotecarios\n";          
    std::cout << "8. Mostrar lista de Libros\n";
    std::cout << "9. Mostrar lista de Asignaciones\n";
    std::cout << "10. Salir\n";                   
    std::cout << "Seleccione una opcion: ";
    std::cin >> opcion;
    std::cin.ignore();

    switch (opcion) {

            
        case 1: {
            string nombre;
            int edad;
            int ID;
            int codigoUsuario;
            int librosPrestados;
            string rol ="Usuario";

            std::cout << "\n\t[Nuevo Estudiante]\n";
            std::cout << "Ingrese el nombre del usuario: ";
            std::getline(std::cin, nombre);

            std::cout << "Ingrese la edad del usuario: ";
            std::cin >> edad;
            std::cin.ignore();

            std::cout << "Ingrese el ID del usuario: ";
            std::cin >> ID;
            std::cin.ignore();

            std::cout << "Ingrese el codigo del usuario: ";
            std::cin >> codigoUsuario;
            std::cin.ignore();

            std::cout << "Ingrese el numero de libros prestados: ";
            std::cin >> librosPrestados;
            std::cin.ignore();

            std::cout << "\n\t[Nuevo Estudiante]\n";
            std::cout << "Ingrese el nombre del usuario: ";
            std::getline(std::cin,rol);

            usuarios.push_back(new Usuario(nombre, edad, ID, codigoUsuario, librosPrestados, rol));
            std::cout << "\t[Usuario registrado con exito]\n" << std::endl;
            break;
        }


        case 2: {
            string nombre;
            int edad;
            int ID;
            int codigoEmpleado;
            float salario;
            string rol = "Bibliotecario"; 

            std::cout << "\n\t[Nuevo Bibliotecario]\n";
            std::cout << "Ingrese el nombre del bibliotecario: ";
            std::getline(std::cin, nombre);

            std::cout << "Ingrese la edad del profesor: ";
            std::cin >> edad;
            std::cin.ignore();

            std::cout << "Ingrese el ID del bibliotecario: ";
            std::cin >> ID;
            std::cin.ignore();

            std::cout << "Ingrese el codigo del bibliotecario: ";
            std::cin >> codigoEmpleado;
            std::cin.ignore();

            std::cout << "Ingrese el salario del bibliotecario: ";
            std::cin >> salario;
            std::cin.ignore();

            bibliotecarios.push_back(new Bibliotecario(nombre, edad, ID, codigoEmpleado, salario, rol));
            std::cout << "\t[Bibliotecario registrado con exito]\n" << std::endl;
            break;
        }

        case 3: {
            string libroTitulo; 
            string libroCodigo; 
            string autor; 
            string disponibilidad;

            std::cout << "\n\t[Nuevo Libro]\n";
            std::cout << "Ingrese el nombre del Libro: ";
            std::getline(std::cin, libroTitulo);

            std::cout << "Ingrese el codigo del libro: ";
            std::cin >> libroCodigo;
            std::cin.ignore(); 

            std::cout << "Ingrese el nombre del autor: ";
            std::getline(std::cin, autor);

            std::cout << "Ingrese la disponibilidad del libro: ";
            std::getline(std::cin, disponibilidad);

            libros.push_back(new Libro(libroTitulo, autor, disponibilidad, libroCodigo));
            std::cout << "\t[Libro registrado con exito]\n" << std::endl;
            break;
        }

        case 4: {
            if (usuarios.empty()) {
                std::cout << "\t\aDebe registrar al menos un usuario primero.\n";
                break;
            }
            if (libros.empty()) {
                std::cout << "\t\aDebes registrar al menos un libro primero.\n";
                break;
            }
            if (bibliotecarios.empty()) {
                std::cout << "\t\aDebes registrar al menos un bibliotecario primero.\n";
                break;
            }

            int codigoUsuario;
            int codigoBibliotecario;
            string codigoLibro;
            string tipoDeAsignacion = "Prestamo";
            string codigoAsignacion = "010101";
            
            Libro* libroEncontrado = nullptr;
            Usuario* usuarioEncontrado = nullptr;
            Bibliotecario* bibliotecarioEncontrado = nullptr;

            std::cout << "\n\t[Nuevo Prestamo]\n";
            std::cout << "Ingrese el codigo del usuario: "; 
            std::cin >> codigoUsuario;
            std::cin.ignore();

            std::cout << "Ingrese el codigo del libro: "; 
            std::cin >> codigoLibro;
            std::getline(std::cin, codigoLibro);

            std::cout << "Ingrese el codigo del bibliotecario: "; 
            std::cin >> codigoBibliotecario;
            std::cin.ignore();

            // Buscando usuarios en las bases de datos globables a partir del codigo ingresado
            for (Usuario* auxUser : usuarios) {
                if (auxUser->getCodigoUsuario() == codigoUsuario) {
                    usuarioEncontrado = auxUser;
                    break;
                }
            }

            // Buscando libros en las bases de datos globables a partir del codigo ingresado
            for (Libro* auxBook : libros) {
                if (auxBook->getCodigoLibro() == codigoLibro) {
                    libroEncontrado = auxBook;
                    break;
                }
            }

            // Buscando bibliotecarios en las bases de datos globables a partir del codigo ingresado
            for (Bibliotecario* auxLibrarian : bibliotecarios) {
                if (auxLibrarian->getCodigoEmpleado() == codigoBibliotecario) {
                    bibliotecarioEncontrado = auxLibrarian;
                    break;
                }
            }

            if (usuarioEncontrado && libroEncontrado && bibliotecarioEncontrado) {
                if (libroEncontrado->getDisponible() == "Disponible"){
                    
                    Asignacion* nuevoPrestamo = new Asignacion(codigoAsignacion, tipoDeAsignacion, usuarioEncontrado, bibliotecarioEncontrado, libroEncontrado);
                    nuevoPrestamo->asignarLibroAEstudiante(nuevoPrestamo);
                    libroEncontrado->setDisponible("En Prestamo");

                    delete nuevoPrestamo; // Liberar memoria del nuevo prestamo

                } else if (libroEncontrado->getDisponible() == "En Prestamo") {
                    std::cout << "\t\aEl libro seleccionado se encuenta en prestamo. No se pudo realizar la asignacion.\n" << std::endl;
                }

            } else {
                std::cout << "\t\aError: usuario, libro o bibliotecario no encontrado. No se pudo realizar la asignacion.\n" << std::endl;
                
                delete usuarioEncontrado; // Liberar memoria del usuario encontrado si no se pudo realizar la asignacion
                delete libroEncontrado;  // Liberar memoria del libro encontrado si no se pudo realizar la asignacion
                delete bibliotecarioEncontrado;  // Liberar memoria del bibliotecario encontrado si no se pudo realizar la asignacion
            }
            break;
        }

                case 5: {
            if (usuarios.empty()) {
                std::cout << "\t\aDebe registrar al menos un usuario primero.\n";
                break;
            }
            if (libros.empty()) {
                std::cout << "\t\aDebes registrar al menos un libro primero.\n";
                break;
            }
            if (bibliotecarios.empty()) {
                std::cout << "\t\aDebes registrar al menos un bibliotecario primero.\n";
                break;
            }

            int codigoUsuario;
            int codigoBibliotecario;
            string codigoLibro;
            string tipoDeAsignacion = "Devolucion";
            string codigoAsignacion = "020202";
            
            Libro* libroEncontrado = nullptr;
            Usuario* usuarioEncontrado = nullptr;
            Bibliotecario* bibliotecarioEncontrado = nullptr;

            std::cout << "\n\t[Nuevo Prestamo]\n";
            std::cout << "Ingrese el codigo del usuario: "; 
            std::cin >> codigoUsuario;
            std::cin.ignore();

            std::cout << "Ingrese el codigo del libro: "; 
            std::cin >> codigoLibro;
            std::getline(std::cin, codigoLibro);

            std::cout << "Ingrese el codigo del bibliotecario: "; 
            std::cin >> codigoBibliotecario;
            std::cin.ignore();

            // Buscando usuarios en las bases de datos globables a partir del codigo ingresado
            for (Usuario* auxUser : usuarios) {
                if (auxUser->getCodigoUsuario() == codigoUsuario) {
                    usuarioEncontrado = auxUser;
                    break;
                }
            }

            // Buscando libros en las bases de datos globables a partir del codigo ingresado
            for (Libro* auxBook : libros) {
                if (auxBook->getCodigoLibro() == codigoLibro) {
                    libroEncontrado = auxBook;
                    break;
                }
            }

            // Buscando bibliotecarios en las bases de datos globables a partir del codigo ingresado
            for (Bibliotecario* auxLibrarian : bibliotecarios) {
                if (auxLibrarian->getCodigoEmpleado() == codigoBibliotecario) {
                    bibliotecarioEncontrado = auxLibrarian;
                    break;
                }
            }

            if (usuarioEncontrado && libroEncontrado && bibliotecarioEncontrado) {
                if (libroEncontrado->getDisponible() == "En Prestamo"){
                    
                    
                    Asignacion* nuevaDevolucion = new Asignacion(codigoAsignacion, tipoDeAsignacion, usuarioEncontrado, bibliotecarioEncontrado, libroEncontrado);
                    nuevaDevolucion->asignarLibroAEstudiante(nuevaDevolucion);
                    libroEncontrado->setDisponible("En Prestamo");

                    delete nuevaDevolucion; // Liberar memoria del nuevo prestamo

                } else if (libroEncontrado->getDisponible() == "Disponible") {
                    std::cout << "\t\aEl libro seleccionado se encuenta en disponible. No se pudo realizar la asignacion.\n" << std::endl;
                }

            } else {
                std::cout << "\t\aError: usuario, libro o bibliotecario no encontrado. No se pudo realizar la asignacion.\n" << std::endl;
                
                delete usuarioEncontrado; // Liberar memoria del usuario encontrado si no se pudo realizar la asignacion
                delete libroEncontrado;  // Liberar memoria del libro encontrado si no se pudo realizar la asignacion
                delete bibliotecarioEncontrado;  // Liberar memoria del bibliotecario encontrado si no se pudo realizar la asignacion
            }

            break;
        }

        case 6: {
            std::cout << "\n\t=== USUARIOS EN EL SISTEMA ===\n";
            if (usuarios.empty()) {
                std::cout << "No hay usuarios registrados.\n";
            } else {
                for (Usuario* auxUser : usuarios) {         //Buscando profesor en las bases de datos globables a partir del codigo ingresado
                    if (dynamic_cast<Usuario*>(auxUser)) {
                        auxUser->mostrarInformacion();
                    }
                }
            }
            break;
        }

        case 7: {
            std::cout << "\n\t=== BIBLIOTECARIOS EN EL SISTEMA ===\n";
            if (bibliotecarios.empty()) {
            std::cout << "No hay bibliotecarios registrados.\n";

            } else {
                for (Bibliotecario* auxLibrarian : bibliotecarios) {       //Buscando bibliotecario en las bases de datos globables a partir del codigo ingresado
                    auxLibrarian->mostrarInformacion();
                }
            }
            break;
        }

        case 8: {
            std::cout << "\n\t=== LIBROS EN EL SISTEMA ===\n";
            if (libros.empty()) {
                std::cout << "No hay libros registrados.\n";
            
            } else {
                for (Libro* auxBooks : libros) {       //Buscando libro en las bases de datos globables a partir del codigo ingresado
                    auxBooks->mostrarInformacion();
                }
            }
            break;
        }

        case 9: {
            if (usuarios.empty()) {
                std::cout << "\t\aDebe crear al menos un usuariario primero.\n";
                break;
            }
            if (bibliotecarios.empty()) {
                std::cout << "\t\aDebes crear al menos un bibliotecario primero.\n";
                break;
            }
               if (libros.empty()) {
                std::cout << "\t\aDebes crear al menos un libro primero.\n";
                break;
            }
        }
        case 10: {
            std::cout << "Saliendo del programa...\n";
            
            // Proceso de limpieza y liberación de memoria asignada a usuarios, bibliotecarios, libros y asignaciones antes de salir del programa
            
            for (Usuario* auxUser : usuarios) {
                delete auxUser;
            }
            usuarios.clear();

            for (Bibliotecario* auxLibrarian : bibliotecarios) {
                delete auxLibrarian;
            }
            bibliotecarios.clear();
            
            for (Libro* auxBooks : libros) {
                delete auxBooks;
            }
            libros.clear();

            for (Asignacion* auxAssignment : asignaciones) {
                delete auxAssignment;
            }
            asignaciones.clear();

            return 0;       // Salida del programa
        }

        default: {
            std::cout << "Opcion no valida. Intente nuevamente.\n" << std::endl;
            break;
        }

    }
    
    }while (true); // Bucle infinito para mantener el programa en ejecución hasta que el usuario decida salir
}
