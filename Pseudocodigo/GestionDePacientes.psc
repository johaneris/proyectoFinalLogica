Proceso GestionDePacientes
	definir opcion como entero;
	Repetir 
		Escribir "Seleccione una opción: ";
		Escribir "1. Registrar nuevo paciente" ;
		Escribir "2. Ver listado de pacientes";
		Escribir "3. Ver datos de un paciente individual";
		Escribir "4. Editar datos de un paciente";
		Escribir "5. Eliminar paciente";
		Escribir "6. Salir";
		Leer opcion;
		segun opcion hacer
			1:
				Escribir "Registrar Paciente";
			2:
				Escribir "Listado de pacientes";
			3:
				Escribir "Datos del Paciente";
			4:
				Escribir "Editar Paciente";
			5:
				Escribir "Eliminar paciente";
			6:
				Escribir "Adios";
		FinSegun
	Hasta Que opcion = 6

FinProceso
