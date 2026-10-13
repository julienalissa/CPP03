#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# include <string>


class FragTrap : public ClapTrap
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
	void	highFivesGuys(void);
};



#endif
