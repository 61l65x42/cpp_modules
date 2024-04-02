/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 18:41:11 by apyykone          #+#    #+#             */
/*   Updated: 2024/04/02 02:29:24 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Consructors ---------------------------------------------------------------

DiamondTrap::DiamondTrap() : ClapTrap("nameless", false), ScavTrap("nameless"), FragTrap("nameless")
{
	this->name = "nameless";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = 50;
	this->attackDamage = FragTrap::attackDamage;
	init_trap("DiamondTrap", this->name);
};

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name, false), ScavTrap(name), FragTrap(name)
{
	ClapTrap::name = name + "_clap_name";
    this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = 50;
	this->attackDamage = FragTrap::attackDamage;
	init_trap("DiamondTrap", this->name);
};

DiamondTrap::~DiamondTrap()
{
	destruct_trap(this->name, "DiamondTrap");
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src.name, false), ScavTrap(src.name), FragTrap(src.name)
{
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
		this->ClapTrap::name = src.name + "_clap_name";
        this->name = src.name;
		this->hitPoints = src.hitPoints;
        this->energyPoints = src.energyPoints;
        this->attackDamage = src.attackDamage;
    }
	copy_assigment_msg("DiamondTrap", this->name);
	return (*this);
}

// Methods -------------------------------------------------------------------

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << this->name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}