#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>

class BitcoinExchange
{
	private:
		std::map<std::string, float> bitDB;
	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& bitcoin);
		BitcoinExchange& operator=(const BitcoinExchange& bitdb);
		~BitcoinExchange();

		float getData(const std::string& date);
		void readDb(std::ifstream& inFile);
		bool isValidDateFormat(const std::string& date);
		bool isValidData(const std::string& data);
		bool isValidDate(const std::string& date);
		std::map<std::string, float> getDB(void);
};
#endif