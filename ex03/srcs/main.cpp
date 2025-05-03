/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:34:36 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/03 17:47:40 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"
#include <iostream>

void printSeparator(const std::string& title)
{
	std::cout << "\n==================== " << title << " ====================\n" << std::endl;
}

int main()
{
	printSeparator("Create DiamondTrap");
	DiamondTrap dt("DiamondBoy");

	printSeparator("DiamondTrap Actions");
	dt.attack("target1");        // ScavTrap::attack を使う
	dt.takeDamage(30);           // ClapTrap から継承
	dt.beRepaired(20);           // ClapTrap から継承
	dt.whoAmI();                 // DiamondTrap 固有メソッド

	printSeparator("Copy and Assign Test");
	DiamondTrap copy = dt;       // コピーコンストラクタ
	DiamondTrap assigned("Temp");
	assigned = dt;               // 代入演算子

	printSeparator("Destruction Test");
	return 0;
}
