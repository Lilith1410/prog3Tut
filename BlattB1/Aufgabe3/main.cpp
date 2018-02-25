#include "ShoppingCart.h"
#include "CartItem.h"
#include <iostream>

using namespace std; 

int main(void){

  ShoppingCart shopCart; 
  shopCart.add( CartItem{"Hundefutter", 3.20, 6}); 
  shopCart.add( CartItem{"Kekse", 1.59, 4}); 
  shopCart.add( CartItem{"Milch", 0.69, 1}); 
  shopCart.add( CartItem{"Erdbeermarmelade", 2.19, 3}); 

  string bon = shopCart.toString(); 
  cout << bon; 
} 


