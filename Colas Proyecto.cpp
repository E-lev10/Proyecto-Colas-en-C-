#include <iostream> // Biblioteca para operaciones de entrada/salida (cout, cin)
#include <queue>  // Biblioteca para usar la estructura de datos 'cola' (FIFO)
#include <string>  // Biblioteca para manejo de cadenas de texto (string)
#include <windows.h> // Biblioteca espec�fica de Windows para configuraciones de consola

sing namespace std;      // Evita escribir 'std::' antes de cada funci�n est�ndar

// Estructura que define un cliente del banco
struct Cliente {
    int turno;           // N�mero de turno asignado al cliente
    string nombre;       // Nombre del cliente (usamos string para permitir espacios)
};