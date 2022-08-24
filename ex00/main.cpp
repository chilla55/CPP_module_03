/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:50:37 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 10:23:09 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	*a = new ClapTrap("Heimdall");
	
	(*a).attack("Hel");
	(*a).takeDamage(5);
	(*a).beRepaired(9);

	ClapTrap *b = new ClapTrap("Ragnarok");
	ClapTrap *c = new ClapTrap(*b);
	(*b) = (*c);
	(*a).attack("Thor");
	(*a).takeDamage(15);

	(*b).beRepaired(1);
	(*b).takeDamage(14);


	std::cout << std::endl << "deconstructor ClapTrap" << std::endl;
	delete a;
	std::cout << std::endl << "deconstructor ClapTrap" << std::endl;
	delete b;
	std::cout << std::endl << "deconstructor ClapTrap" << std::endl;
	delete c;


	return (0);

}
