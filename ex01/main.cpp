/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:14:09 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/16 16:15:23 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << MAGENTA << "== TEST SCAVTRAP ==" << RESET << std::endl;

	std::cout << std::endl;
	std::cout << BOLD << CYAN << " [Test 1. Building Test] "<< RESET << std::endl;
	ScavTrap hobbit("Frodo");

	hobbit.attack("Samwise Gamgee");

	std::cout << std::endl;
	std::cout << BOLD << CYAN << " [Test 2. Damage and Repair Test] "<< RESET << std::endl;
	hobbit.takeDamage(30);
	hobbit.beRepaired(15);

	std::cout << std::endl;
	std::cout << BOLD << CYAN << " [Test 3. Draining Test] "<< RESET << std::endl;
	for (int i = 0; i < 49; i++)
		hobbit.attack("Samwise Gamgee");

	std::cout << std::endl;
	std::cout << BOLD << CYAN << " [Test 4. GuardGate Test] "<< RESET << std::endl;
	hobbit.takeDamage(100);
	hobbit.beRepaired(10);
	hobbit.guardGate();
	
	return 0;
}
