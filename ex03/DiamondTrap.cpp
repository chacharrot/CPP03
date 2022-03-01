#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap constructor" << this <<  std::endl;
	_name = "default";
	_hitpoints = this->FragTrap::_hitpoints;
	_energypoints = this->ScavTrap::_energypoints;
	_attackdamage = this->FragTrap::_attackdamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap name constructor" << this <<  std::endl;
	_name = name;
	_hitpoints = this->FragTrap::_hitpoints;
	_energypoints = this->ScavTrap::_energypoints;
	_attackdamage = this->FragTrap::_attackdamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other._name), ScavTrap(other._name), FragTrap(other._name)
{
	_name = other._name;
	_hitpoints = other._hitpoints;
	_energypoints = other._energypoints;
	_attackdamage = other._attackdamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap " << this <<std::endl;
}

DiamondTrap & DiamondTrap::operator = (DiamondTrap const &other)
{
	_name = other._name;
	_hitpoints = other._hitpoints;
	_energypoints = other._energypoints;
	_attackdamage = other._attackdamage;
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << this->_name << " is inherited class by other Trap" << std::endl;
}