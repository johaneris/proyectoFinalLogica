#include <iostream>
#include <string.h>
#include "a.cpp" // Para la gestión de citas
#include "b.cpp" // Para la gestión de pacientes
using namespace std;

#define EXCHANGE_RATE 36.5 // Tasa de cambio ejemplo de dólar a córdobas

void showDentalTreatments();
void showPricesInCordobas();
void showClinicHours();
void menuPaciente();
void menuAdministrador();
void mainMenu();

void showDentalTreatments() {
    cout << "Tratamientos disponibles y precios en dólares:\n";
    cout << "1. Limpieza Dental - $50\n";
    cout << "2. Extracción Dental - $100\n";
    cout << "3. Blanqueamiento Dental - $200\n";
    cout << "4. Carillas Dentales - $300\n";
    cout << "5. Implantes Dentales - $1000\n";
}

void showPricesInCordobas() {
    cout << "Tratamientos disponibles y precios en córdobas:\n";
    cout << "1. Limpieza Dental - " << 50 * EXCHANGE_RATE << " C$ \n";
    cout << "2. Extracción Dental - " << 100 * EXCHANGE_RATE << " C$ \n";
    cout << "3. Blanqueamiento Dental - " << 200 * EXCHANGE_RATE << " C$ \n";
    cout << "4. Carillas Dentales - " << 300 * EXCHANGE_RATE << " C$ \n";
    cout << "5. Implantes Dentales - " << 1000 * EXCHANGE_RATE << " C$ \n";
}

void showClinicHours() {
    cout << "Horarios de atención disponibles:\n";
    cout << "Lunes a Viernes: 8:00 AM - 5:00 PM\n";
    cout << "Sábados: 9:00 AM - 1:00 PM\n";
    cout << "Domingos: Cerrado\n";
}

void menuPaciente() {
    int option;
    do {
        cout << "\033[1;34mMenu de Paciente\033[0m\n";
        cout << "1. Ver tratamientos dentales\n";
        cout << "2. Ver precios en córdobas\n";
        cout << "3. Ver horarios de atención\n";
        cout << "4. Programar una cita\n";
        cout << "5. Ver listado de citas\n";
        cout << "6. Salir\n";
        cout << "Ingrese una opción: ";
        cin >> option;
        cin.ignore();

        switch (option) {
            case 1:
                showDentalTreatments();
                break;
            case 2:
                showPricesInCordobas();
                break;
            case 3:
                showClinicHours();
                break;
            case 4:
                principal(); // Función de gestión de citas
                break;
            case 5:
                // Mostrar el listado de citas
                break;
            case 6:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción inválida. Por favor intente de nuevo.\n";
                break;
        }
        if (option != 6) {
            cout << "Presione Enter para continuar...";
            cin.ignore();
            cin.get();
        }
    } while (option != 6);
}

void menuAdministrador() {
    int option;
    do {
        cout << "\033[1;34mMenu de Administrador\033[0m\n";
        cout << "1. Registrar nuevo paciente\n";
        cout << "2. Ver listado de pacientes\n";
        cout << "3. Buscar paciente por ID\n";
        cout << "4. Editar datos de paciente\n";
        cout << "5. Eliminar paciente\n";
        cout << "6. Salir\n";
        cout << "Ingrese una opción: ";
        cin >> option;
        cin.ignore();

        switch (option) {
            case 1:
                askData(); // Función para registrar nuevo paciente
                break;
            case 2:
                show(); // Mostrar listado de pacientes
                break;
            case 3:
                showRegisterByID(); // Buscar paciente por ID
                break;
            case 4:
                edit(); // Editar datos de paciente
                break;
            case 5:
                deleteData(); // Eliminar paciente
                break;
            case 6:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción inválida. Por favor intente de nuevo.\n";
                break;
        }
        if (option != 6) {
            cout << "Presione Enter para continuar...";
            cin.ignore();
            cin.get();
        }
    } while (option != 6);
}

void mainMenu() {
    int userType;
    do {
        cout << "\033[1;34mBienvenido al sistema de gestión de citas médicas\033[0m\n";
        cout << "1. Paciente\n";
        cout << "2. Administrador\n";
        cout << "3. Salir\n";
        cout << "Ingrese una opción: ";
        cin >> userType;
        cin.ignore();

        switch (userType) {
            case 1:
                menuPaciente();
                break;
            case 2:
                menuAdministrador();
                break;
            case 3:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción inválida. Por favor intente de nuevo.\n";
                break;
        }
        if (userType != 3) {
            cout << "Presione Enter para continuar...";
            cin.ignore();
            cin.get();
        }
    } while (userType != 3);
}