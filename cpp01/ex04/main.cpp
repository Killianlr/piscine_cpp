
#include <iostream>
#include <fstream>

// void	find_and_replace(std::ifstream infile, std::ofstream outfile, std::string s1, std::string s2)
// {
// 	std::string line;

// 	while (!infile.eof())
// 	{
// 		getline(infile, line);
// 		if (line.find(s1))
// 		{
// 			std::cout << "occurence find !" << std::endl;
// 			line.erase(line.find(s1), s1.length());
// 			int	pos = line.find(s1);
// 			std::cout << "pos = " << pos << std::endl;
// 		}
// 		else
// 			std::cout << "occurence not find !" << std::endl;
// 	}
// }

int	main(int ac, char **av)
{
	std::ifstream infile;

	if (ac != 4)
	{
		std::cout << "Wrong arguments" << std::endl;
		return (1);
	}
	std::string s1 (av[2]);
	std::string s2 (av[3]);
	infile.open(av[1]);
	if (!infile.is_open())
	{
		std::cout << "Error opening infile" << std::endl;
		return (1);
	}
	std::string nameOutfile (av[1]);
	std::ofstream outfile (nameOutfile += ".replace");
	if (!outfile.is_open())
	{
		std::cout << "Error opening outfile" << std::endl;
		return (1);
	}
	std::string line;
	std::size_t		pos;

	while (!infile.eof())
	{
		getline(infile, line);
		pos = line.find(s1);
		if (pos != std::string::npos)
		{
			while (pos != std::string::npos)
			{
				line.erase(line.find(s1), s1.length());
				line.insert(pos, s2);
				pos = line.find(s1);
				if (pos == std::string::npos)
					outfile << line << std::endl;
			}
		}
		else
			outfile << line << std::endl;
	}
	return (0);
}