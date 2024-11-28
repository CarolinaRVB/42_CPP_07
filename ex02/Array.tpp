/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:27:50 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/28 19:10:04 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _arr(NULL), _len(0) {
    std::cout << "Default constructor called\n";
}

/*
    - new int(); allocates memory for a single int on the heap and initializes it to zero. 
    This is different from just allocating memory (which would be done using new int
    without the parentheses), where the memory might not be initialized and could contain garbage values.

    - When you try to display *a, you would notice that it prints 0.
    This demonstrates the default initialization behavior when you use new with parentheses:
     the allocated memory is initialized to zero.
    - The purpose of the tip is to illustrate the concept of dynamic memory allocation using
    new and the default initialization to zero, which is important for avoiding uninitialized memory in C++.

    NOTE: can't use new T[n]() to initialize since it's not from c++98
*/
template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _len(n) {
    T tType = T();
    
    for (unsigned int i = 0; i < n; i++)
        _arr[i] = tType;
    
    std::cout << "Name constructor called\n";
}

template <typename T>
Array<T>::Array(const Array& obj) { 
    if (!obj.size()) {
        _len = 0;
        _arr = NULL;
    }
    else {
        _len = obj.size();
        _arr = new T[obj.size()];
        for (int i = 0; i < obj.size(); i++) {
            _arr[i] = obj._arr[i];
        }
    }
    std::cout << "Copy constructor called\n";    
}

template <typename T>
T& Array<T>::operator[](int index) {
    if (index >= 0 && index < size())
        return (_arr[index]);
    else
       throw OutOfBounds();
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& obj) {
    if (this == obj) return *this;

    if (obj.size()) {
        delete [] _arr;
        _len = obj.size();
        _arr = new T[obj.size()];
        for (unsigned int i = 0; i < obj.size(); i++) {
            _arr[i] = obj._arr[i];
        }
    }
    else {
        _arr = NULL;
        _len = 0;
    }
    std::cout << "Copy assignement operator called\n";    
    return *this;    
}

template <typename T>
Array<T>::~Array() {
    delete [] _arr;
    std::cout << "Destructor called\n";
}

template <typename T>
int    Array<T>::size() const {
    return _len;
}
 
template <typename T>
const char *Array<T>::OutOfBounds::what(void) const throw() {
    return ("Error: out of bounds!");
}