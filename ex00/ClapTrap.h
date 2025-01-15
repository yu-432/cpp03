/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:19:04 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/15 12:55:36 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap {
 public:
  ClapTrap(const std::string& name);
  ClapTrap(const ClapTrap& src);
  ~ClapTrap();
  ClapTrap& operator=(const ClapTrap& src);
  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

 private:
  std::string _name;
  long _hitPoint;
  long _energyPoint;
  long _attackDamage;
};