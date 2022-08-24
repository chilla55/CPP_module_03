/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:50:37 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 10:00:48 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	*a = new ClapTrap("Heimdall");
	
	(*a).attack("Hel");
	(*a).takeDamage(5);
	(*a).beRepaired(9);

	ScavTrap *b = new ScavTrap("Ragnarok");
	ScavTrap *c = new ScavTrap(*b);
	(*b) = (*c);
	(*a).attack("Thor");
	(*a).takeDamage(15);
	(*c).guardGate();

	(*b).beRepaired(1);
	(*b).takeDamage(14);
	(*c).guardGate();

	FragTrap	*d = new FragTrap("Freya");
	(*d).highFivesGuys();



	std::cout << std::endl << "deconstructor ClapTrap" << std::endl;
	delete a;
	std::cout << std::endl << "deconstructor ScavTrap" << std::endl;
	delete b;
	std::cout << std::endl << "deconstructor ScavTrap" << std::endl;
	delete c;
	std::cout << std::endl << "deconstructor FragTrap" << std::endl;
	delete d;


	return (0);

}