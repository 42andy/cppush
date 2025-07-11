#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name) {} 

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " is destroyed." << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
