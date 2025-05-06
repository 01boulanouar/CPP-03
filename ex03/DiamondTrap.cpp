/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:12:28 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/04 18:06:01 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    _hit_points = FragTrap::_hit_points;
    std::cout << "DiamondTrap " << _name << " Default constructor called" << std::endl;
}


DiamondTrap::DiamondTrap(const std::string &name) :FragTrap(name) , ScavTrap(name)
{
    std::cout << "DiamondTrap " << _name << " Name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) : FragTrap(diamondtrap), ScavTrap(diamondtrap)
{
    *this = diamondtrap;
    std::cout << "DiamondTrap " << _name << " Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
    if (this != &diamondtrap)
    {
        _name = diamondtrap._name;
        _hit_points = diamondtrap._hit_points;
        _energy_points = diamondtrap._energy_points;
        _attack_damage = diamondtrap._attack_damage;
        std::cout << "DiamondTrap " << _name << " Copy assignment operator called" << std::endl;
    }
    return *this;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << _name << " Destructor called" << std::endl;
}

DiamondTrap::void whoAmI()
{
    
}
