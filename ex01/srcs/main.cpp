/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:34:36 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/03 16:32:27 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

void printSeparator(const std::string& title)
{
	std::cout << "\n==================== " << title << " ====================\n" << std::endl;
}

int main()
{
	printSeparator("Constructing ClapTrap and ScavTrap");
	ClapTrap basic("Basic");
	ScavTrap guard("Guardian");

	printSeparator("Basic ClapTrap Actions");
	basic.attack("Dummy");
	basic.takeDamage(5);
	basic.beRepaired(3);

	printSeparator("ScavTrap Actions");
	guard.attack("Intruder");
	guard.takeDamage(60);
	guard.beRepaired(40);
	guard.guardGate();

	printSeparator("Exhausting ScavTrap Energy");
	for (int i = 0; i < 55; ++i)
	{
		guard.attack("EnergyDrainTest");
	}

	printSeparator("Destruction");
	return 0;
}
