/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:27:48 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/28 18:43:03 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <ctime>
# include <stdlib.h>

template <typename T>
class Array {
    public:
        Array();
        Array(unsigned int n); // creates array with N elements
        Array(const Array& obj);
        ~Array();
    
        Array& operator=(const Array& obj);
        T& operator[](int index);
        int size() const;

        class OutOfBounds: public std::exception {
            public:
                const char *what() const throw();
        };

    private:
        T *_arr;
        int _len;
};

#include "Array.tpp"

#endif