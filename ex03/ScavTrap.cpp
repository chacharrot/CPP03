#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << this << "ScavTrap constructor" << std::endl;
	_energypoints = 50;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor" << this <<  std::endl;
	_energypoints = 50;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other._name)
{
	_name = other._name;
	_energypoints = other._energypoints;
	_hitpoints = other._hitpoints;
	_attackdamage = other._attackdamage;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap " << this <<std::endl;
}

ScavTrap & ScavTrap::operator = (ScavTrap const &other)
{
	_name = other._name;
	_energypoints = other._energypoints;
	_hitpoints = other._hitpoints;
	_attackdamage = other._attackdamage;
	return *this;
}

void ScavTrap::attack(std::string const & target)
{
		std::cout << "ScavTrap " << _name << " attack " << target << " causing " << _attackdamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout <<"ScavTrap "<< this->_name << " have enterred in Gate keeper mode" << std::endl;
}