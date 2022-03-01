#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &other);
		~ScavTrap();
		ScavTrap & operator = (ScavTrap const &other);
		ScavTrap(std::string addName);

		void guardGate();
		void attack(std::string const & target);
};

#endif
