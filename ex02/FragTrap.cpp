#include "FragTrap.hpp"

// 4 Orthodox Canonical Form,

FragTrap::FragTrap() : ClapTrap()
{
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap : Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap : Copy constructor called" << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap : Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap : Destructor called" << std::endl;
}

//other constructor
FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap : String constructor called" << std::endl;
}
void FragTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "FragTrap : " << this->_name <<" have no more energy point, I cant atack!" << std::endl;
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << "FragTrap : " << this->_name << " have no more hp, I cant attack!" << std::endl;
	}
	else
	{
		this->_energyPoints--;
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

