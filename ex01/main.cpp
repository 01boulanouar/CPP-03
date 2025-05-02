/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:12:34 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/02 12:00:18 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scav("Scavy");
    
    scav.guardGate();
    scav.guardGate();

    scav.attack("El Gato");
    scav.beRepaired(13);
    return (0);
}
