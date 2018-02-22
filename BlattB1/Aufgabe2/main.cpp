#include "person.h"
#include "person.cpp"
#include <string>
#include <stdio>

int main(void){
  Person personen[2]; 
  arr[0]=new Person("Valerie", 14101990); 
  arr[1]=new Person("Henrik", 01012000);

  for(const auto& p : personen) {
    p.print();  
  }

}
