/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:17:53 by elias             #+#    #+#             */
/*   Updated: 2023/05/23 16:24:31 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_H
# define DIAMONDTRAP_CLASS_H

# include "ScavTrap.class.hpp"
# include "FragTrap.class.hpp"
# include <iostream>

class DiamondTrap:	public ScavTrap, public FragTrap
{
	private:
		std::string	_name;

	public:
		// Constructors
		DiamondTrap();
		DiamondTrap(std::string const &name);
		DiamondTrap(DiamondTrap const &copy);
		~DiamondTrap();

		// Operators
		DiamondTrap	&operator=(DiamondTrap const &copy);

		// Methods
		void	whoAmI(void);
		void	attack(std::string const &target);
};

#endif