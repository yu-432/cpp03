/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:29:35 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/09 23:54:22 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::~ClapTrap() {};

ClapTrap::ClapTrap(const std::string& name)
    : m_name(name), m_hitPoint(10), m_energyPoint(10), m_attakDamage(0) {};

ClapTrap::ClapTrap(const ClapTrap& right)
    : m_name(right.m_name),
      m_hitPoint(right.m_hitPoint),
      m_energyPoint(right.m_energyPoint),
      m_attakDamage(right.m_attakDamage) {};

ClapTrap& ClapTrap::operator=(const ClapTrap& right) {
  if (*this != right) {
    m_name = right.m_name;
    m_energyPoint = right.m_energyPoint;
    m_attakDamage = right.m_attakDamage;
    m_hitPoint = right.m_hitPoint;
  }
  return *this;
}

bool ClapTrap::operator==(const ClapTrap& right) {
  return (m_name == right.m_name && m_hitPoint == right.m_hitPoint &&
          m_energyPoint == right.m_energyPoint &&
          m_attakDamage == right.m_attakDamage);
};

bool ClapTrap::operator!=(const ClapTrap& right) { return !(*this == right); }

void ClapTrap::attack(const std::string& target) {
  if (m_energyPoint <= 0 || m_hitPoint) {
    std::cout << "not enough energy or hit points!" << std::endl;
    return;
  }
  std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attakDamage << " points of damage!" << std::endl;
  m_energyPoint--;
}


void ClapTrap::takeDamage(unsigned int amount) {
  if (m_hitPoint <= 0) {
    std::cout << "not enough hit points" << std::endl;
    return ;
  }
  std::cout << "ClapTrap " << m_name << " takes " << amount << " points of damage!" << std::endl;
  m_hitPoint -= amount;
}

void ClapTrap::beRepairead(unsigned int amount) {
  if (m_energyPoint <= 0 || m_hitPoint) {
    std::cout << "not enough energy points or hit points" << std::endl;
    return;
  }
  std::cout << "ClapTrap " << m_name << " repairs " << amount << " hit points!" << std::endl;
  m_attakDamage += amount;
  m_energyPoint--;
}
