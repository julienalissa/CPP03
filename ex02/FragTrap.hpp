#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

# include <string>


class FragTrap : public ScavTrap
{
	public :
	// 4 Orthodox Canonical Form,
	FragTrap();
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	~FragTrap(void);

	// string constructor
	FragTrap(const std::string &name);

	//specific
	void	attack(const std::string &target);
};



#endif
