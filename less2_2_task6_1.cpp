#include "TXLib.h"
#include "AlgoFunc.h"

void Data_OverAB (int data [], int size);

int main ()
    {
    int size = 8;
    int data [8] = {};

    for (int i = 0; i < size; i++) data [i] = random (size * 2) * 100 + i;

    $y PrintArray (data, size, size, "����� ���������� data random");

    Data_OverAB (data, size);

    return 0;
    }

//-----------------------------------------------------------------------------
void Data_OverAB (int data [], int size)
     {
     int namberA = 3;
     int partA = namberA + 1;
     int partB = size - partA;
     int Nol = 0;

     $y printf ("\n ����� ������������ ����� ������� � = %d \n ������ ����� ����� ������� part�   = %d", namberA, partA);
     $y printf ("\n ������ ������ ����� ������� partB  = %d", partB);

     if (partA == partB)
         {
         for (int i = 0; i < partA; i++)
             {
             assert (0 <= i && i < partA);

             Nol = data [i];
             data [i] = data [partA + i];
             data [partA + i] = Nol;
             }
         $y PrintArray (data, size, size, "����� ���������� data ����� ������� �������");
         }

     if (partA < partB)
         {
         for (int i = 0; i <= partA; i++)
             {
             assert (0 <= i && i <= partA);

             Nol = data [i];
             data [i] = data [size - partA + i];
             data [size - partA + i] = Nol;
             }
        $g PrintArray (data, size, size, "����� ���������� data");
         for (int j = 0; j <= partA; j++)
             {
             assert (0 <= j && j <= partA);

             int Nol = data [0];
             for (int i = 0; i < partB; i++)
                 {
                 assert (0 <= i && i <= partB);

                 data [i] = data [i + 1];
                 PrintArray (data, size, size, "����� ���������� data");
                 printf ("i = %d", i);
                 }
             data [partB] = Nol;
             }

         $y PrintArray (data, size, size, "����� ���������� data ����� ������� A < B");
         printf ("\n A = %d  <  B = %d", partA + 1, partB);
         }
     if (partA > partB)
         {
         for (int i = 0; i <= partB - 1; i++)
             {
             Nol = data [i];
             data [i] = data [(size - 1) - partB + i];
             data [(size - 1) - partB + i] = Nol;
             }
         for (int j = 0; j <= (partA - partB); j++)
             {
             assert (0 <= j && j <= (partA - partB));

             Nol = data [partB + 1];
             for (int i = partB + 1; i < size; i++)
                 {
                 data [i] = data [i + 1];
                 }
             data [size - 1] = data [partB + 1];
             }
         printf ("\n A = %d   B = %d", partA + 1, partB);
         PrintArray (data, size, size, "����� ���������� data ����� ������� A > B");
         }

     }
