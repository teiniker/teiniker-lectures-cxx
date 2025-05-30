#ifndef _ORDERLINE_H_
#define _ORDERLINE_H_

#include <string>
#include "product.h"

class OrderLine 
{
	private:
		int _id; 
		int _quantity;
		Product* _product; // ---[0..1]-> Product
 
	public:
		OrderLine(int id, int quantity, Product* product);
		OrderLine(const OrderLine& old);	// Copy Constructor

		int id(void) const;
		int quantity(void) const;
		Product* product(void) const;
		void product(Product* product);
};

#endif /*_ORDERLINE_H_ */
