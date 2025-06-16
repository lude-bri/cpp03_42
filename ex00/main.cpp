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

//melhorar a main
int	main(void)
{
	ClapTrap	hobbit("Frodo");

	hobbit.attack("Samwise Gamgee");
	hobbit.beRepaired(10);
	hobbit.takeDamage(10);
	hobbit.takeDamage(10);
	hobbit.takeDamage(10);
	return 0;
}
