#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <vector>
#include "CartItem.h"
#include <string>

class ShoppingCart {
  private: 
    std::vector<CartItem> itemList; 

  public: 
    ShoppingCart(); 
    void add(const CartItem& item);
    double getTotalCost(void) const;
    int getNumberOfItems(void) const;
    CartItem getItem(int i) const; 
    std::string toString(void);   
}; 

#endif
