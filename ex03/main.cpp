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

int	main(void)
{
	DiamondTrap hobbit("Frodo");

	hobbit.attack("Sam");
	hobbit.beRepaired(10);
	hobbit.takeDamage(100);
}
