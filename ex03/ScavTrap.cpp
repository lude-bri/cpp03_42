/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:10:16 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/16 22:12:14 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << GREEN << "ScavTrap " << YELLOW << _name << GREEN << " was created!!" << RESET << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << RED << "ScavTrap " << YELLOW << _name << RED << " was destroyed!!" << RESET << std::endl;
};

void	ScavTrap::attack(const std::string &target){
	if (_energyPoints <= 0 || _hitPoints <= 0)
		std::cout << RED << "ScavTrap " << YELLOW << _name << RED << " is out of energy or dead!" << RESET << std::endl;
	else {
		_energyPoints -= 1;
		std::cout << BLUE << "ScavTrap " << YELLOW << _name << BLUE << " violently attacks " 
			YELLOW << target << BLUE << ", causing " << CYAN << _attackDamage << BLUE 
			<< " points of damage!" << RESET << std::endl;
	}
}

void	ScavTrap::guardGate() {
	std::cout << MAGENTA << "ScavTrap " << _name << " is now in Gatekeeper mode!" << RESET << std::endl;
}
