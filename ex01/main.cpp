#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	cat("cat");
	ScavTrap	cat2 = cat;

	cat2.attack("cat");
	cat.takeDamage(cat2.getDamage());
	cat.attack("cat2");
	cat2.takeDamage(cat.getDamage());
	cat2.beRepaired(10);
	cat.beRepaired(10);

	cat2.guardGate();
	cat.guardGate();
}