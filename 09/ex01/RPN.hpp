#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <exception>
#include <iostream>
#include <stack>
#include <sstream>

/* 
Reverse Polish notation (RPN) Polish postfix notation or simply postfix notation,
 is a mathematical notation in which operators follow their operands, 
 in contrast to Polish notation (PN), in which operators precede their operands. 
 */

class RPN
{
	public:
		RPN(void);
		RPN(const RPN& c_rpn);
		RPN& operator=(const RPN& c_rpn);
		~RPN(void);

		static bool is_valid_exp(const std::string& str);
		static long long calculate(const std::string& expr);

		class NoResultException : public std::exception {
			public :
				virtual const char* what() const throw();
		};

		class DivistionByZeroException : public std::exception {
			public :
				virtual const char* what() const throw();
		};

};

#endif