/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:24:50 by elias             #+#    #+#             */
/*   Updated: 2023/05/17 16:18:10 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include <iostream>

int	main(void)
{
	ScavTrap	elias("ELias");

	elias.attack("Bob");
	elias.takeDamage(2);
	elias.attack("Chris");
	elias.attack("Diana");
	elias.attack("Elisa");
	elias.beRepaired(2);
	elias.attack("Tibo");
	elias.beRepaired(2);
	elias.attack("Nipsey");
	elias.attack("Hussle");
	elias.beRepaired(2);
	elias.attack("CJ");
	elias.attack("Lucas");
	elias.takeDamage(4);
	elias.attack("Leon");
	elias.takeDamage(4);
	elias.takeDamage(4);
	elias.takeDamage(4);
	elias.takeDamage(4);
	elias.attack("Saile otti");
	return (0);
}
