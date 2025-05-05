/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:05:51 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/05 19:09:46 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(const std::string& name)
	: _name(name)
	, _hitPoints(10)
	, _energyPoints(10)
	, _attackPoints(0)
{
	std::cout << "ClapTrap " << _name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "ClapTrap " << _name << " copied." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackPoints = other._attackPoints;
	}
	std::cout << "ClapTrap " << _name << " assigned." << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructed." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already destroyed and cannot attack." << std::endl;
		return;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy left to attack." << std::endl;
		return;
	}
	--_energyPoints;
	std::cout << "ClapTrap " << _name << " attacks " << target ;
	std::cout << ", causing " << _attackPoints << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already destroyed and cannot take more damage." << std::endl;
		return;
	}
	
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	if (_hitPoints > amount) _hitPoints -= amount;
	else
	{
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " died!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is destroyed and cannot be repaired." << std::endl;
		return;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy left to repair." << std::endl;
		return;
	}
	--_energyPoints;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " is repaired for " << amount << " hit points!" << std::endl;
}
