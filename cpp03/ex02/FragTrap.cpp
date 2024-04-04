
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