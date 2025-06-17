/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:09:56 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/16 22:09:57 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"),
	ScavTrap(name), FragTrap(name), _name(name) {

	ScavTrap    scav("energy");

	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = scav.getEnergyPoints();
	_attackDamage = FragTrap::_attackDamage;

	std::cout << GREEN << "DiamondTrap " << YELLOW << _name << GREEN
		<< " was created! " << RESET << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << RED << "DiamondTrap " << YELLOW << _name << RED
		<< " was sonely destroyed!" << RESET << std::endl;
}
