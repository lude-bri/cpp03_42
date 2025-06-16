/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 21:36:48 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/16 22:02:07 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << GREEN << "FragTrap " << YELLOW << _name << GREEN << " was FREAKING created!"
		<< RESET << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << RED << "FragTrap " << YELLOW << _name << RED << " was FREAKING destroyed!"
		<< RESET << std::endl;
}

void	FragTrap::highFiveGuys(void) {}
