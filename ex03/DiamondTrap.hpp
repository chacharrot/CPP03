#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap
{
	private:
			std::string _name;
	public:
			DiamondTrap();
			DiamondTrap(const DiamondTrap &other);
			~DiamondTrap();
			DiamondTrap & operator = (DiamondTrap const &other);
			DiamondTrap(std::string name);

			void whoAmI();
};

#endif