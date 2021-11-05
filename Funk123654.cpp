
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

     printf ("\n колво нечетн членов SizeNch = %d \n колво четных членов = %d \n сдвиг = %d", SizeNch, Sizech, shift);

     FillArr (data, 16, SizeNch, Sizech);

     PrintArray (data, 16, 3, "после заполнения");

     return 0;
     }

//-----------------------------------------------------------------------------

void FillArr (int data [], int size, int SizeNch, int Sizech)
     {
     int j, dd [Sizech];

     int i = 1;

     data [0] = 1;

     for (i = 1; i < SizeNch; i++)
         {
         assert (0 <= i   && i   < SizeNch);
         assert (0 <= i-1 && i-1 < SizeNch);

         if (i % 3 != 0) data [i] = data [i - 1] + 1;
         else            data [i] = data [i - 1] + 4;
         printf ("\n data [i] = %d  i = %d", data [i], i);
         }



     for (int j = 1; j < Sizech; j++)
         {
         assert (0 <= j   && j   < Sizech);
         assert (0 <= j-1 && j-1 < Sizech);
         dd [0] = 4;
         if (j % 3 != 0) {dd [0] = 4; dd [j] = dd [j - 1] + 1;}
         else            dd [j] = dd [j - 1] + 4;
         printf ("\n\n dd [j] = %d  j = %d", data [j], j);
         }


     for (1 <= j < Sizech  && SizeNch <= i <= size - 1; j++; i++)
         {
         assert (SizeNch <= i && i < size);

         assert (1       <= j && j < Sizech);

         data [i] = dd [j];
         }


     }
