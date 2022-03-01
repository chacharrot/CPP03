#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	cat("cat");
	DiamondTrap cat3("cat3");

	cat3.attack("cat");
	cat.takeDamage(cat3.getDamage());
	cat.attack("cat2");
	cat3.takeDamage(cat.getDamage());
	cat.attack("cat2");
	cat3.takeDamage(cat.getDamage());
	cat3.beRepaired(10);
	cat.beRepaired(10);

	cat3.highFivesGuys();
	cat3.guardGate();
	cat3.whoAmI();
	std::cout << cat3.ClapTrap::getName() << std::endl;
}