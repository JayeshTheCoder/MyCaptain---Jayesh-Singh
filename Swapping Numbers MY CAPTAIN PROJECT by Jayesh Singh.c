#include <stdio.h>
int
main () 
{
  
int x, y;
  
printf ("First Number : ");
  
scanf ("%d", &x);
  
printf ("Second Number : ");
  
scanf ("%d", &y);
  
 
x = x + y;
  
y = x - y;
  
x = x - y;
  
 
printf
    ("After Swapping First Number : x = %d\nAfter Swapping First Number : y = %d",
     x, y);
  
 
return 0;

}


