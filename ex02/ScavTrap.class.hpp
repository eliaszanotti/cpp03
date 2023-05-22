/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:55:43 by elias             #+#    #+#             */
/*   Updated: 2023/05/22 15:56:13 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include <iostream>

class	ScavTrap: public ClapTrap
{
	public:
		// Constructors
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();

		// Operators
		ScavTrap	&operator=(ScavTrap const &copy);
	
		// Methods
		void	guardGate(void);
};

#endif
