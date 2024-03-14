
#ifndef WEAPON_HPP
# define WEAPON_HPP

# define blue "\033[1;36m"
# define red "\033[1;31m"
# define yellow "\033[1;33m"
# define green "\033[1;32m"
# define reset "\033[0m"

# include <iostream>

class Weapon
{
	private:

		std::string _type;

	public:
	
		Weapon(std::string type);
		~Weapon();

		void	setType(std::string type);
		const std::string	&getType() const;

};

#endif