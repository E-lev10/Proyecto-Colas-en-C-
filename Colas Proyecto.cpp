#include <iostream> // Biblioteca para operaciones de entrada/salida (cout, cin)
#include <queue>  // Biblioteca para usar la estructura de datos 'cola' (FIFO)
#include <string>  // Biblioteca para manejo de cadenas de texto (string)
#include <windows.h> // Biblioteca específica de Windows para configuraciones de consola

sing namespace std;      // Evita escribir 'std::' antes de cada función estándar

// Estructura que define un cliente del banco
struct Cliente {
    int turno;           // Número de turno asignado al cliente
    string nombre;       // Nombre del cliente (usamos string para permitir espacios)
};

//Funcion que muestra el menu de opciones void mostrar menu () {
cout <<"/n--BANCO CUCUL POP--/N"; //Titulo personalizado del banco 
   cout << "1. Agregar cliente\n";        // Opción para agregar nuevo cliente
    cout << "2. Atender cliente\n";        // Opción para atender al siguiente cliente
    cout << "3. Ver cola de espera\n";     // Opción para mostrar la lista de espera
    cout << "4. Mostrar cliente actual\n"; // Opción para ver el cliente siendo atendido
    cout << "0. Salir\n";                  // Opción para terminar el programa
    cout << "Seleccione una opcion: ";     // Solicitud de entrada al usuario
}

// Función para limpiar la pantalla de la consola
void limpiarPantalla() {
    system("cls");       // Comando de Windows para limpiar la consola
}

// Función principal del programa
int main() {
    // Configura la consola para soportar caracteres especiales (tildes, ñ, etc.)
    SetConsoleOutputCP(CP_UTF8);
// Variables principales:
    queue<Cliente> colaClientes;      // Cola que almacena los clientes en espera
    Cliente clienteActual;            // Almacena temporalmente al cliente siendo atendido
    int contadorTurnos = 1;           // Lleva la secuencia numérica de los turnos
    int opcion;                       // Almacena la opción seleccionada por el usuario
    bool clienteSiendoAtendido = false; // Indica si hay un cliente en atención
