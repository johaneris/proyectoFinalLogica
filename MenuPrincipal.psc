Proceso MenuPrincipal
	Definir opcion Como Entero;
	Definir usuario Como Caracter;
	Repetir
		Escribir '******Men� Principal:*******';
		Escribir '1. Men� de Usuario';
		Escribir '2. Horarios de Atenci�n';
		Escribir '3. Salir';
		Escribir 'Ingrese una opci�n: ';
		Leer opcion;
		Segun opcion  Hacer
			1:
				Repetir
					Limpiar Pantalla;
					Escribir 'Men� de Usuario:';
					Escribir '1. Elegir Usuario';
					Escribir '2. Crear Usuario';
					Escribir '3. Regresar al Men� Principal';
					Escribir 'Ingrese una opci�n: ';
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
							Escribir 'Opci�n inv�lida, por favor ingrese una opci�n v�lida.';
					FinSegun
					Limpiar Pantalla;
				Hasta Que opcion==3
			2:
				Limpiar Pantalla;
				Escribir '****Horarios de Atenci�n:****';
				Escribir 'Lunes a Viernes de 9:00 a 18:00';
				Escribir 'S�bados de 9:00 a 13:00';
			3:
			De Otro Modo:
				Escribir 'Opci�n inv�lida, por favor ingrese una opci�n v�lida.';
		FinSegun
	Hasta Que opcion==3
	Limpiar Pantalla;
    Escribir "Gracias por usar el programa. �Hasta luego!";
FinProceso
