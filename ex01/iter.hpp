/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:09:35 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/29 09:27:15 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

/*
    - Function pointer is instantiated, meaning that when we call the iter
    on the main code, we define the datatype of T as we want it like print<int>()
    - Here we can see a generic function being aplied to each element of the array.
    - Iter doesn't need to know wha the function does, it simply calls it to each array member
    - Clean and modular code
*/
template <typename T>
void    print(T element) {
    std::cout << element << "\n";
}

template <typename T, typename F>
void iter(T *arr, size_t length, F function) {
    for (size_t i = 0; i < length; i++) {
        function(arr[i]);
    }
}

#endif
