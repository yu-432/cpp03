/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:18:39 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/15 22:21:44 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main(void) {
  ClapTrap a("ClapA");
  ScavTrap b("ScavB");
  FragTrap c("FragC");
  
  c.attack("HumanA");
  c.attack("humanA");    
  for(int i = 0; i < 5; i++)
    c.takeDamage(25);
  c.attack("HumanA");
  c.highFivesGuys();
}