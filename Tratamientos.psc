Proceso ClinicaDental
	Definir tratamiento1, tratamiento2, tratamiento3, tratamiento4, tratamiento5 Como Cadena;
	Definir precio1, precio2, precio3, precio4, precio5 Como Real;
	Definir opcion, conversion, precio_dolares, precio_cordobas Como Entero;
	tratamiento1 <- 'Limpieza dental';
	tratamiento2 <- 'Empaste';
	tratamiento3 <- 'Extracción';
	tratamiento4 <- 'Ortodoncia';
	tratamiento5 <- 'Implante';
	precio1 <- 50.0;
	precio2 <- 80.0;
	precio3 <- 100.0;
	precio4 <- 200.0;
	precio5 <- 500.0;
	Escribir '1. ', tratamiento1, ' - $', precio1;
	Escribir '2. ', tratamiento2, ' - $', precio2;
	Escribir '3. ', tratamiento3, ' - $', precio3;
	Escribir '4. ', tratamiento4, ' - $', precio4;
	Escribir '5. ', tratamiento5, ' - $', precio5;
	Escribir 'Seleccione un tratamiento (1-5): ';
	Leer opcion;
	Si opcion=1 Entonces
		precio_dolares <- precio1;
	FinSi
	Si opcion=2 Entonces
		precio_dolares <- precio2;
	FinSi
	Si opcion=3 Entonces
		precio_dolares <- precio3;
	FinSi
	Si opcion=4 Entonces
		precio_dolares <- precio4;
	FinSi
	Si opcion=5 Entonces
		precio_dolares <- precio5;
	FinSi
	Escribir 'El precio en dólares es: $', precio_dolares;
	Escribir '¿Desea ver los precios en córdobas nicaragüenses? (1: Sí / 0: No): ';
	Leer conversion;
	Si conversion=1 Entonces
		precio_cordobas <- precio_dolares*36.0;
		Escribir 'El precio en córdobas es: C$', precio_cordobas;
	FinSi
FinProceso
