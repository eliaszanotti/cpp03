/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:35:50 by elias             #+#    #+#             */
/*   Updated: 2023/05/17 14:56:17 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

// Constructors
ClapTrap::ClapTrap()
{
	this->_name = "<null>";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "\e[32m[ClapTrap] " << this->_name << " created.\e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "\e[32m[ClapTrap] " << this->_name << " created.\e[0m" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std::cout << "\e[32m[ClapTrap] " << copy._name << " copied.\e[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\e[31m[ClapTrap] " << this->_name << " destroyed.\e[0m" << std::endl;
}

// Operators
ClapTrap	&ClapTrap::operator=(ClapTrap const &copy)
{
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
	std::cout << "\e[32m[ClapTrap] " << this->_name << " created by copy (" \
		<< copy.getName() << ")\e[0m" << std::endl;
	return (*this); 
}

// Methods
void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " \e[31mis dead\e[0m" \
			<< std::endl;
	else if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target \
			<< ", causing " << this->_attackDamage << " points of damage!" \
			<< std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " \e[31mhas no energy\e[0m" \
			<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " \e[31mtake " << amount \
			<< " points of damage !\e[0m" << std::endl;
		this->_hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name \
			<< " \e[31mis already dead\e[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)	
	{
		std::cout << "ClapTrap " << this->_name << " \e[32mget " << amount \
			<< " points!\e[0m" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}	
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " \e[31mis dead\e[0m" \
			<< std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " \e[31mhas no energy\e[0m" \
			<< std::endl;
}

// Getters
std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int			ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int			ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int			ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

// Setters
void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(int attackDamage)
{
	this->_attackDamage = attackDamage;
}
