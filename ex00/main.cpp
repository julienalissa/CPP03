#include "ClapTrap.hpp"


int	main(void)
{
	ClapTrap a("Graves");
	std::cout << a.getEnergyPoints() << std::endl;
	a.attack("arme");
	std::cout << "energy p " << a.getEnergyPoints() << std::endl;
	a.takeDamage(4);
	std::cout << "hit p" << a.getHitPoints() << std::endl;
	a.getEnergyPoints();
	a.beRepaired(2);
	

}
