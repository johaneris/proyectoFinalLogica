// funciones.cpp

#include <iostream>
#include <cstring>
#include "variables.h"

using namespace std;

CITA citas[MAX_CITAS];
int posCitas = 0;

// Prototipos de las funciones
void agregarCita(CITA *c);
void editarCita(CITA *c, int id);
void eliminarCita(int id);
CITA buscarCita(int id);
int obtPosCita(int id);
void mostrarCitas();
void pedirDatosCita();
void buscarCitaPorID();
void editarDatosCita();
void eliminarCitaPorID();
int menu();
void principal();

// Implementación de las funciones
void agregarCita(CITA *c) {
    citas[posCitas] = *c;
    posCitas++;
}

CITA buscarCita(int id) {
    for (int i = 0; i < posCitas; i++) {
        if (id == citas[i].id) {
            return citas[i];
        }
    }
    CITA c = {0, "", "", "", ""}; // Si no se encuentra, devuelve una cita vacía
    return c;
}

int obtPosCita(int id) {
    for (int i = 0; i < posCitas; i++) {
        if (citas[i].id == id) {
            return i;
        }
    }
    return -1;
}

void editarCita(CITA *c, int id) {
    int pos = obtPosCita(id);
    if (pos != -1) {
        citas[pos] = *c;
    }
}

void eliminarCita(int id) {
    int pos = obtPosCita(id);
    if (pos != -1) {
        for (int i = pos; i < posCitas - 1; i++) {
            citas[i] = citas[i + 1];
        }
        posCitas--;
    }
}

void mostrarCitas() {
    for (int i = 0; i < posCitas; i++) {
        cout << "ID: " << citas[i].id << endl;
        cout << "Nombre del paciente: " << citas[i].nombrePaciente << endl;
        cout << "Tratamiento: " << citas[i].tratamiento << endl;
        cout << "Fecha: " << citas[i].fecha << endl;
        cout << "Hora: " << citas[i].hora << endl;
        cout << "==============================" << endl;
    }
}

void pedirDatosCita() {
    CITA cita;
    cout << "Datos de la Cita\n";
    cout << "ID: ";
    cin >> cita.id;
    cin.ignore();
    cout << "Nombre del Paciente: ";
    cin.getline(cita.nombrePaciente, 50);
    cout << "Tratamiento: ";
    cin.getline(cita.tratamiento, 50);
    cout << "Fecha (dd/mm/aaaa): ";
    cin.getline(cita.fecha, 20);
    cout << "Hora (hh:mm): ";
    cin.getline(cita.hora, 10);
    agregarCita(&cita);
    cout << "Cita Agregada....\n";
}

void buscarCitaPorID() {
    int id;
    cout << "ID de la cita a buscar: ";
    cin >> id;
    CITA cita = buscarCita(id);
    if (cita.id != 0) {
        cout << "ID: " << cita.id << endl;
        cout << "Nombre del paciente: " << cita.nombrePaciente << endl;
        cout << "Tratamiento: " << cita.tratamiento << endl;
        cout << "Fecha: " << cita.fecha << endl;
        cout << "Hora: " << cita.hora << endl;
    } else {
        cout << "Cita no encontrada.\n";
    }
}

void editarDatosCita() {
    int id;
    cout << "ID de la cita a editar: ";
    cin >> id;
    cin.ignore();
    CITA cita = buscarCita(id);
    if (cita.id != 0) {
        cout << "Nombre del Paciente: ";
        cin.getline(cita.nombrePaciente, 50);
        cout << "Tratamiento: ";
        cin.getline(cita.tratamiento, 50);
        cout << "Fecha (dd/mm/aaaa): ";
        cin.getline(cita.fecha, 20);
        cout << "Hora (hh:mm): ";
        cin.getline(cita.hora, 10);
        editarCita(&cita, id);
        cout << "Cita actualizada...\n";
    } else {
        cout << "Cita no encontrada.\n";
    }
}

void eliminarCitaPorID() {
    int id;
    cout << "ID de la cita a eliminar: ";
    cin >> id;
    eliminarCita(id);
    cout << "Cita eliminada...\n";
}

int menu() {
    int op;
    cout << "Menu\n";
    cout << "1. Agregar Cita\n";
    cout << "2. Editar Cita\n";
    cout << "3. Eliminar Cita\n";
    cout << "4. Buscar Cita\n";
    cout << "5. Mostrar Citas\n";
    cout << "6. Salir\n";
    cout << "Digite la opción: ";
    cin >> op;
    return op;
}

void principal() {
    int op;
    do {
        op = menu();
        switch (op) {
            case 1:
                pedirDatosCita();
                break;
            case 2:
                editarDatosCita();
                break;
            case 3:
                eliminarCitaPorID();
                break;
            case 4:
                buscarCitaPorID();
                break;
            case 5:
                mostrarCitas();
                break;
            case 6:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción no válida\n";
                break;
        }
    } while (op != 6);
}
