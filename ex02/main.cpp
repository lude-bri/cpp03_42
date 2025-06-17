/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 21:57:43 by lude-bri          #+#    #+#             */
/*   Updated: 2025/06/16 22:06:29 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    std::cout << MAGENTA << "\n== TEST FRAGTRAP ==" << RESET << std::endl;

    std::cout << std::endl;
    std::cout << BOLD << CYAN << " [Test 1. Building Test] "<< RESET << std::endl;
    FragTrap hobbit("Bilbo");

    std::cout << std::endl;
    std::cout << BOLD << CYAN << " [Test 2. Attack Test] "<< RESET << std::endl;
    hobbit.attack("Frodo");

    std::cout << std::endl;
    std::cout << BOLD << CYAN << " [Test 3. High Five Test] "<< RESET << std::endl;
    hobbit.highFivesGuys();

    std::cout << std::endl;
    std::cout << BOLD << CYAN << " [Test 4. Damage and Repair Test] "<< RESET << std::endl;
    hobbit.takeDamage(30);
    hobbit.beRepaired(15);

    std::cout << std::endl;
    std::cout << BOLD << CYAN << " [Test 5. Energy Drain Test] "<< RESET << std::endl;
    for (int i = 0; i < 99; i++)
        hobbit.attack("Frodo");

    std::cout << std::endl;
    std::cout << BOLD << CYAN << " [Test 6. Death Test] "<< RESET << std::endl;
    hobbit.takeDamage(200);
    hobbit.highFivesGuys(); // Should fail
    hobbit.beRepaired(10);  // Should fail

    return 0;
}
