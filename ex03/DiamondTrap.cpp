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

//Default Constructor
DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap() {
	ScavTrap	scav;

	_name = "Default";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = scav.getEnergyPoints();
	_attackDamage = FragTrap::_attackDamage;

	std::cout << CYAN << "DiamondTrap " << _name << " was created! " << RESET << std::endl;
}

//Copy Constructor
DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy) {
	std::cout << CYAN << "DiamondTrap copy constructor called for " << _name << RESET << std::endl;
}

//Copy assignment Operator
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy) {
	if (this != &copy) {
		_name = copy._name;
		_hitPoints = copy._hitPoints;
		_energyPoints = copy._energyPoints;
		_attackDamage = copy._attackDamage;
		ClapTrap::_name = copy.ClapTrap::_name;
		std::cout << CYAN << "Diamond copy assignment constructor called for " << _name << RESET << std::endl;
	}
	return (*this);
}

//Constructor
DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"),
	ScavTrap(name), FragTrap(name), _name(name) {

	ScavTrap    scav;

	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = scav.getEnergyPoints();
	_attackDamage = FragTrap::_attackDamage;

	std::cout << CYAN << "DiamondTrap " << _name << " was created! " << RESET << std::endl;
}

//Destructor
DiamondTrap::~DiamondTrap(){
	std::cout << CYAN << "DiamondTrap " << _name << " was sonely destroyed!" << RESET << std::endl;
}

//DiamondTrap Who Am I Method
void	DiamondTrap::whoAmI() {
	std::cout << CYAN << "My name is " << _name << RESET << std::endl;
	std::cout << GREEN << "My ClapTrap name is " << ClapTrap::_name << RESET << std::endl;
}

//DiamondTrap Attack Method that is the same that ScavTrap's
void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}
