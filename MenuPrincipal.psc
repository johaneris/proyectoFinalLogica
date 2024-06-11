Proceso MenuPrincipal
	Definir opcion Como Entero;
	Definir usuario Como Caracter;
	Repetir
		Escribir '******Menú Principal:*******';
		Escribir '1. Menú de Usuario';
		Escribir '2. Horarios de Atención';
		Escribir '3. Salir';
		Escribir 'Ingrese una opción: ';
		Leer opcion;
		Segun opcion  Hacer
			1:
				Repetir
					Limpiar Pantalla;
					Escribir 'Menú de Usuario:';
					Escribir '1. Elegir Usuario';
					Escribir '2. Crear Usuario';
					Escribir '3. Regresar al Menú Principal';
					Escribir 'Ingrese una opción: ';
					Leer opcion;
					
					Segun opcion  Hacer
						1:
							Limpiar Pantalla;
							Escribir '****Elegir Usuario:****';
							Escribir 'Ingrese el nombre de usuario: ';
							Leer usuario;
							Escribir 'Usuario seleccionado: ',usuario;
						2:
							Limpiar Pantalla;
							Escribir '****Crear Usuario:****';
							Escribir 'Ingrese el nombre de usuario: ';
							Leer usuario;
							Escribir 'Usuario creado: ',usuario;
						3:
						De Otro Modo:
							Escribir 'Opción inválida, por favor ingrese una opción válida.';
					FinSegun
					Limpiar Pantalla;
				Hasta Que opcion==3
			2:
				Limpiar Pantalla;
				Escribir '****Horarios de Atención:****';
				Escribir 'Lunes a Viernes de 9:00 a 18:00';
				Escribir 'Sábados de 9:00 a 13:00';
			3:
			De Otro Modo:
				Escribir 'Opción inválida, por favor ingrese una opción válida.';
		FinSegun
	Hasta Que opcion==3
	Limpiar Pantalla;
    Escribir "Gracias por usar el programa. ¡Hasta luego!";
FinProceso
