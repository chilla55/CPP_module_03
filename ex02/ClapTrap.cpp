/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 06:56:21 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 11:27:31 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Nobody"), _hitPoints(10), _enerPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _enerPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) : _name(obj._name), _hitPoints(obj._hitPoints), _enerPoints(obj._enerPoints), _attackDamage(obj._attackDamage)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_enerPoints = obj._enerPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_enerPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", inflicting " << _attackDamage << " damage points" << std::endl;
		_enerPoints--;
		return;
	}
	if (!_enerPoints)
	{
		std::cout << "ClapTrap " << _name << " is all out of energy" << std::endl;
		return;
	}	
	std::cout << "ClapTrap " << _name << " is KO" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is KO" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " received " << amount << " damage points" << std::endl;
	_hitPoints -= amount;
}


void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_enerPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is all out of energy" << std::endl;
		return ;
	}	
	std::cout << "ClapTrap " << _name << " gained " << amount << " hit points" << std::endl;
	_enerPoints -= amount;
	_hitPoints += amount;
}
