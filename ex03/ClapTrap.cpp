/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:04:55 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/16 22:10:57 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Default Constructor
ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << GREEN << "ClapTrap " << _name << " was created!!" << RESET << std::endl; 
}

//Copy Constructor
ClapTrap::ClapTrap(const ClapTrap  &copy) {
	*this = copy;
	std::cout << GREEN << "ClapTrap copy constructor called for " << _name << RESET << std::endl;
}

//Copy assignment Operator
ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
	if (this != &copy){
		_name = copy._name;
		_hitPoints = copy._hitPoints;
		_energyPoints = copy._energyPoints;
		_attackDamage = copy._attackDamage;
	}
	std::cout << GREEN << "ClapTrap copy assignment constructor called for " << _name << RESET << std::endl;
	return (*this);
}

//Constructor
ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << GREEN << "ClapTrap " << _name << " was created!!" << RESET << std::endl;
}

//Destructor
ClapTrap::~ClapTrap() {
	std::cout << GREEN << "ClapTrap " << _name << " was destroyed!" << RESET << std::endl;
}

//ClapTrap Attack Method
void	ClapTrap::attack(const std::string& target) {
	if (_energyPoints <= 0 || _hitPoints <= 0)
		std::cout << GREEN << "ClapTrap " << _name << " is out of energy or dead!" 
			<< RESET << std::endl;
	else {
		_energyPoints -= 1;
		std::cout << GREEN << "ClapTrap " << this->_name << " attacks "
			<< target << ", causing " << this->_attackDamage 
			<< " points of damage!" << "(Energy Points left: " << _energyPoints << ")"<< RESET << std::endl;
	}
}


//ClapTrap Damage Method
void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= 0)
		std::cout << GREEN << "ClapTrap " << _name << " is already dead!" << RESET << std::endl;
	else {
		_hitPoints = (_hitPoints > amount) ? (_hitPoints - amount) : 0;
		 std::cout << GREEN << "ClapTrap " << _name << " took " << amount 
			      << " damage! (" << _hitPoints << " HP left)" << RESET << std::endl;
	}
}

//ClapTrap Repair Method
void	ClapTrap::beRepaired(unsigned int amount) {

	if (_energyPoints <= 0 || _hitPoints <= 0)
		std::cout << GREEN << "ClapTrap doesn't have enough energy points to make this action" << RESET << std::endl;
	else {
		_energyPoints -= 1;
		_hitPoints += amount;
		std::cout << GREEN << "ClapTrap " << _name << " repaired itself by " 
              << amount << " HP! (Now: " << _hitPoints << " HP)" << RESET << std::endl;
	}
}
