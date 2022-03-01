#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
			std::string _name;
			unsigned int _hitpoints;
			unsigned int _energypoints;
			unsigned int _attackdamage;
	public:
			ClapTrap();
			ClapTrap(ClapTrap &other);
			~ClapTrap();
			ClapTrap & operator = (ClapTrap const &other);
			ClapTrap(std::string name);

			void attack(std::string const & target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);

			void setDamage(unsigned int amount);
			unsigned int getDamage();
};


#endif