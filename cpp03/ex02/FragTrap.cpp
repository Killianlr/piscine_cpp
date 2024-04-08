
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap::ClapTrap("FragTrap")
{
    std::cout << "FragTrap " << green << "no name FragTrap constructor called" << reset << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << red << "destructor called" << reset << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
    std::cout << "FragTrap " << green << "constructor called" << reset << std::endl;
}

FragTrap::FragTrap(FragTrap &tmp) : ClapTrap()
{
    std::cout << "Copy FragTrap constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &tmp)
{
    this->_attackDamage = tmp._attackDamage;
	this->_name = tmp._name;
	this->_hitPoints = tmp._hitPoints;
	this->_energyPoints = tmp._energyPoints;
	return (*this);
}

void    FragTrap::highFivesGuys() const
{
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠒⢀⣠⠒⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣡⠈⠱⡗⠉⢮⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⡁⠀⢀⡇⠀⢸⢃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠁⠀⠠⡇⠀⠐⡷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠀⠀⢰⠅⠀⠀⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠶⠀⠀⢸⡆⠀⠀⣯⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣮⠇⠀⠀⢸⡇⠀⠀⠺⣗⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠎⠀⠀⠀⢸⡷⠀⠀⠐⣯⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣟⠁⠀⠀⠀⢸⡇⠀⠀⠀⡩⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠏⠀⠀⠀⠀⢼⡏⠀⠀⠀⠘⡵⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡎⠌⠀⠀⠀⠀⢺⣇⠀⠀⠀⠀⠵⣓⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠞⠀⠀⠀⠀⠀⠀⣻⣧⠀⠀⠀⠀⠈⠔⢳⡀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
std::cout << "⠀⠀⠀⠀⠀⠀⣀⣠⡶⡖⠉⠂⠀⠀⠀⠀⠀⡐⣿⣿⡀⠀⠀⠀⠀⠈⠢⠙⢲⣶⣄⡀⠀⠀⠀⠀" << std::endl;
std::cout << "⠀⠀⣀⣤⣴⣿⣿⣿⣷⡄⠀⠀⠀⠀⠀⢀⡰⣭⣿⣿⡥⣀⠠⠀⠀⠀⠀⠈⣶⣿⣿⣿⣿⣦⣄⣀" << std::endl;
std::cout << "⠰⣾⣿⣿⣿⣿⡻⢧⢏⡳⣄⠀⠀⠀⣘⣦⡷⠛⠉⠈⠛⢳⣦⡑⠀⠀⠀⣴⣛⠾⣽⣻⣿⣿⣿⣿" << std::endl;
std::cout << "⢘⣿⣿⡟⣷⣣⠟⡭⢎⡱⣌⠷⣤⣸⣵⣿⠀⠀⠀⠀⠀⠀⢿⣗⣦⣤⡞⣣⢎⡽⢣⣟⢷⣻⣿⣿" << std::endl;
std::cout << "⠰⣿⣳⡻⣵⢋⡞⣱⢣⡳⣜⣿⣿⣿⡿⠁⠀⠀⠀⠀⠀⠀⠈⢻⣿⣿⣞⡵⣪⣜⢳⢮⣻⢽⡾⣿" << std::endl;
std::cout << "⠈⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉" << std::endl;
}