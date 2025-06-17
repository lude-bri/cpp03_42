/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 21:36:48 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/16 22:04:22 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << BLUE << "FragTrap " << _name << " was FREAKING created!"
		<< RESET << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << BLUE << "FragTrap " << _name << " was FREAKING destroyed!"
		<< RESET << std::endl;
}

void	FragTrap::highFiveGuys(void) {
	std::cout << BLUE << "FragTrap " << _name << " gives you a very nice high five!" << RESET << std::endl;
}
