#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	AAnimal *Animals[20];

	for (int i = 0; i < 20; ++i)
	{
		if (i < 10)
			Animals[i] = new Cat();
		else
			Animals[i] = new Dog();
	}
	for (int j = 0; j < 20; ++j)
		delete Animals[j];
	return 0;

	// AAnimal horse;
}