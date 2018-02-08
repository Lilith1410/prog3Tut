#define LEN 20

struct int20 {
 char number[LEN+1]; 
};

extern struct int20 create20(char val[]); 

extern struct int20 add20(struct int20, struct int20); 

extern void print20(struct int20); 

extern char getChar(int c); 

extern int getInt(char c); 
