
#include "TXLib.h"
#include "Algofunc.h"

void FillFerstAr (int data [], int size);

 int main ()
     {
     int size = 23;
     int data [23] = {};

     FillFerstAr (data, 23);

     PrintArray (data, 23, 3, "����� ����������");
     }

//-----------------------------------------------------------------------------

void FillFerstAr (int data [], int size)
     {
     data [0] = 1;
     int i = 1;

     for (1 <= i; i <= (size + 1) / 2; i++)
         {
         if (i % 3 != 0) data [i] = data [i - 1] + 1;
         else            data [i] = data [i - 1] + 4;
         }

     for ((size + 1) / 2 < i; i <= size; i++)
         {
         if (i % 3 != 0) data [i] = data [i - 1] - 1;
         else            data [i] = data [i - 1] - 4;
         }
     }
