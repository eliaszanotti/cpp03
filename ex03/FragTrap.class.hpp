/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:57:10 by elias             #+#    #+#             */
/*   Updated: 2023/05/23 17:16:34 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include <iostream>

class	FragTrap: virtual public ClapTrap
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
