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
	std::cout << GREEN << "ClapTrap was created!!" << RESET << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << RED << "ClapTrap was destroyed!" << RESET << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	//ClapTRap <name> attacks <target>, causing <damage> points of damage!
	int	energyPoint = _energyPoints - 1;

	if (energyPoint <= 0 || _hitPoints <= 0)
		std::cout << RED << "ClapTrap doesn't have enough energy points to make this action" << RESET << std::endl;
	else
		std::cout << BLUE << "ClapTrap " << YELLOW << this->_name << BLUE << " attacks " << YELLOW << target << BLUE << ", causing " << RED << this->_attackDamage << BLUE << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amout) {}

void	ClapTrap::beRepaired(unsigned int amount) {
	int energyPoint = _energyPoints - 1;

	if (energyPoint <= 0 || _hitPoints <= 0)
		std::cout << RED << "ClapTrap doesn't have enough energy points to make this action" << RESET << std::endl;
	else
	{
		std::cout << GREEN << "ClapTrap regains " << RED << amount << GREEN << " hit points!" << std::endl;
		_energyPoints += amount;
	}
}
