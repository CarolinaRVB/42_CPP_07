/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:07:27 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/29 08:24:41 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

/*
  Templates allow the writing of generic and reusable code, in this
  case the swap, min and max function can perform the same function
  with different datatypes, because we declared them as template functions
  with the type T that the user defines
  Templates are resolved at compile time
*/
template <typename T>
void swap(T &n1, T &n2) {
  T tmp = n1;
  n1 = n2;
  n2 = tmp;
}

template <typename T>
T min(T n1, T n2) {
  return (n1 < n2 ? n1:n2);
}

template <typename T>
T max(T n1, T n2) {
  return (n1 > n2 ? n1:n2);
}


#endif