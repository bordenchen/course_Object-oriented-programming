#ifndef PRACTICE05
#define PRACTICE05
#include <string>
struct Sales_data
{
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	std::string bookNo;
	unsigned units_sold = 0;
	double revenus = 0.0;
};
#endif // !PRACTICE05
#pragma once
