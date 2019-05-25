#include "ClassFunctionsMap.h"

const std::map<int, Baz::classFunc> Baz::m_functions = 
{
	{ 1, &Baz::foo },
	{ 2, &Baz::bar }
};

void Baz::foo()
{}

void Baz::bar()
{}