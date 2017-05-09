#include "sale_item.hpp"

std::istream& sale_item::input(std::istream& in)
{
	double price;

	in >> isbn >> units_sold >> price;

	if(in){
	  revenue = units_sold * price;
	}else{
		units_sold = 0;
		revenue = 0.0;
	}

	return in;
}

std::ostream& sale_item::output(std::ostream& out) const 
{
	out << isbn << "\t" << units_sold << "\t"
		<< revenue << "\t" << avg_price();

	return	out;
}

double sale_item::avg_price() const 
{
	if(units_sold){
		return revenue/units_sold;
	}else{
		return 0;
	}
}

sale_item sale_item::add(sale_item& other)
{
	this->revenue += other.revenue;
	this->units_sold += other.units_sold;

	return *this;
}
