/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:24:50 by elias             #+#    #+#             */
/*   Updated: 2023/05/17 14:53:35 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	elias("ELias");
	ClapTrap	bob("Bob");

	elias.attack("Bob");
	elias.attack("Chris");
	elias.attack("Diana");
	elias.attack("Elisa");
	elias.attack("Tibo");
	elias.attack("Nipsey");
	elias.attack("Hussle");
	elias.attack("CJ");
	elias.attack("Lucas");
	elias.attack("Leon");
	elias.attack("Saile");
	elias.attack("Otti");
	while (bob.getHitPoints())
	{
		bob.takeDamage(2);
		bob.beRepaired(2);
	}
	bob.takeDamage(1);
	return (0);
}
