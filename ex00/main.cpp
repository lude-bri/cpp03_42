/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:05:12 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/11 17:05:14 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << MAGENTA << "== TEST CLAPTRAP == " << RESET << std::endl;
	std::cout << std::endl;

	std::cout << BOLD << CYAN << " [Test 1. Building Test] " << RESET << std::endl;
	ClapTrap	hobbit("Frodo");

	hobbit.attack("Samwise Gamgee");

	std::cout << std::endl;
	std::cout << BOLD << CYAN << " [Test 2. Damage and Repair Test] " << RESET << std::endl;
	hobbit.takeDamage(5);
	hobbit.beRepaired(3);

	std::cout << std::endl;
	std::cout << BOLD << CYAN << " [Test 3. Draining Test] " << RESET << std::endl;
	for (int i = 0; i < 9; i++)
		hobbit.attack("Samwise");
	
	std::cout << std::endl;
	std::cout << BOLD << CYAN << " [Test 4. Impossible Repair and Attack] " << RESET << std::endl;
	hobbit.takeDamage(20);
	hobbit.beRepaired(10);
	hobbit.attack("Gollum");

	return 0;
}
