#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap constructor" << this <<  std::endl;
	_name = "default";
	_hitpoints = 100;
	_attackdamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap name constructor" << this <<  std::endl;
	_name = name;
	_hitpoints = 100;
	_attackdamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other._name)
{
	_name = other._name;
	_hitpoints = other._hitpoints;
	_attackdamage = other._attackdamage;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap " << this <<std::endl;
}

FragTrap & FragTrap::operator = (FragTrap const &other)
{
	_name = other._name;
	_hitpoints = other._hitpoints;
	_attackdamage = other._attackdamage;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " want a high five" << std::endl;
}