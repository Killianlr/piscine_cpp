#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int	main(void)
// {
// 	Cat cat;
// 	Dog dog;

// 	cat.makeSound();
// 	dog.makeSound();
// }

int main()
{
	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	meta->makeSound();
	j->makeSound();
	i->makeSound();

	delete(i);
	delete(j);
	delete(meta);

	return 0;
}