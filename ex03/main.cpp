/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:49:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/2 15:55:19 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.class.hpp"
#include <iostream>

int	main()
{
	DiamondTrap	elias("ELias");

	elias.attack("Bob");
	elias.attack("Chris");
	elias.whoAmI();
	elias.attack("Diana");
	elias.attack("Elisa");
	elias.attack("Tibo");
	elias.whoAmI();
	elias.attack("Nipsey");
	elias.attack("Hussle");
	elias.attack("CJ");
	elias.attack("Lucas");
	elias.whoAmI();
	elias.attack("Leon");
	elias.attack("Saile otti");
	return (0);
}
