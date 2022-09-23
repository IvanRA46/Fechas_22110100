// Fechas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Date.h"

using namespace std;
string date;

int largo(string);

int main()
{
	int v;
		cout << "- Validador de fechas -\n Ingrese la fecha (DD/MM/AAAA/):\n";
		cin >> date;
		v = largo(date);
		if (v == 1) {
			Date* d;
			d = new Date(date);
			d->Separar_Cad(date);
			delete d;
		}
		else {
			cout << "\nFormato de fecha incorrecto\n";
		}

	
}

int largo(string date) {
	int valido, val;
	val = date.size();
	if (val <= 10) {
		return valido=1;
	}
	else {
		return valido=0;
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
