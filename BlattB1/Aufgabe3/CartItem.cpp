#include "CartItem.h" 
#include <string>
#include <iomanip>
#include <sstream>

using namespace std; 

CartItem::CartItem(string name, double price, int anzahl) : name {name}, price {price}, anzahl {anzahl}{} 

// liefert Gesamtpreis des Artikels, zb bei 4x Dosen Hundefutter zu 3,20 € liefert diese Methode 12,80€. 
double CartItem::getCost(void) const {
  return anzahl*price; 
}

string CartItem::getName(void) const {
  return name; 
}
void CartItem::setName(const string& name){
  this->name = name; 
} 

int CartItem::getAnzahl(void) const {
  return anzahl; 
}
void CartItem::setAnzahl(const int& n){
  this->anzahl = n; 
}

double CartItem::getPreis(void) const {
  return price; 
}
void CartItem::setPreis(const double& n){
  this->price = n; 
}

string CartItem::toString(void){
  ostringstream os {}; 
  os << fixed << setprecision(2) << left << getAnzahl() << " x " << setw(30) << getName() << setw(12) << getPreis() << "    " << getCost() << endl; 
  return os.str(); 
}
