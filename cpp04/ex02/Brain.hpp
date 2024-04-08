#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

# define blue "\033[1;36m"
# define red "\033[1;31m"
# define yellow "\033[1;33m"
# define green "\033[1;32m"
# define reset "\033[0m"

class Brain
{

	private:

		std::string _ideas[100];
		void _fillBrain();

	public:

		Brain();
		virtual ~Brain();
		Brain(Brain &tmp);
		Brain	&operator=(Brain &eq);

};

#endif
