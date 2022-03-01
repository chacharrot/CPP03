#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hitpoints(10), _energypoints(10), _attackdamage(0)
{
	std::cout << "ClapTrap defalut is appeared." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " is disappeared." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0)
{
	std::cout << "ClapTrap " << this->_name << " is appeared." << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", cauing " << this->_attackdamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints >= amount)
	{
		this->_hitpoints -= amount;
		std::cout << "ClapTrap " << this->_name << " takes damage " << amount << " points" << std::endl;
		std::cout << "ClapTrap " << this->_name << " has " << this->_hitpoints << " hitpoint" << std::endl;
	}
	else
	{
		this->_hitpoints = 0;
		std::cout << "ClapTrap " << this->_name << " takes damage " << amount << " points" << std::endl;
		std::cout << "ClapTrap " << this->_name << " is dead " << std::endl;
	}
}

unsigned int ClapTrap::getDamage()
{
	return this->_attackdamage;
}

void ClapTrap::setDamage(unsigned int amount)
{
	this->_attackdamage = amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	std::cout << "ClapTrap " << this->_name << " received healing by someone" << amount << " points" << std::endl;
}

ClapTrap & ClapTrap::operator = (ClapTrap const &other)
{
	_name = other._name;
	_hitpoints = other._hitpoints;
	_energypoints = other._energypoints;
	_attackdamage = other._attackdamage;
	return *this;
}