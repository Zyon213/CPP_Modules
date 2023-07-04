#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: invalid number of arguments." << std::endl;
		return EXIT_FAILURE;
	}

	if (!RPN::is_valid_exp(argv[1]))
	{
		std::cerr << "Error: invalid expression." << std::endl;
		return EXIT_FAILURE;
	}
	try
	{
		std::cout << RPN::calculate(argv[1]) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return EXIT_SUCCESS;
}