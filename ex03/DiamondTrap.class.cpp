/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:17:58 by elias             #+#    #+#             */
/*   Updated: 2023/05/23 17:18:52 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.class.hpp"

// Constructors
DiamondTrap::DiamondTrap()
{	
	ClapTrap::_name = "default_clap";
	std::cout << "\e[33m[DiamondTrap] " << this->_name << " created.\e[1m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name): ClapTrap(name + "_clap")
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "\e[32m[DiamondTrap] " << this->_name << " created.\e[1m" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
	std::cout << "\e[32m[DiamondTrap] " << copy._name << " copied.\e[1m" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\e[31m[DiamondTrap] " << this->_name << " destroyed.\e[0m" << std::endl;
}

// Operators
DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &copy)
{
    return (*this);
}

// Methods
void	DiamondTrap::whoAmI(void)
{
	std::cout << "\e[31m[DiamondTrap] " << this->_name << " ClapTrap name : " << std::endl;
}
	
void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}