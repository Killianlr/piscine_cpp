
#include <iostream>
#include <fstream>

void	find_and_replace(std::ifstream infile, std::ofstream outfile, std::string s1, std::string s2)
{
	std::string line;

	while (!infile.eof())
	{
		getline(infile, line);
		if (line.find(s1))
		{
			line.erase(line.find(s1));
			int	pos = line.find(s1);
			for (int i = 0; i < s1.length(); ++i)
			{
				line.insert()
			}
		}

	}
}

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
	find_and_replace(infile, outfile, s1, s2);
	return (0);
}