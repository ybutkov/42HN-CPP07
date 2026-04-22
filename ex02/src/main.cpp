/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:10:41 by ybutkov           #+#    #+#             */
/*   Updated: 2026/04/22 19:34:11 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"
#include <iostream>
#include <stdexcept>


int main()
{

	Array<int> a;
	std::cout << "a=" << a << std::endl;
	try {
		int f = a[0];
		std::cout << "a[0]=" << f << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cerr << "Error: " << ex.what() << std::endl;
	}
	std::cout << std::endl;
		
	
	std::cout << "=== Arrays of <int> ===" << std::endl;
	Array<int> ar(5);
	Array<int> ar2;
	for (unsigned int i = 0; i < ar.size(); ++i)
    {
        ar[i] = i * (100 - i * 3);
    }
	for (unsigned int i = 0; i < ar2.size(); ++i)
    {
        ar2[i] = i * (100 - i * 3);
    }
	std::cout << "ar=" << ar << std::endl;
	std::cout << "ar2=" << ar2 << std::endl;
	std::cout << std::endl;
	
	std::cout << "=== After ar2 = ar ===" << std::endl;
	ar2 = ar;
	std::cout << "ar=" << ar << std::endl;
	std::cout << "ar2=" << ar2 << std::endl;
	std::cout << std::endl;

	std::cout << "=== After changing ar2 ===" << std::endl;
	for (unsigned int i = 0; i < ar2.size(); ++i)
    {
        ar2[i] = ar2[i] * 2 + 1000;
    }
	std::cout << "ar=" << ar << std::endl;
	std::cout << "ar2=" << ar2 << "\n" << std::endl;

	
	std::cout << "=== Arrays of <string> ===" << std::endl;
	Array<std::string> ar3(5);
	Array<std::string> ar4(3);
	for (unsigned int i = 0; i < ar3.size(); ++i)
    {
        ar3[i] = "Str_" + std::to_string(i);
    }
	for (unsigned int i = 0; i < ar4.size(); ++i)
    {
        ar4[i] = "String_" + std::to_string(i);
    }
	std::cout << "ar3=" << ar3 << std::endl;
	std::cout << "ar4=" << ar4 << std::endl;
	std::cout << std::endl;

	std::cout << "=== After ar4 = ar3 ===" << std::endl;
	ar4 = ar3;
	std::cout << "ar3=" << ar3 << std::endl;
	std::cout << "ar4=" << ar4 << std::endl;
	std::cout << std::endl;


	std::cout << "=== After changing ar4 ===" << std::endl;
	for (unsigned int i = 0; i < ar4.size(); ++i)
    {
        ar4[i] = ar4[i] + "_suffix";
    }
	std::cout << "ar3=" << ar3 << std::endl;
	std::cout << "ar4=" << ar4 << "\n" << std::endl;

	
	std::cout << "=== Construct ar5 from ar4  ===" << std::endl;
	Array<std::string> ar5(ar4);
	std::cout << "ar4=" << ar4 << std::endl;
	std::cout << "ar5=" << ar5 << "\n" << std::endl;
	
	
	std::cout << "=== After changing ar5 ===" << std::endl;
	for (unsigned int i = 0; i < ar5.size(); ++i)
    {
        ar5[i] = ar5[i] + "_5";
    }
	std::cout << "ar4=" << ar4 << std::endl;
	std::cout << "ar4=" << ar5 << "\n" << std::endl;

	
	std::cout << "=== Attempt to get ar3[100] ===" << std::endl;
	try {
		std::string str = ar3[100];
		std::cout << "ar3[100]=" << str << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cerr << "Error: " << ex.what() << std::endl;
	}
	
	return 0;
}
