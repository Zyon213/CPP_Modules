#include "BitcoinExchange.hpp"

float ft_stof(const std::string& SData)
{
	float Data;
	std::stringstream ss(SData);

	ss >> Data;
	return Data; 
}

static unsigned int ft_stou(const std::string& date)
{
	unsigned int num;
	std::stringstream ss(date);

	ss >> num;
	return (num);
}

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& bitcoin)
{
	*this = bitcoin;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& bitdb)
{
	this->bitDB = bitdb.bitDB;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

float BitcoinExchange::getData(const std::string& date)
{
	if (this->bitDB.count(date) > 0)
		return (this->bitDB.at(date));
	return (--this->bitDB.lower_bound(date))->second;
}

void BitcoinExchange::readDb(std::ifstream& inFile)
{
	std::string line;
	size_t delim;

	std::getline(inFile, line);
	while (std::getline(inFile, line))
	{
		delim = line.find(',');
		std::string Data = line.substr(delim + 1);
		this->bitDB[line.substr(0, delim)] = ft_stof(Data);
		// std::cout << line.substr(0, delim) << " => " << Data << std::endl;
	}
	// std::map<std::string, float>::iterator it;
	// for (it = bitDB.begin(); it != bitDB.end(); ++it)
	// 	std::cout << it->first << " <=> " << it->second << std::endl;
	inFile.close();
}

bool BitcoinExchange::isValidDateFormat(const std::string& date)
{
	if (date.empty())
		return (false);
	
	size_t first = date.find('-');
	size_t second = date.find('-', first + 1);
	if (first == std::string::npos || second == std::string::npos
	|| date.find_first_not_of("0123456789.-") != std::string::npos)
	{
		std::cerr << "Error: bad input." << " => " << date << std::endl;
		return (false);
	}
	return true;

}

bool BitcoinExchange::isValidData(const std::string& data)
{
	if (data.empty() || data.find_first_not_of("0123456789.-") != std::string::npos 
	|| data.at(0) == '.' || data.find('.', data.length() - 1) != std::string::npos)
		std::cerr << "Error: bad input." << std::endl;
	else if (data.at(0) == '-')
		std::cerr << "Error: not a positive number." << std::endl;
	else if (data.length() > 10 || (data.length() == 10 && data > "2147483647"))
		std::cerr << "Error: too large a number." << std::endl;
	else
		return true;
	return false;
}

bool BitcoinExchange::isValidDate(const std::string& date)
{
	std::string str;
	int year, month, day;
	std::stringstream ss(date);
	int i = 0;

	while (std::getline(ss, str, '-'))
	{
		if (i == 0)
		{
			year = ft_stou(str);
			if (year < 2009 || year > 2022)
			{
				std::cerr << "Error: year not found in database." << std::endl;
				return false;
			}
		}
		if (i == 1)
		{
			month = ft_stou(str);
			if (month < 1 || month > 12)
			{
				std::cerr << "Error: not correct month." << std::endl;
				return false;
			}
		}
		if (i == 2)
		{
			day = ft_stou(str);
			if ((day < 1 || day > 31)
			|| (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
			|| (day > 28 && month == 2))
			{
				std::cerr << "Error: not correct day." << std::endl;
				return false;
			}
		}
		i++;
	}
	if (i != 3)
	{
		std::cerr << "Error: not correct date." << std::endl;
		return false;
	}
	return true;
}

std::map<std::string, float> BitcoinExchange::getDB(void)
{
	return this->bitDB;
}