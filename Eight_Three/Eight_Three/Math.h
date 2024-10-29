#pragma once
#include<iostream>
#include<string>
//клас для додавання льору:<windows.h>
#include <windows.h>

class Math
{
private:
	int a;
	std::string a1;
	std::string a12;
	std::string a2;
	std::string a3;
	
	int b;
	std::string b1;
	std::string b12;
	std::string b2;
	std::string b3;
	
	char c;
public:
	Math()
	{
		//a
		system("Color 0C");
		std::cout << "Input the first number:"; std::cin >> a;
		std::cout << "Press 'yes' or 'Yes' if you want to add letter to your number or if you don`t want to add it press 'no' or 'No':";std::cin >> a12;
		if (a12 == "yes" || a12 == "Yes")
		{
			system("Color 0A");
			std::cout << "Press your letter here:"; std::cin >> a1;
			a2 = std::to_string(a);
			a3 = a2 + a1;
			std::cout << std::endl << a3 << std::endl;
		}
		else if (a12 == "no" || a12 == "No") 
		{
			std::cout << a << std::endl;
		};
		
		
		//b
		system("Color 09");
		std::cout << "Input the second number:"; std::cin >> b;
		
		std::cout << "Press 'yes' or 'Yes' if you want to add letter to your number or if you don`t want to add it press 'no' or 'No':"; std::cin >> b12;
		if (b12 == "yes" || b12 == "Yes")
		{
			std::cout << "Press your letter here:"; std::cin >> b1;
			b2 = std::to_string(b);
			b3 = b2 + b1;
			std::cout << std::endl << b3 << std::endl;
		}
		else if (b12 == "no" || b12 == "No")
		{
			std::cout<< b << std::endl;
		};
		
		//c
		std::cout << "Input + - * /:"; std::cin >> c;
		
		// ==

		if ((a12 == "yes" || a12 == "Yes") && (b12 == "yes" || b12 == "Yes")) {
			std::cout << a3 << " " << c << " " << b3 << std::endl;
		}
		else if ((a12 != "yes" && a12 != "Yes") && (b12 == "yes" || b12 == "Yes")) {
			std::cout << a << " " << c << " " << b3 << std::endl;
		}
		else if ((a12 == "yes" || a12 == "Yes") && (b12 != "yes" && b12 != "Yes")) {
			std::cout << a3 << " " << c << " " << b << std::endl;
		}
		else {
			std::cout << a << " " << c << " " << b << std::endl;
		}


		
	}
	~Math() 
	{
	};
	void Find()
	{
		if (a12 == "no" || a12 == "No")
		{
			std::cout << b3 << std::endl;
		};
		if (b12 == "no" || b12 == "No")
		{
			std::cout << a3 << std::endl;
		};

		if (a12 == "yes" || a12 == "Yes" || b12 == "no" || b12 == "No")
		{
			std::cout<<std::endl << a3 << std::endl << b3 << std::endl;
		};
	}
};
