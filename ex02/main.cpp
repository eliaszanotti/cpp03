/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:49:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/22 15:55:19 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

int	main()
{
	FragTrap	elias("ELias");

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
