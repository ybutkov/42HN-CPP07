/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:32:01 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/22 22:04:08 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"
#include <iostream>


int main()
{
	std::cout << "=== Integer array with non-const reference ===" << std::endl;
	std::size_t length = 3;
	int arr[] = {1, 3, 5};
	iter(arr, length, f_non_const);
	std::cout << std::endl;
	
	std::cout << "=== String array with non-const reference ===" << std::endl;
	std::string arr2[] = {"str1", "str2", "str3"};
	iter(arr2, length, f_non_const);
	std::cout << std::endl;

	std::cout << "=== Integer array with const reference ===" << std::endl;
	iter(arr, length, f_const);
	std::cout << std::endl;

	std::cout << "=== String array with const reference ===" << std::endl;
	iter(arr2, length, f_const);
	std::cout << std::endl;

	std::cout << "=== Double array with const reference ===" << std::endl;
	double darr[] = {1.5, 2.5, 3.5};
	iter(darr, 3, f_const);

	return 0;
}
