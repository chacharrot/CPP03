#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap	cat("cat");
	FragTrap	cat2("cat2");

	cat2.attack("cat");
	cat.takeDamage(cat2.getDamage());
	cat.attack("cat2");
	cat2.takeDamage(cat.getDamage());
	cat2.beRepaired(10);
	cat.beRepaired(10);

	cat2.highFivesGuys();
	cat.guardGate();
}