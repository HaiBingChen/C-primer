#ifndef __SALE_ITEM_HPP
#define __SALE_ITEM_HPP

#include <iostream>
#include <string>

class sale_item{
public:
	std::istream& input(std::istream& in);
	std::ostream& output(std::ostream& out) const;
	double avg_price() const;
	bool same_isbn(const sale_item &rhs) const
	{
		return isbn == rhs.isbn;
	}
	
	sale_item add(sale_item& other);

	sale_item():units_sold(0), revenue(0.0){ }

private:
	std::string isbn;
	unsigned units_sold;
	double revenue;
};

#endif
