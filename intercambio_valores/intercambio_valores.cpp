// intercambio_valores.cpp : main project file.

#include "stdafx.h"
#include "swap.h"
using namespace System;
int main(array<System::String ^> ^args) {

	int a, b;
	String^ str;
	a = 5;
	b = 8;
	Console::WriteLine(L"Introduce un valor: \n");
	str = Console::ReadLine();
	//a = String::ToIn ::ToInt16(str);
	Console::WriteLine("a= " + a+" b="+b);
	swap(&a, &b);
	Console::WriteLine("Tras el swap \n a= " + a + " b=" + b);
	for (a = 1; a < 11; a++) {
		
		Console::Write(a + "\t");
	}
	Console::Beep(3000, 5);

	Console::ReadKey();
    return 0;
}

