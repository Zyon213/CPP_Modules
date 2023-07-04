#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <exception>
#include <vector>
#include <list>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

#define MSEC 100000
class PmergeMe
{
	public :
		PmergeMe(void);
		PmergeMe(const PmergeMe& c_merge);
		PmergeMe& operator=(const PmergeMe& c_merge);
		~PmergeMe(void);

		void sortVector(int argc, char **argv);
		void sortList(int argc, char **argv);

		class InvalidElemntException : public std::exception {
			public :
				virtual const char* what() const throw ();
		};
};
#endif