#pragma once
#include <iostream>
#include <string>
#include <sstream>


using namespace std;

class Date
{
private:
	string date;
	int dia;
	int mes;
	int year;
	string dateInString;
public:
	Date(string);
	void mostrar();
	void Separar_Cad(string date);
	void Validar(int dia, int mes, int year);
	void Dia_Desp();
	operator const char* ();
};


