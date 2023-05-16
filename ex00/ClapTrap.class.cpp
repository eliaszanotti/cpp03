/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:35:50 by elias             #+#    #+#             */
/*   Updated: 2023/05/16 17:53:34 by elias            ###   ########.fr       */
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
	std::cout << "\e[32m[INFO] " << this->_name << " created." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "\e[32m[INFO] " << this->_name << " created." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std::cout << "\e[32m[INFO] " << copy._name << " copied." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\e[31m[INFO] " << this->_name << " destroyed." << std::endl;
}

// Operators
ClapTrap&	ClapTrap::operator=(ClapTrap const &copy)
{
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
	std::cout << "\e[32m[INFO] " << this->_name << " created by copy (" \
		<< copy.getName() << ")" << std::endl;
	return (*this); 
}

// Methods
void	ClapTrap::attack(const std::string& target)
{

}

void	ClapTrap::takeDamage(unsigned int amount)
{
}
void	ClapTrap::beRepaired(unsigned int amount)
{
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
