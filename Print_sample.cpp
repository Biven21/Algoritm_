
#include "TXLib.h"
#include "AlgoFunc.h"

void FillArray (int data[], int size, int start, int step);
void FillArray123 (int data123[], int size);
void FillArray123321 (int data123321[], int size);
void FillArray1232 (int data1232[], int size);

int main ()
    {
    int data [20] = {};

    FillArray  (data, 20, 0, 10);
    PrintArray (data, 20, 5, "����� ����������");
    printf ("\n");

    int data1 [30] = {};

    FillArray  (data1, 30, 0, 10);
    PrintArray (data1, 30, 6, "����� ����������");

    int data123 [10] = {};
    FillArray123 (data123, 10);
    PrintArray (data123, 10, 3, "����� ����������");

    int data123321 [55] = {};
    FillArray123321 (data123321, 55);
    PrintArray (data123321, 55, 6, "����� ����������");

    int data1232 [20] = {};
    FillArray1232 (data1232, 20);
    PrintArray (data1232, 20, 4, "����� ����������");

    return 0;
    }

//-----------------------------------------------------------------------------

void FillArray (int data[], int size, int start, int step)
     {
     data [0] = start;

     for (int i = 1; i < size; i++)
         {
         assert (0 <= i   && i   < size);
         assert (0 <= i-1 && i-1 < size);

         data [i] = data [i - 1] + step;
         }
     }

//-----------------------------------------------------------------------------

void FillArray123 (int data123[], int size)
    {
    data123 [0] = 0;

    for (int i = 0; i < size; i++)
        {
        assert (0 <= i && i < size);

        data123 [i] = i %3 + 1;
        }
    }

//-----------------------------------------------------------------------------

void FillArray123321 (int data123321[], int size)
     {
     data123321 [0] = 0;
     int mamber = 0;
     int period = 0;

     for (int i = 0; i < size; i++)
         {
         mamber = i %3 + 1;

         printf ("\n %d ���� ������������������ %d  ", i, mamber);

         if (mamber == 1) period = period + 1;

         printf ("\n %d period %d  ", i, period);

         assert (0 <= i && i < size);

         if (period %2 == 1) data123321 [i] =      mamber %4;
         if (period %2 == 0) data123321 [i] = -1 * mamber %4 + 4;
         }
     }

//-----------------------------------------------------------------------------

void FillArray1232 (int data1232[], int size)
    {
    data1232 [0] = 1;
    int j = 0;

    for (int i = 1; i < size; i++)
        {
        j = i %4 + 1;

        printf ("\n");
        printf ("%d j  =  ", j);

        assert (0 <= i && i < size);


        if (j == 4) data1232 [i] = 2;
        else data1232 [i] = j;
        }
    }


