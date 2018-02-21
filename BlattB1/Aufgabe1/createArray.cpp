// Compiling funktioniert nicht, aber Lsg identisch mit Musterlsg ? 

using namespace std; 

int* createArray(int n){
  return new int[n];  
}

void releaseArray(int*& arr){
  delete[] arr; 
  arr = nullptr; 
}


int main(void){
  int n = 2;  
  int* array = createArray(n);
  releaseArray(array);
  return 0; 
}
