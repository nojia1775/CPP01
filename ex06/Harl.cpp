#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl created" <<std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl destroyed" << std::endl;
}

void	Harl::debug(void)
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::map<std::string, void (Harl::*)(void)> f_map;
	f_map["DEBUG"] = &Harl::debug;
	f_map["INFO"] = &Harl::info;
	f_map["WARNING"] = &Harl::warning;
	f_map["ERROR"] = &Harl::error;
	switch (level.size())
	{
		case "DEBUG":
			std::cout << "[ " << level << " ]" << std::endl;
			(this->*f_map["DEBUG"])();
			std::cout << "\n";
			std::cout << "[ INFO ]" << std::endl;
			(this->*f_map["INFO"])();
			std::cout << "\n";
			std::cout << "[ WARNING ]" << std::endl;
			(this->*f_map["WARNING"])();
			std::cout << "\n";
			std::cout << "[ ERROR ]" << std::endl;
			(this->*f_map["ERROR"])();
		case "INFO":
			std::cout << "[ " << level << " ]" << std::endl;
			(this->*f_map["INFO"])();
			std::cout << "\n";
			std::cout << "[ WARNING ]" << std::endl;
			(this->*f_map["WARNING"])();
			std::cout << "\n";
			std::cout << "[ ERROR ]" << std::endl;
			(this->*f_map["ERROR"])();
		case "WARNING":
			std::cout << "[ " << level << " ]" << std::endl;
			(this->*f_map["WARNING"])();
			std::cout << "\n";
			std::cout << "[ ERROR ]" << std::endl;
			(this->*f_map["ERROR"])();
		case "ERROR":
			std::cout << "[ " << level << " ]" << std::endl;
			(this->*f_map["ERROR"])();
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}