
#include "TXLib.h"
#include "Algofunc.h"

void FillArr (int data [], int size, int SizeNch, int Sizech);
void DataDoun (int Sizech, int dd []);

 int main ()
     {
     int size = 16;
     int data [] = {};
     int NchPer = 0;
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
     else Sizech = ChPer * 3;

     printf ("\n ����� ������ ������ SizeNch = %d \n ����� ������ ������ = %d \n ����� = %d", SizeNch, Sizech, shift);

     FillArr (data, 16, SizeNch, Sizech);

     PrintArray (data, 16, 3, "����� ����������");

     return 0;
     }

//-----------------------------------------------------------------------------

void FillArr (int data [], int size, int SizeNch, int Sizech)
     {
     data [0] = 1;
     int dd [] = {};
     for (int i = 1; i < SizeNch; i++)
         {
         assert (0 <= i   && i   < SizeNch);
         assert (0 <= i-1 && i-1 < SizeNch);

         if (i % 3 != 0) data [i] = data [i - 1] + 1;
         else            data [i] = data [i - 1] + 4;
         printf ("\n data [i] = %d  i = %d", data [i], i);
         }

     DataDoun (Sizech, dd);

     PrintArray (dd, Sizech, 6, "����� ����������");

     int j = 0;
     int i = SizeNch;
     for (i = SizeNch;  i < size; i++)
         {
         printf ("\n dd[j] = %d", dd [j]);

         assert (SizeNch <= i  && i < size);


         data [i] = dd [j];

         printf ("\n data[i] = %d", data [i]);
         printf ("\n");

         j++;
         }
     }

//-----------------------------------------------------------------------------

void DataDoun (int Sizech, int dd [])
     {
     dd [0] = 4;

     for (int j = 1; j < Sizech; j++)
         {
         assert (0 <= j-1 && j-1 < Sizech);

         if (j % 3 != 0) dd [j] = dd [j - 1] + 1;
         else            dd [j] = dd [j - 1] + 4;

         printf ("\n\n dd [j] = %d  j = %d", dd [j], j);
         }
     }
//D:\school\���\�����������\Algoritm_\Funk123654.cpp|58|error: expected primary-expression before 'int'|
