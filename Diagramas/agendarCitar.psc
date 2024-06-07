Proceso agendarCitar
	Definir opcion Como Entero;
	Definir i Como Entero;
	Definir posicion Como Entero;
	Definir llegada Como Logico;
	Definir nombre Como Cadena;
	Definir nombres Como Cadena;
	Dimensionar nombres(60);
	Definir fecha Como Cadena;
	Definir fechas Como Cadena;
	Dimensionar fechas(60);
	Definir paciente Como Entero;
	Definir pacientes Como Entero;
	Dimensionar pacientes(100);
	Definir hora Como Entero;
	Definir horas Como Entero;
	Dimensionar horas(60);
	Definir minuto Como Entero;
	Definir minutos Como Entero;
	Dimensionar minutos(60);
	posicion <- 0;
	Repetir
		Escribir 'Escoge tus opciones';
		Escribir '1. Ingrese sus datos';
		Escribir '2. Mostrar citas';
		Escribir '3. Salir';
		Leer opcion;
		Segun opcion Hacer
			1:
				Escribir 'Ingresa tu nombre:';
				Leer nombre;
				nombres[posicion] <- nombre;
				Escribir 'Ingresa tu numero de telefono: ';
				Leer paciente;
				pacientes[posicion] <- paciente;
				Escribir 'Ingresa la fecha de tu cita:';
				Leer fecha;
				fechas[posicion] <- fecha;
				Escribir 'Ingresa la hora de tu cita:';
				Leer hora;
				horas[posicion] <- hora;
				Escribir 'Ingrese los minutos de la cita: ';
				Leer minuto;
				minutos[posicion] <- minuto;
				posicion <- posicion+1;
			2:
				Escribir 'El paciente ', nombre, ' con numero de telefono ', paciente, ' agendo una cita el ', fecha, ' a las ', hora, ':', minuto;
				Escribir '';
			3:
				Escribir 'Saliendo...';
			De Otro Modo:
				Escribir 'Opcion invalida, vuelve a intentarlo';
		FinSegun
	Hasta Que opcion=3
FinProceso
