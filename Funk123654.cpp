
#include "TXLib.h"
#include "Algofunc.h"

void FillArr (int data [], int size, int SizeNch, int shift);

 int main ()
     {
     int size = 0;
     int data [10] = {};
     int TotPer  = 0;
     int ChPer   = 0;
     int NchPer  = 0;
     int SizeNch = 0;
     int Sizech  = 0;
     int shift   = 0;

     TotPer = (size + 2) / 3;
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

     FillArr (data, 10, SizeNch, shift);

     PrintArray (data, 10, 3, "����� ����������");
     }

//-----------------------------------------------------------------------------

void FillArr (int data [], int size, int SizeNch, int shift)
     {
     data [0] = 1;
     int i = 1;

     for (1 <= i; i <= SizeNch; i++)
         {
         if (i % 3 != 0) data [i] = data [i - 1] + 1;
         else            data [i] = data [i - 1] + 4;
         }

     data [i] = data [i-1] + shift;

     for (SizeNch < i; i <= size; i++)
         {
         if (i % 3 != 0) data [i] = data [i - 1] - 1;
         else            data [i] = data [i - 1] - 4;
         }
     }
