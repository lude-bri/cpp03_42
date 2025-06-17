/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:16:44 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/16 16:22:36 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << YELLOW << "ScavTrap " << _name << " was definetely created!!" << RESET << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << YELLOW << "ScavTrap " << _name << " was destroyed!!" << RESET << std::endl;
}

void	ScavTrap::attack(const std::string &target){
	if (_energyPoints <= 0 || _hitPoints <= 0)
		std::cout << YELLOW << "ScavTrap " << _name << " is out of energy or dead!" << RESET << std::endl;
	else {
		_energyPoints -= 1;
		std::cout << YELLOW << "ScavTrap " << _name << " violently attacks " 
			<< target << ", causing " << _attackDamage 
			<< " points of damage!" << RESET << std::endl;
	}
}

void	ScavTrap::guardGate() {
	std::cout << YELLOW << "ScavTrap " << _name << " is now in Gatekeeper mode!" << RESET << std::endl;
}
