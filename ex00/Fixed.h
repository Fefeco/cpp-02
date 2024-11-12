/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:07:56 by fcarranz          #+#    #+#             */
/*   Updated: 2024/11/12 12:47:33 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed {

public:
  Fixed(void);
  ~Fixed(void);

  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &other);

  int getRawBits(void) const;
  void setRawBits(const int raw);

private:
  static const int width = 8;
  int fixedPoint;
};