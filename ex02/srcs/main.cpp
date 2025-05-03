/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:34:36 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/03 17:10:26 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include <iostream>

void printSeparator(const std::string& title)
{
	std::cout << "\n==================== " << title << " ====================\n" << std::endl;
}

int main()
{
	printSeparator("Create Instances");
	ClapTrap clap("Clappy");
	ScavTrap scav("Scavy");
	FragTrap frag("Fraggy");

	printSeparator("ClapTrap Basic Test");
	clap.attack("target1");
	clap.takeDamage(3);
	clap.beRepaired(2);

	printSeparator("ScavTrap Special Test");
	scav.attack("target2");
	scav.takeDamage(10);
	scav.beRepaired(5);
	scav.guardGate(); // ScavTrap 専用メソッド

	printSeparator("FragTrap Special Test");
	frag.attack("target3");
	frag.takeDamage(20);
	frag.beRepaired(15);
	frag.highFivesGuys(); // FragTrap 専用メソッド

	printSeparator("Destruction");
	return 0;
}
