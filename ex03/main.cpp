/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:10:12 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/16 22:10:14 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
    std::cout << MAGENTA << "\n== TEST DIAMONDTRAP ==" << RESET << std::endl;

    std::cout << std::endl;
    std::cout << BOLD << CYAN << " [Test 1. Building Test] "<< RESET << std::endl;
    DiamondTrap hobbit("Sam");

    std::cout << std::endl;
    std::cout << BOLD << CYAN << " [Test 2. WhoAmI Test] "<< RESET << std::endl;
    hobbit.whoAmI();

    std::cout << std::endl;
    std::cout << BOLD << CYAN << " [Test 3. Attack Test] "<< RESET << std::endl;
    hobbit.attack("Frodo");

    std::cout << std::endl;
    std::cout << BOLD << CYAN << " [Test 4. Special Abilities Test] "<< RESET << std::endl;
    hobbit.guardGate();  // From ScavTrap
    hobbit.highFivesGuys(); // From FragTrap

    std::cout << std::endl;
    std::cout << BOLD << CYAN << " [Test 5. Damage and Repair Test] "<< RESET << std::endl;
    hobbit.takeDamage(50);
    hobbit.beRepaired(25);

    std::cout << std::endl;
    std::cout << BOLD << CYAN << " [Test 6. Energy Drain Test] "<< RESET << std::endl;
    for (int i = 0; i < 49; i++)
        hobbit.attack("Frodo");

    std::cout << std::endl;
    std::cout << BOLD << CYAN << " [Test 7. Death Test] "<< RESET << std::endl;
    hobbit.takeDamage(200);
    hobbit.whoAmI(); // Should still work
    hobbit.attack("Frodo"); // Should fail
    hobbit.guardGate(); // Should fail

    return 0;
}
