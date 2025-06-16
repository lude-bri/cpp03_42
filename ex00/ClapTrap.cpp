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

ClapTrap::ClapTrap(std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << GREEN << "ClapTrap was created!!" << RESET << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << RED << "ClapTrap was destroyed!" << RESET << std::endl;
}
