/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:18:39 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/15 11:47:58 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void) {
  ClapTrap a("HumanA");
  
  for(int i = 0; i < 5; i++)
    a.attack("HumanB");
  for(int i = 0; i < 5; i++)
    a.takeDamage(3);
  a.attack("HumanB");

    
}