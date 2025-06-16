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

//melhorar main later
int main(void)
{
	FragTrap hobbit("Samwise Gamgee");

	hobbit.attack("Frodo");
	hobbit.takeDamage(10);
	hobbit.highFiveGuys();
}
