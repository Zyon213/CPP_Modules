#include "PmergeMe.hpp"

unsigned int ft_stou(const std::string& str);

int main(int argc, char **argv)
{
	if (argc == 1)
		return EXIT_SUCCESS;

	PmergeMe pmerge;

	try
	{
		for (int i = 1; i < argc; i++)
		{
			if (std::string(argv[i]).find_first_not_of("0123456789 ") != std::string::npos)
				throw PmergeMe::InvalidElemntException();
		}
	}
	catch (std::exception& e) {
		std::cerr << e.what() << '\n';
		return EXIT_FAILURE;
	}
	pmerge.sortVector(argc, argv);
	pmerge.sortList(argc, argv);

	return EXIT_SUCCESS;
}
