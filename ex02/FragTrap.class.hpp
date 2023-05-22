/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:57:10 by elias             #+#    #+#             */
/*   Updated: 2023/05/22 15:56:32 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include <iostream>

class	FragTrap: public ClapTrap
{
	public:		
		// Constructors
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &copy);
		~FragTrap();

		// Operators
		FragTrap	&operator=(FragTrap const &copy);
	
		// Methods
		void	highFivesGuys(void);
};

#endif
