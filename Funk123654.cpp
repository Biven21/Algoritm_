
#include "TXLib.h"
#include "Algofunc.h"

void FillArr (int data [], int SizeNch);
int DataDoun (int dd [], int Sizech);
void Data_dd (int data [], int SizeNch, int dd [], int Sizech, int size);

 int main ()
     {
     int size = 8;
     int data [8] = {[0] = 1};
     int NchPer  = 0;
     int TotPer  = 0;
     int ChPer   = 0;
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
         }
     else
         {
         Sizech = ChPer * 3;
         SizeNch = size - Sizech;
         }

     printf ("\n ????? ?????? ?????? SizeNch = %d \n ????? ?????? ?????? = %d \n ????? = %d",
             SizeNch, Sizech, shift);

     FillArr (data, SizeNch);

     int dd [Sizech];
     DataDoun (dd, Sizech);

     Data_dd (data, SizeNch, dd, Sizech, size);

     $y PrintArray (data, 8, 3, "????? ?????????? Data+dd");
//     PrintArray (dd, Sizech, 6, "????? ?????????? dd");

     return 0;
     }

//-----------------------------------------------------------------------------

void FillArr (int data [], int SizeNch)
     {
     for (int i = 1; i < SizeNch; i++)
         {
         assert (0 <= i   && i   < SizeNch);
         assert (0 <= i-1 && i-1 < SizeNch);

         if (i % 3 != 0) data [i] = data [i - 1] + 1;
         else            data [i] = data [i - 1] + 4;
         //PrintArray (data, 16, 3, "????? ?????????? data one");
         }
     }

//-----------------------------------------------------------------------------

int DataDoun (int dd [], int Sizech)
     {
     dd [0] = 4;

     for (int j = 1; j < Sizech; j++)
         {
         assert (0 <= j     && j     < Sizech);
         assert (0 <= j - 1 && j - 1 < Sizech);

         if (j % 3 != 0) dd [j] = dd [j - 1] + 1;
         else            dd [j] = dd [j - 1] + 4;
         }

     return 0;
     }

//-----------------------------------------------------------------------------

void Data_dd (int data [], int SizeNch, int dd [], int Sizech, int size)
     {
     int i = SizeNch;
     int j = Sizech - 1;
     for (i = SizeNch;  i < size; i++)
         {
         assert (SizeNch <= i && i < size);

         data [i] = dd [j];

         j--;
       }
     }
