#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("Graves");

	std::cout << "Graves name is " << a.getName() << "." <<std::endl;
	std::cout << "Graves hp is " << a.getHitPoints() << "." <<std::endl;
	std::cout << "Graves energy Point is " << a.getEnergyPoints() << "." << std::endl;
	std::cout << "Graves attack dmg is " << a.getAttackDamage() << "." << std::endl;



	std::cout << std::endl << std::endl << std::endl;



	std::cout << "Graves energy point : " << a.getEnergyPoints() << std::endl;
	a.attack("arme");
	std::cout << "Graves energy points : " << a.getEnergyPoints() << std::endl;
	std::cout << "Graves hp is : " << a.getHitPoints() << std::endl;
	a.takeDamage(4);
	std::cout << "Graves hp is : " << a.getHitPoints() << std::endl;
	a.getEnergyPoints();
	a.beRepaired(2);
	std::cout << "Graves energy points : " << a.getEnergyPoints() << std::endl;
	std::cout << "Graves hp is : " << a.getHitPoints() << std::endl;

	std::cout << std::endl << std::endl << std::endl;

	a.guardGate();

}
