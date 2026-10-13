#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("Graves");
	std::cout << a.getEnergyPoints() << std::endl;
	a.attack("arme");
	std::cout << "energy p " << a.getEnergyPoints() << std::endl;
	a.takeDamage(4);
	std::cout << "hit p" << a.getHitPoints() << std::endl;
	a.getEnergyPoints();
	a.beRepaired(2);
	a.guardGate();

}
