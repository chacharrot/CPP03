#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("a");
	ClapTrap	b("b");
	ClapTrap	c("c");

	std::cout << std::endl;
	a.setDamage(2);
	b.setDamage(3);
	a.attack("b");
	b.takeDamage(a.getDamage());
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(b.getDamage());
	std::cout << std::endl;
	c.attack("b");
	b.takeDamage(c.getDamage());
	std::cout << std::endl;
	a.beRepaired(25);
	std::cout << std::endl;
	return (0);
}