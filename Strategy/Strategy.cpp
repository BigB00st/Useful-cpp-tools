#include "Strategy.h"

const std::map<int, Strategy::handler_func> Strategy::m_functions = 
{
	{ 1, &Strategy::foo },
	{ 2, &Strategy::bar }
};

void Strategy::foo()
{}

void Strategy::bar()
{}