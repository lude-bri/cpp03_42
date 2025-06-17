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

//Default Constructor
ScavTrap::ScavTrap() : ClapTrap("Default"){
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << YELLOW << "ScavTrap " << _name << " was definetely created!!" << RESET << std::endl;
}

//Copy Constructor
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
	std::cout << YELLOW << "ScavTrap copy constructor called for " << _name << RESET << std::endl;
}

//Copy assignment Operator
ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {
	if (this != &copy) {
		_name = copy._name;
		_hitPoints = copy._hitPoints;
		_energyPoints = copy._energyPoints;
		_attackDamage = copy._attackDamage;
	}
	std::cout << YELLOW << "ScavTrap copy assignment constructor called for " << _name << RESET << std::endl;
	return (*this);
}

//Constructor
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << YELLOW << "ScavTrap " << _name << " was definetely created!!" << RESET << std::endl;
}

//Destructor
ScavTrap::~ScavTrap(){
	std::cout << YELLOW << "ScavTrap " << _name << " was destroyed!!" << RESET << std::endl;
}

//ScavTrap Attack Methods
void	ScavTrap::attack(const std::string &target){
	if (_energyPoints <= 0 || _hitPoints <= 0)
		std::cout << YELLOW << "ScavTrap " << _name << " is out of energy or dead!" << RESET << std::endl;
	else {
		_energyPoints -= 1;
		std::cout << YELLOW << "ScavTrap " << _name << " violently attacks " 
			<< target << ", causing " << _attackDamage 
			<< " points of damage! " << "(Energy Points left: " << _energyPoints << ")" << RESET << std::endl;
	}
}

//ScavTrap Gatekeeper
void	ScavTrap::guardGate() {
	if (_energyPoints <= 0 || _hitPoints <= 0)
		std::cout << YELLOW << "ScavTrap " << _name << " is out of energy or dead!" << RESET << std::endl;
	else {
		_energyPoints -= 1;
		std::cout << YELLOW << "ScavTrap " << _name << " is now in Gatekeeper mode!" << RESET << std::endl;
	}
}
