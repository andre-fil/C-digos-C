#include <stdio.h>
#include <string.h>
int main(void) 
{ 
char t[5]; 
t[0] = 'a';
t[1] = 'b';
t[2] = 'c';
t[3] = 'd';
t[4] = 'e';



printf("\n%ld %c", t, *t); 
printf("\n%ld %c", t+1, *(t+1)); 
printf("\n%ld %c", t+2, *(t+2));
printf("\n%ld %c", t+3, *(t+3)); 
printf("\n%ld %c", t+4, *(t+4)); 
return 0; 
}