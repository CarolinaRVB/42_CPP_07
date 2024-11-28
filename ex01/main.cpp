/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:14:11 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/27 18:24:28 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::string arrStrings[] = {"one", "two", "three", "four", "five"};
    
    
    std::cout << "Calling iter with an array of ints and print instantiated for int: \n";
    ::iter(arr, 5, print<int>); // calling iter with int arrays and print function instantiated to receive INT
   
    std::cout << "\nCalling iter with an array of strings and print instantiated for string: \n"; 
    ::iter(arrStrings, 5, print<std::string>); //// calling iter with int arrays and print function instantiated to receive STRING
}