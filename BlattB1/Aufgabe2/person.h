#ifndef PERSON_H
#define PERSON_H

// eigentlich für die Nutzung von Strings müsste: using std::string 
// dies ist aber unschön, weil dann allen Clients, die die .h-Datei inkludieren
// dieser Namespace vorgegeben / aufgezwungen wird. 

class Person {
  private: 
    std::string name; 
    int geburtsjahr; 
  public: 
    Person(); 
    Person(std::string name, int geburtsjahr); 
    void print();
    ~Person(); 

}; 
#endif
