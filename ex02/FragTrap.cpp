/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 08:46:17 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 09:34:36 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	_hitPoints = 100;
	_enerPoints = 100;
	_attackDamage = 30;
}
FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_enerPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &obj): ClapTrap(obj._name)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_enerPoints = obj._enerPoints;
	_attackDamage = obj._attackDamage;
}

FragTrap&	FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "FragTrap copy assigment operator called" << std::endl;
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_enerPoints = obj._enerPoints;
	_attackDamage = obj._attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (_enerPoints > 0 && _hitPoints > 0)
	{
		std::cout << "FragTrap " << _name << " attacks " << target << ", inflicting " << _attackDamage << " damage points" << std::endl;
		_enerPoints--;
		return;
	}
	if (!_enerPoints)
	{
		std::cout << "FragTrap " << _name << " is all out of energy" << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " is KO" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << _name << " gives a High Fives (＾▽＾)／＼(＾▽＾)" << std::endl;
}
