
#include "TXLib.h"
#include "Algofunc.h"

void FillArr (int data [], int size, int SizeNch, int shift);

 int main ()
     {
     int size = 16;
     int data [16] = {};
     int TotPer  = 0;
     int ChPer   = 0;
     int NchPer  = 0;
     int SizeNch = 0;
     int Sizech  = 0;
     int shift   = 0;

     TotPer = (size + 2) / 3;    printf ("\n kolvo periodov = %d", TotPer);
     NchPer = (TotPer + 1) / 2;
     ChPer = TotPer / 2;

     if (TotPer % 2 == 0)
         {
         SizeNch = TotPer / 2 * 3;
         Sizech = size - SizeNch;
         shift = (3 - (ChPer * 3 - Sizech));

         }
     //else ChPer = (TotPer + 1) / 2;

     //SizeNch =
     printf ("\n ����� ������ ������ = %d \n ����� ������ ������ = %d \n ����� = %d", SizeNch, Sizech, shift);

     FillArr (data, 16, SizeNch, shift);

     PrintArray (data, 16, 3, "����� ����������");

     return 0;
     }

//-----------------------------------------------------------------------------

void FillArr (int data [], int size, int SizeNch, int shift)
     {
     data [0] = 1;
     int i = 1;

     for (1 <= i; i <= SizeNch - 1; i++)
         {
         if (i % 3 != 0) data [i] = data [i - 1] + 1;
         else            data [i] = data [i - 1] + 4;
         printf ("\n data [i] = %d  i = %d", data [i], i);
         }

     data [i] = data [i-1] + shift;
     i++;

     printf ("\n data [i] = data [i-1] + shift = %d \n i = %d", data [i], i);
     printf ("\n SizeNch + 1 = %d", SizeNch + 1);
     printf ("\n data [i] = %d", data [i]);

     for (SizeNch + 1 <= i; i < size; i++)
         {
         if ((i) % 3 != 0) data [i] = data [i - 1] - 1;
         else                  data [i] = data [i - 1] - 4;

         printf ("\n data [i] = %d  i = %d", data [i], i);
         }
     }
void PatTo
     {
     int j = 0;

     for (SizeNch + 1 <= i; i < size; i++)
         {
         if  (shift == 1) data [i] = data[i - 1] - 4;
         for (1 <= j <= shift)

         }
     }
