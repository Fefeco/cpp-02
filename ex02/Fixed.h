/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:07:56 by fcarranz          #+#    #+#             */
/*   Updated: 2024/11/13 12:30:45 by fcarranz         ###   ########.fr       */
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
  
  bool &operator>(const Fixed &other);
  bool &operator<(const Fixed &other);
  bool &operator>=(const Fixed &other);
  bool &operator<=(const Fixed &other);
  bool &operator==(const Fixed &other);
  bool &operator!=(const Fixed &other);

  Fixed operator+(const Fixed &other);
  Fixed operator-(const Fixed &other);
  Fixed operator*(const Fixed &other);
  Fixed operator/(const Fixed &other);

  Fixed &operator++();
  Fixed operator++(int);
  Fixed &operator--();
  Fixed operator--(int);

  Fixed &min(Fixed &A, Fixed &B);
  Fixed &min(const Fixed &A, const Fixed &B);
  Fixed &max(Fixed &A, Fixed &B);
  Fixed &max(const Fixed &A, const Fixed &B);

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