/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:12:34 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/01 22:52:27 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap1;
    ClapTrap clap2("Clappy");
    ClapTrap clap3("El Gato");
    
    clap2.attack("El Gato");  
    clap3.takeDamage(9);
    clap3.attack("Clappy");
    clap1.takeDamage(6);
    clap1.takeDamage(12);
    clap1.takeDamage(3);
    clap1.attack("El Gato");
    clap1.beRepaired(4);
    clap3.beRepaired(1);
    clap3.attack("default");
    clap3.beRepaired(1);
    return (0);
}
