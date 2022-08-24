/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 08:46:17 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 10:15:13 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void) :  ClapTrap("Nonody_clap_name"), ScavTrap("Nonody"), FragTrap("Nonody")
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	ClapTrap::_name = "Nonody_clap_name";
	_hitPoints = 100;
	_enerPoints = 100;
	_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) :  ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = 100;
	_enerPoints = 100;
	_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj._name + "_clap_name"), ScavTrap(obj._name), FragTrap(obj._name), _name(obj._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	ClapTrap::_name = obj._name + "_clap_name";
	_hitPoints = obj._hitPoints;
	_enerPoints = obj._enerPoints;
	_attackDamage = obj._attackDamage;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "DiamondTrap copy assigment operator called" << std::endl;
	_hitPoints = obj._hitPoints;
	_enerPoints = obj._enerPoints;
	_attackDamage = obj._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	if (_enerPoints > 0 && _hitPoints > 0)
	{
		std::cout << "DiamondTrap " << _name << " attacks " << target << ", inflicting " << _attackDamage << " damage points" << std::endl;
		_enerPoints--;
		return;
	}
	if (!_enerPoints)
	{
		std::cout << "DiamondTrap " << _name << " is all out of energy" << std::endl;
		return;
	}
	std::cout << "DiamondTrap " << _name << " is KO" << std::endl;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name is " << _name << " and ClapTrap name is " << ClapTrap::_name << std::endl;
}
