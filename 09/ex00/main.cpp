#include "BitcoinExchange.hpp"

#define DB_FILE "./data.csv"
float ft_stof(const std::string& SData);

static int ft_error(std::string msg)
{
	std::cerr << "Error: "<< msg << std::endl;
	return EXIT_FAILURE;
}
int main(int argc, char **argv)
{
	if (argc != 2)
		return ft_error("could not open file.");

	std::ifstream inputDb(argv[1], std::ifstream::in);
	if (!inputDb.is_open())
		return ft_error("could not open file.");

	std::ifstream bitDb(DB_FILE, std::ifstream::in);
	if (!bitDb.is_open())
		return ft_error("could not open file.");
	
	BitcoinExchange bit;
	bit.readDb(bitDb);

	std::string line;
	// std::map<std::string, float> db;
	// db = bit.getDB();
	// std::map<std::string, float>::iterator it;
	// for (it = db.begin(); it != db.end(); ++it)
	// 	std::cout << it->first << " <=> " << it->second << std::endl;
	std::getline(inputDb, line);
	while (std::getline(inputDb, line))
	{
		size_t delim = line.find('|');
		if (delim == std::string::npos 
		|| line.length() < delim + 2)
		{
			std::cerr << "Error: bad input. " << " => "<< line <<std::endl;
			continue;
		}

		std::string date = line.substr(0, delim - 1);
		if (!bit.isValidDateFormat(date) || !bit.isValidDate(date))
			continue;
		
		std::string Data = line.substr(delim + 2);
		// std::cout <<"Data =>"<< Data <<"<"<< std::endl;
		if (!bit.isValidData(Data))
			continue;

		float bitData = ft_stof(Data);
		// std::cout << date << " => " << bitData << " * " << bit.getData(date) << " = "<< std::setprecision(2) << bitData * bit.getData(date) << std::endl;
		std::cout << date << " => " << bitData << " = "<< std::setprecision(2) << bitData * bit.getData(date) << std::endl;
	}
	inputDb.close();
	bitDb.close();
	return (0);
}