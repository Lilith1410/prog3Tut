#include <string>
#include "person.h"

using namespace std; 

Person::Person(){
  name = ""; 
  geburtsjahr{0}; 
}; 

Person::Person(string name, int geburtsjahr) : name {name}, geburtsjahr {geburtsjahr}; 

void Person::print() { 
  cout << name << "ist " << geburtsjahr << "geboren. " << endl; 
};

// Destruktor ist unnötig
/*
Person::~Person(){
  free(name); 
  free(geburtsjahr); 
  name = nullptr; 
  geburtsjahr = nullptr; 
*/ 
}
