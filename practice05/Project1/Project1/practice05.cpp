#include "practice05.h"

Sales_data & Sales_data::combine(const Sales_data &)
{
	// TODO: insert return statement here
}

double Sales_data::avg_price() const
{
	if (units_sold) {
		return revenus / units_sold;
	}
	else {
		return 0;
	}
}
