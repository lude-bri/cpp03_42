/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:04:55 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/11 18:18:38 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << GREEN << "ClapTrap " << YELLOW << _name << GREEN << " was created!!" << RESET << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << RED << "ClapTrap " << YELLOW << _name << RED << " was destroyed!" << RESET << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (_energyPoints <= 0 || _hitPoints <= 0)
		std::cout << RED << "ClapTrap " << YELLOW << _name << RED << " is out of energy or dead!" << RESET << std::endl;
	else {
		_energyPoints -= 1;
		std::cout << BLUE << "ClapTrap " << YELLOW << this->_name << BLUE << " attacks " << YELLOW 
			<< target << BLUE << ", causing " << CYAN << this->_attackDamage << BLUE << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	//substract amount from _hitPoints
	//handle cases where _hitPoints drops below 0
	if (_hitPoints <= 0)
		std::cout << RED << "ClapTrap " << YELLOW << _name << RED << " is already dead!" << RESET << std::endl;
	else {
		_hitPoints = (_hitPoints > amount) ? (_hitPoints - amount) : 0;
		std::cout << YELLOW << "ClapTrap " << _name << " took " << amount 
			      << " damage! (" << _hitPoints << " HP left)" << RESET << std::endl;
	}
}
void	ClapTrap::beRepaired(unsigned int amount) {

	if (_energyPoints <= 0 || _hitPoints <= 0)
		std::cout << RED << "ClapTrap doesn't have enough energy points to make this action" << RESET << std::endl;
	else {
		_energyPoints -= 1;
		_hitPoints += amount;
		std::cout << GREEN << "ClapTrap " << YELLOW << _name << GREEN << " repaired itself by " 
              CYAN << amount << GREEN << " HP! (Now: " << _hitPoints << " HP)" << RESET << std::endl;	}
}
