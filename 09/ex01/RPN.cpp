#include "RPN.hpp"

RPN::RPN(void) {}

RPN::RPN(const RPN& c_rpn)
{
	*this = c_rpn;
}

RPN& RPN::operator=(const RPN& c_rpn)
{
	(void)c_rpn;
	return (*this);
}

RPN::~RPN(void) {}

const char* RPN::NoResultException::what() const throw() {
	return "RPN exception: invalid format.";
}

const char* RPN::DivistionByZeroException::what() const throw() {
	return "RPN exception: division by zero.";
}

bool RPN::is_valid_exp(const std::string& str)
{
	if (str.find_first_not_of("0123456789+-/* ") == std::string::npos)
		return true;
	return false;
}

static int ft_stoi(const std::string& str)
{
	int num;
	std::stringstream ss(str);

	ss >> num;
	return (num);
}

long long RPN::calculate(const std::string& expr)
{
	int left;
	int right;
	int result;
	std::stringstream ss(expr);
	std::stack<int> exp_stack;
	std::string str;

	while (ss >> str)
	{
		if (str == "+" || str == "-" || str == "*" || str == "/")
		{
			if (exp_stack.size() < 2)
				throw NoResultException();
			right = exp_stack.top();
			exp_stack.pop();
			left = exp_stack.top();
			exp_stack.pop();
			switch (str.at(0))
			{
			case '+' : result = left + right;
				break;
			case '-' : result = left - right;
				break;
			case '*' : result = left * right;
				break;
			case '/' : 
				if (right != 0)
					result = left / right;
				else
					throw DivistionByZeroException();
				break;
			}
			exp_stack.push(result);
		}
		else
			exp_stack.push(ft_stoi(str));
	}
	return exp_stack.top();
}