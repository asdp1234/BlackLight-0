#include "Tool.h"

void tools::Print(std::string message)
{
	std::cout << message << std::endl;
}

void tools::Print(std::string message, int value)
{
	std::cout << message << " " << value <<std::endl;
}

void tools::Print(std::string message, float value)
{
	std::cout << message << " " << value << std::endl;
}
