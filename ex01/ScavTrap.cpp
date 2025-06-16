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

ScavTrap::ScavTrap(const std::string &name){
	std::cout << GREEN << "ScavTrap " << YELLOW << _name << GREEN << " was created!!" << RESET << std::endl;
}

ScavTrap::~ScavTrap(){};


