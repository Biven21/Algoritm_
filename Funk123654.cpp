
#include "TXLib.h"
#include "Algofunc.h"

 int main ()
     {
     int size = 23;
     int data [size] = {};

     data [0] = 1;
     int i = 1;

     for (1 <= i; i >= size; i++)
         {
         if (i % 4 != 0) data [i] = data [i - 1] + 1;
         else            data [i] = data [i - 1] + 4;
         }
     PrintArray (data, 20, 5, "после заполнения");
     }
