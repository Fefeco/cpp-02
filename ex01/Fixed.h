/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:07:56 by fcarranz          #+#    #+#             */
/*   Updated: 2024/11/12 13:45:43 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ostream>

class Fixed {

public:
  Fixed(void);
  ~Fixed(void);

  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &other);

  Fixed(const int nb);
  Fixed(const float nb);

  int getRawBits(void) const;
  void setRawBits(const int raw);
  float toFloat(void) const;
  int toInt(void) const;

private:
  static const int width = 8;
  int fixedPoint;
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);