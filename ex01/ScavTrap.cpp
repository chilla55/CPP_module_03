/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 08:46:17 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 09:34:42 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_hitPoints = 100;
	_enerPoints = 50;
	_attackDamage = 20;
}
ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_enerPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj._name)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_enerPoints = obj._enerPoints;
	_attackDamage = obj._attackDamage;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "ScavTrap copy assigment operator called" << std::endl;
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_enerPoints = obj._enerPoints;
	_attackDamage = obj._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_enerPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", inflicting " << _attackDamage << " damage points" << std::endl;
		_enerPoints--;
		return;
	}
	if (!_enerPoints)
	{
		std::cout << "ScavTrap " << _name << " is all out of energy" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " is KO" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}
