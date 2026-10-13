#include "ClapTrap.hpp"

// 4 Orthodox Canonical Form,

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap : Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap : Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap : Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap : Destructor called" << std::endl;
}

//other constructor
ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(100), _energyPoints(10), _attackDamage(10)
{
	std::cout << "ClapTrap : String constructor called" << std::endl;
}

// get
std::string	ClapTrap::getName() const
{
	return(this->_name);
}

int	ClapTrap::getHitPoints() const
{
	return(this->_hitPoints);
}

int	ClapTrap::getEnergyPoints() const
{
	return(this->_energyPoints);
}
int	ClapTrap::getAttackDamage() const
{
	return(this->_attackDamage);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap : " << this->_name << " have no more energy point, I cant atack!" << std::endl;
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap : " << this->_name << " have no more hp, I cant attack!" << std::endl;
	}
	else
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap : " << this->_name << " cant heal, no more energy point !" << std::endl;
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap : " << this->_name << " cant heal, no more hp!" << std::endl;
	}
	else
	{
		this->_energyPoints--;
		this->_hitPoints = this->_hitPoints + amount;
		std::cout << "ClapTrap " << this->_name << " get " << amount << " hp, hp is now " << this->_hitPoints << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap : " << this->_name << " take dmg but is already dead!" << std::endl;
	}
	else
	{
		this->_hitPoints = this->_hitPoints - amount;
		if (this->_hitPoints < 0)
			_hitPoints = 0;
		if (this->_hitPoints <= 0)
			std::cout << "ClapTrap : " << this->_name << " take dmg I am dead!" << std::endl;
		else
			std::cout << "ClapTrap : " << this->_name << " take " << amount << " dmg" << std::endl;
	}

}
	void	ClapTrap::guardGate()
	{
		if (this->_energyPoints >= 1)
			std::cout << "I am on Gate keeper mode." << std::endl;
		else
			std::cout << "I cant go on Gate keeper mode because I am dead" << std::endl;
	}
