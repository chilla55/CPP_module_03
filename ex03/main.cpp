/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:50:37 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 10:22:05 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

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

	(*b).beRepaired(1);
	(*b).takeDamage(14);

	FragTrap	*d = new FragTrap("Freya");
	(*d).highFivesGuys();

	std::cout << "DiamondTrap:" << std::endl << std::endl;
	DiamondTrap	e("Loki");
	e.attack("Odin");
	e.beRepaired(10);
	e.highFivesGuys();
	e.whoAmI();



	std::cout << std::endl << "deconstructor ClapTrap" << std::endl;
	delete a;
	std::cout << std::endl << "deconstructor ScavTrap" << std::endl;
	delete b;
	std::cout << std::endl << "deconstructor ScavTrap" << std::endl;
	delete c;
	std::cout << std::endl << "deconstructor FragTrap" << std::endl;
	delete d;
	std::cout << std::endl << "deconstructor DiamondTrap" << std::endl;


	return (0);

}
