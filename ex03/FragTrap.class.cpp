/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:55:21 by elias             #+#    #+#             */
/*   Updated: 2023/05/22 15:55:35 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"

// Constructors
FragTrap::FragTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "\e[32m[FragTrap] " << this->_name << " created.\e[0m" \
		<< std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "\e[32m[FragTrap] " << this->_name << " created.\e[0m" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy)
{
	std::cout << "\e[32m[FragTrap] " << copy._name << " copied.\e[0m" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\e[31m[FragTrap] " << this->_name << " destroyed.\e[0m" << std::endl;
}

// Operators
FragTrap	&FragTrap::operator=(FragTrap const &copy)
{
	ClapTrap::operator=(copy);
	std::cout << "\e[32m[FragTrap] " << this->_name << " created by copy (" << copy.getName() << ")\e[0m" << std::endl;
	return (*this);
}

// Methods
void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name \
		<< " \e[34mhigh five !!\e[0m" << std::endl;
}
