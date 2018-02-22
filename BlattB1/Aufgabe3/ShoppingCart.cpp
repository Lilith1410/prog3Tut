#include "CartItem.h"
#include "ShoppingCart.h"
#include <vector>
#include <iomanip>
#include <sstream>

using namespace std; 


ShoppingCart::ShoppingCart(){
} 

void ShoppingCart::add(const CartItem& item){
  itemList.push_back(item); 
}

double ShoppingCart::getTotalCost(void) const{
  double sum {0}; 
  for (auto item : itemList) {
    sum += item.getCost(); 
  }
  return sum; 
}

int ShoppingCart::getNumberOfItems(void) const{
  int anzahl {0}; 
  for ( auto item: itemList) {
    anzahl += item.getAnzahl(); 
  }
  return anzahl; 
}

CartItem ShoppingCart::getItem(int i) const{
  return itemList.at(i); 
}   

string ShoppingCart::toString(void){
  ostringstream os {};
  for(auto elem : itemList) {
    os << elem.toString(); 
  } 
  os << left << "Summe: " << setw(32) << setprecision(2) << getTotalCost() << endl; 
  return os.str(); 
}
