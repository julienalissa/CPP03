#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private :
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public :
	// 4 Orthodox Canonical Form,
	ScavTrap();
	ScavTrap(const ClapTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap(void);

	// string constructor
	ScavTrap(const std::string &name);

	//specific
	void	guardGate();
	void	attack(const std::string &target);
};



#endif
