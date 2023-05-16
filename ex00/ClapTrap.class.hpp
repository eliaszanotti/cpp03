/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:25:26 by elias             #+#    #+#             */
/*   Updated: 2023/05/16 17:33:29 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

#include <iostream>

class	ClapTrap
{
	private:
		char	*_name;
		int		_hitPoints = 10;
		int		_energyPoints = 10;
		int		_attackDamage = 0;

	public:
		// Constructors
		ClapTrap();
		ClapTrap(char *name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap();
		
		// Operators
		ClapTrap	&operator=(ClapTrap const &copy);

		// Methods
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		// Getters
		char	*getName(void) const;
		int		getHitPoints(void) const;
		int		getEnergyPoints(void) const;
		int		getAttackDamage(void) const;

		// Setters
		void	setName(char *name);
		void	setHitPoints(int hitPoints);
		void	setEnergyPoints(int energyPoints);
		void	setAttackDamage(int attackDamage);
};

#endif
