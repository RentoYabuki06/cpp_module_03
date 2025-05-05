/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 16:13:52 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/05 19:12:28 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();
public:
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};

#endif
