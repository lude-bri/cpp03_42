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

//Default Constructor
FragTrap::FragTrap() : ClapTrap("Default") {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << BLUE << "FragTrap " << _name << " was FREAKING created" << RESET << std::endl;
}

//Copy Constructor
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
	std::cout << BLUE << "FragTrap copy constructor called for " << _name << RESET << std::endl;
}

//Copy assignment Operator
FragTrap &FragTrap::operator=(const FragTrap &copy) {
	if (this != &copy) {
		_name = copy._name;
		_hitPoints = copy._hitPoints;
		_energyPoints = copy._energyPoints;
		_attackDamage = copy._attackDamage;
		std::cout << BLUE << "FragTrap copy assignment constructor called for " << _name << RESET << std::endl;
	}
	return (*this);
}

//Constructor
FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << BLUE << "FragTrap " << _name << " was FREAKING created!"
		<< RESET << std::endl;
}

//Destructor
FragTrap::~FragTrap(){
	std::cout << BLUE << "FragTrap " << _name << " was FREAKING destroyed!"
		<< RESET << std::endl;
}

//FragTrap highFive!!
void	FragTrap::highFivesGuys(void) {
	std::cout << BLUE << "FragTrap " << _name << " gives you a very nice high five!" << RESET << std::endl;
}
