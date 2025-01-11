/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:19:04 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/09 23:51:45 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap {
 public:
  ClapTrap(const std::string& name);
  ~ClapTrap();
  ClapTrap(const ClapTrap& src);
  ClapTrap& operator=(const ClapTrap& src);
  bool operator==(const ClapTrap& src);
  bool operator!=(const ClapTrap& src);
  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepairead(unsigned int amount);

 private:
  std::string m_name;
  long m_hitPoint;
  long m_energyPoint;
  long m_attakDamage;
};