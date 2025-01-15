/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:00:09 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/15 22:18:48 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

class FragTrap : public ClapTrap {
 public:
  FragTrap(const std::string& name);
  FragTrap(const FragTrap& src);
  FragTrap& operator=(const FragTrap& src);
  ~FragTrap();
  void attack(const std::string& target);
  void takeDamage(const unsigned int& amount);
  void beRepaired(const unsigned int& amount);
  void highFivesGuys(void);
};
