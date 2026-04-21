/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:32:01 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/21 23:46:23 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"
#include <iostream>



int main()
{
	std::size_t length = 3;
	int arr[] = {1, 3, 5};
	std::string arr2[] = {"str1", "str2", "str3"};

	iter(arr, length, f_non_const);
	std::cout << std::endl;
	
	iter(arr2, length, f_non_const);
	std::cout << std::endl;

	iter(arr, length, f_const);
	std::cout << std::endl;

	iter(arr2, length, f_const);


	return 0;
}
