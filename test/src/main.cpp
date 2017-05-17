#include <iostream>
#include "test_cabecera.h"
#include "maths.h"

int main(int argc, char* argv[])
{
	hola_mundo();
	std::cout << maths::mi_sqrt(7) << std::endl;

	return 0;
}

