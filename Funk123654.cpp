
#include "TXLib.h"
#include "Algofunc.h"

void FillArr (int data [], int size, int SizeNch, int Sizech);

 int main ()
     {
     int size = 16;
     int data [] = {};
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
 //        shift = (3 - (ChPer * 3 - Sizech));
         }
     else Sizech = ChPer * 3;

     printf ("\n ����� ������ ������ SizeNch = %d \n ����� ������ ������ = %d \n ����� = %d", SizeNch, Sizech, shift);

     FillArr (data, 16, SizeNch, Sizech);

     PrintArray (data, 16, 3, "����� ����������");

     return 0;
     }

//-----------------------------------------------------------------------------

void FillArr (int data [], int size, int SizeNch, int Sizech)
     {
     int dd [] = {};

     int    i = 1;
     int    j = 1;

      data [0] = 1;
      dd   [0] = 4;

     for (1 <= i; i <= SizeNch; i++)
         {
         assert (0 <= i   && i   < SizeNch);
         assert (0 <= i-1 && i-1 < SizeNch);

         if (i % 3 != 0) data [i] = data [i - 1] + 1;
         else            data [i] = data [i - 1] + 4;
         printf ("\n data [i] = %d  i = %d", data [i], i);
         }

     for (1 <= j; j <= Sizech; j++)
         {
         assert (0 <= j   && j   < Sizech);
         assert (0 <= j-1 && j-1 < Sizech);


         if (i % 3 != 0) dd [j] = dd [j - 1] + 1;
         else            dd [j] = dd [j - 1] + 4;
         printf ("\n dd [j] = %d  j = %d", data [j], j);
         }

     //int j = Sizech - 1;

     for (1 <= j <= Sizech  && SizeNch + 1 <= i <= size - 1; j--; i++)
         {
         assert (0 <= i   && i   < SizeNch);
         assert (0 <= i-1 && i-1 < SizeNch);

         assert (0 <= j   && j   < Sizech);
         assert (0 <= j-1 && j-1 < Sizech);

         data [i] = dd [j];
         }

     }
