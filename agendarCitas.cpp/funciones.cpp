

#include <iostream>
#include <string>
#include "variables.h"

using namespace std;

CITA citas[MAX_CITAS];

int numeroCitas = 0;

void agregarCita(CITA *c);
void programarCita();
void verCitas();
void editarCitas();
void eliminarCita();
int menu();
void principal();




void agregarCita() {
    if (numeroCitas < MAX_CITAS) {
        CITA nuevaCita;

        cout << "Ingrese el nombre del paciente: ";
        cin >> nuevaCita.nombrePaciente;
        
        cout << "Ingrese el tratamiento: ";
        cin >> nuevaCita.tratamiento;

        cout << "Ingrese la fecha: ";
        cin >> nuevaCita.fecha;

        cout << "Ingrese la hora: ";
        cin >> nuevaCita.hora;

        citas[numeroCitas] = nuevaCita;
        numeroCitas++;

        cout << "Cita agregada con exitosamente." << endl;
    } else {
        cout << "No se pueden agregar citas." << endl;
    }
}

void verCitas() {
    if (numeroCitas == 0) {
        cout << "No hay citas programadas." << endl;
    } else {
        for (int i = 0; i < numeroCitas; i++) {
            cout << "Cita " << i + 1 << ":" << endl;
            cout << "  Nombre del paciente: " << citas[i].nombrePaciente << endl;
            cout << "  Tratamiento: " << citas[i].tratamiento << endl;
            cout << "  Fecha: " << citas[i].fecha << endl;
            cout << "  Hora: " << citas[i].hora << endl;
        }
    }
}

void editarCita() {
    int indice;
    cout << "Ingrese el numero de la cita a editar: ";
    cin >> indice;
    indice--; 

    if (indice < 0 || indice >= numeroCitas) {
        cout << "Número de cita inválido." << endl;
        return;
    }

    cout << "Editar nombre del paciente (actual: " << citas[indice].nombrePaciente << "): ";
    cin >> citas[indice].nombrePaciente;

    cout << "Editar tratamiento (actual: " << citas[indice].tratamiento << "): ";
    cin >> citas[indice].tratamiento;

    cout << "Editar fecha (actual: " << citas[indice].fecha << "): ";
    cin >> citas[indice].fecha;

    cout << "Editar hora (actual: " << citas[indice].hora << "): ";
    cin >> citas[indice].hora;

    cout << "Cita editada con éxito." << endl;
}

void eliminarCita() {
    int indice;
    cout << "Ingrese el numero de la cita que desea eliminar: ";
    cin >> indice;
    indice--; 

    if (indice < 0 || indice >= numeroCitas) {
        cout << "Numero de cita inválido." << endl;
        return;
    }

    for (int i = indice; i < numeroCitas - 1; ++i) {
        citas[i] = citas[i + 1];
    }
    numeroCitas--;

    cout << "Cita eliminada con éxito." << endl;
}

void mostrarMenu() {
    cout << "Menu de Citas\n";
    cout << "1. Agregar cita\n";
    cout << "2. Ver citas\n";
    cout << "3. Editar cita\n";
    cout << "4. Eliminar cita\n";
    cout << "5. Salir\n";
    cout << "Seleccione: ";
}

void principal() {
    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;
        switch (opcion) {
            case 1:
                agregarCita();
                break;
            case 2:
                verCitas();
                break;
            case 3:
                editarCita();
                break;
            case 4:
                eliminarCita();
                break;
            case 5:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion incorrecta." << endl;
                break;
        }
    } while (opcion != 5);
}