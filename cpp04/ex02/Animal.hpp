#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
	protected :

		std::string _type;

	public :

		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif
