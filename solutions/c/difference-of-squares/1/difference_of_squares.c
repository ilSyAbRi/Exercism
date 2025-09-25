#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number)
 {

         unsigned int i = 1;
         int multi = 0;
         int b = 0;
         while(i <= number)
                  {
                          multi = i * i;
                          b = b + multi;
                  i++;
                  }
 
 
          return b;
  }
  unsigned int square_of_sum(unsigned int number)
  {
 
          unsigned int i = 1;
          int sum = 0;
          int multi = 0;
                  while(i <= number)
                          {
 
                                  sum = sum + i;
                          i++;
                          }
                                  multi = sum * sum;
 
 
         return multi;
 
  }
 
  unsigned int difference_of_squares(unsigned int number)
  {
 
           unsigned int sum_squa = 0;
           unsigned int squa_sum = 0;
      unsigned int dif = 0;
 
          sum_squa = sum_of_squares(number);
          squa_sum = square_of_sum(number);
 
                  dif = squa_sum - sum_squa;
          return dif;
  }