/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:18:39 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/15 16:12:04 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"

int main(void) {
  ClapTrap a("ClapA");
  ScavTrap b("ScavB");
  
  a.attack("HumanA");
  // a.guardGate();
  b.attack("humanA");    
  for(int i = 0; i < 5; i++)
    b.takeDamage(25);
  b.guardGate();
  b.guardGate();
}