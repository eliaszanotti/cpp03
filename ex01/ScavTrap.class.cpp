/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:55:31 by elias             #+#    #+#             */
/*   Updated: 2023/05/17 14:56:32 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

// Constructors
ScavTrap::ScavTrap()
{
	std::cout << "\e[32m[ScavTrap] " << this->_name << " created.\e[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string &name): ClapTrap(name)
{
	std::cout << "\e[32m[ScavTrap] " << this->_name << " created.\e[0m" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
	std::cout << "\e[32m[ScavTrap] " << copy._name << " copied.\e[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\e[31m[ScavTrap] " << this->_name << " destroyed.\e[0m" << std::endl;
}

// Operators
ScavTrap	&ScavTrap::operator=(ScavTrap const &copy)
{
	ClapTrap::operator=(copy);
	std::cout << "\e[32m[ScavTrap] " << this->_name << " created by copy (" \
		<< copy.getName() << ")\e[0m" << std::endl;
	return (*this);
}

// Methods
void	ScavTrap::guardGate(void)
{
	if (this->_energyPoints >= 0)
		std::cout << "ScavTrap " << this->_name << " \e[31mswitch to gate keeper\e[0m" \
			<< std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " \e[31mhas no energy\e[0m" \
			<< std::endl;
}
