#include "TXLib.h"
#include "AlgoFunc.h"

void Data_OverAB (int data [], int size);
void Data_A_paritet_B (int data [], int partA);
void Data_A_more_B (int data [], int partA, int partB, int size);
void Data_A_less_B (int data [], int size, int partA, int partB);

int main ()
    {
    int size = 15;
    int data [15] = {};

    for (int i = 0; i < size; i++) data [i] = random (size * 2) * 100 + i;

    $y PrintArray (data, size, size, "����� ���������� data random");

    Data_OverAB (data, size);

    return 0;
    }

//-----------------------------------------------------------------------------
void Data_OverAB (int data [], int size)
     {
     int namberA = 10;
     int partA = namberA + 1;
     int partB = size - partA;
     int Nol = 0;

     $y printf ("\n ����� ������������ ����� ������� � = %d \n ������ ����� ����� �������   part� = %d", namberA, partA);
     $y printf ("\n ������ ������ ����� �������  partB = %d", partB);

     if (partA == partB)
         {
         Data_A_paritet_B (data, partA);
         $y PrintArray (data, size, size/2, "����� ���������� data, ����� ������� �������");
         }

     if (partA < partB)
         {
         Data_A_less_B (data, size, partA, partB);
         $y PrintArray (data, size, size/2, "����� ���������� data, ����� ������� A < B");
         }

     if (partA > partB)
         {
         Data_A_more_B (data, partA, partB, size);
         PrintArray (data, size, size/2, "����� ���������� data, ����� ������� A > B");
         }
    }

//-----------------------------------------------------------------------------

void Data_A_paritet_B (int data [], int partA)
     {
     int Nol = 0;
     for (int i = 0; i < partA; i++)
        {
        assert (0 <= i && i < partA);

        Nol = data [i];
        data [i] = data [partA + i];
        data [partA + i] = Nol;
        }
    }

//-----------------------------------------------------------------------------

void Data_A_more_B (int data [], int partA, int partB, int size)
     {
     int Nol = 0;

     for (int i = 0; i < partB; i++)
         {
         assert (0 <= i && i < partB);

         Nol = data [i];
         data [i] = data [partA + i];
         data [partA + i] = Nol;
         }
     //PrintArray (data, size, size, "���� ������ ������� � � � data, ����� ������� A > B");
     for (int j = 1; j <= (partA - partB); j++)
         {
         assert (1 <= j && j <= (partA - partB));

         Nol = data [partB]; // $r printf ("\n partB = %d   Nol = %d  size = %d", partB, Nol, size);
         for (int i = partB; i < size - 1; i++)
             {
             assert (partB <= i && i < size - 1);

             data [i] = data [i + 1];
             //PrintArray (data, size, size, "� �������� ���������� data, ����� ������� A > B ������");
             }
         data [size - 1] = Nol;
         //$r PrintArray (data, size, size, "� �������� ���������� data, ����� ������� A > B � ��������� ������");
         }
     }

//-----------------------------------------------------------------------------

void Data_A_less_B (int data [], int size, int partA, int partB)
     {
     int Nol = 0;

     for (int i = 0; i < partA; i++)
         {
         assert (0 <= i && i < partA);

         Nol = data [i];
         data [i] = data [size - partA + i];
         data [size - partA + i] = Nol;
         }
     //$g PrintArray (data, size, size, "����� ���������� data");
     for (int j = 0; j < partA; j++)
         {
         assert (0 <= j && j < partA);

         int Nol = data [0];
         for (int i = 0; i < partB - 1; i++)
            {
             assert (0 <= i && i < partB - 1);

             data [i] = data [i + 1];
             //PrintArray (data, size, size, "����� ���������� data");
             //printf ("i = %d", i);
             }
         data [partB - 1] = Nol;
         }
     }
