#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
			FragTrap();
			FragTrap(const FragTrap &other);
			~FragTrap();
			FragTrap & operator = (FragTrap const &other);
			FragTrap(std::string addName);

			void highFivesGuys(void);
};

#endif
