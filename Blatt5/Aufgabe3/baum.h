#define KNOT_NAME_LENGTH 20
#define ARRAY_LENGTH 100

typedef struct {
  char knotName[KNOT_NAME_LENGTH]; 
  struct knot* parentKnot; 
} knot; 
