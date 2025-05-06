/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:12:28 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/03 13:34:51 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    _name = "default";
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
    std::cout << "ClapTrap " << _name << " Default constructor called" << std::endl;
}


ClapTrap::ClapTrap(const std::string &name)
{
    _name = name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
    std::cout << "ClapTrap " << _name << " Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    *this = claptrap;
    std::cout << "ClapTrap " << _name << " Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
    if (this != &claptrap)
    {
        _name = claptrap._name;
        _hit_points = claptrap._hit_points;
        _energy_points = claptrap._energy_points;
        _attack_damage = claptrap._attack_damage;
        std::cout << "ClapTrap " << _name << " Copy assignment operator called" << std::endl;
    }
    return *this;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << _name << " Destructor called" << std::endl;
}


void ClapTrap::attack(const std::string& target)
{
    if (_hit_points <= 0)
    {
        std::cout << "ClapTrap " << _name << " could not attack. No hit points." << std::endl;
        return ;
    }
    else if (_energy_points <= 0)
    {
        std::cout << "ClapTrap " << _name << " could not attack. No energie points." << std::endl;
        return ;
    }
    else
    {
        _energy_points--;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_points <= 0)
    {
        std::cout << "ClapTrap " << _name << " could not take damage. No hit points." << std::endl;
        return ;
    }
    else
    {
       _hit_points -= amount;
        std::cout << "ClapTrap "<< _name << " took " << amount <<" points of damage!" << std::endl;  
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit_points <= 0)
    {
        std::cout << "ClapTrap " << _name << " could not be repaired. No hit points." << std::endl;
        return ;
    }
    else if (_energy_points <= 0)
    {
        std::cout << "ClapTrap " << _name << " could not be repaired. No energie points." << std::endl;
        return ;
    }
    else if (_hit_points + amount > 10)
    {
        std::cout << "ClapTrap " << _name << " could not be repaired above it's max hit points" << std::endl;
        return ;
    }
    else
    {
        _energy_points--;
        _hit_points += amount;
        std::cout << "ClapTrap "<< _name << " repaired " << amount << " hit points!" << std::endl;
    }
}
