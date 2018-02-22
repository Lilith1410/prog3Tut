#ifndef CART_ITEM_H
#define CART_ITEM_H

#include <string> 

class CartItem { 
  private: 
    std::string name; 
    double price; 
    int anzahl; 

  public: 
    CartItem(std::string name, double price, int anzahl); 
    double getCost(void) const; 

    std::string getName(void) const; 
    void setName(const std::string& name); 

    int getAnzahl(void) const; 
    void setAnzahl(const int& n); 

    double getPreis(void) const ; 
    void setPreis(const double& n); 

    std::string toString(void); 
}; 

#endif
