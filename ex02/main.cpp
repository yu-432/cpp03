/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:18:39 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/16 12:00:27 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "FragTrap.h"
#include "ScavTrap.h"

int main(void) {
  FragTrap f1("FragC");

  f1.attack("humanA");
  f1.highFivesGuys();
  f1.beRepaired(25);
  for (int i = 0; i < 5; i++) f1.takeDamage(25);
  f1.attack("HumanA");
  f1.highFivesGuys();
}