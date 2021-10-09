
#include "TXLib.h"
#include "AlgoFunc.h"

void FillArray       (int data[],       int size, int start, int step);
void FillArray123    (int data123[],    int size);
void FillArray123321 (int data123321[], int size);
void FillArray1232   (int data1232[],   int size);
void FillArray1342   (int data1342[],   int size);
void FillArray123654 (int data123654[], int size);

int main ()
    {
    int data [20] = {};

    FillArray  (data, 20, 0, 10);
    PrintArray (data, 20, 5, "после заполнения");
    printf ("\n");

    int data1 [30] = {};

    FillArray  (data1, 30, 0, 10);
    PrintArray (data1, 30, 6, "после заполнения");

    int data123 [10] = {};
    FillArray123 (data123, 10);
    PrintArray (data123, 10, 3, "после заполнения");

    int data123321 [55] = {};
    FillArray123321 (data123321, 55);
    PrintArray (data123321, 55, 6, "после заполнения");

    int data1232 [20] = {};
    FillArray1232 (data1232, 20);
    PrintArray (data1232, 20, 4, "после заполнения");

    int data1342 [11] = {};
    FillArray1342 (data1342, 11);
    PrintArray (data1342, 11, 5, "после заполнения massiv 1342");

    int data1342ch [10] = {};
    FillArray1342 (data1342ch, 10);
    PrintArray (data1342ch, 10, 5, "после заполнения massiv 1342");

    int data123654[24];
    FillArray123654 (data123654, 24);
    PrintArray (data123654, 24, 5, "после заполнения massiv 123654");

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

         printf ("\n %d член последовательности %d  ", i, mamber);

         if (mamber == 1) period = period + 1;

         printf ("\n %d period %d  ", i, period);

         assert (0 <= i && i < size);

         if (period %2 == 1) data123321 [i] =      mamber %4;
         if (period %2 == 0) data123321 [i] = -1 * mamber %4 + 4;
         }
     }

//--------------------1232---------------------------------------------------------

void FillArray1232 (int data1232[], int size)
    {
    data1232 [0] = 1;
    int j = 0;

    for (int i = 1; i < size; i++)
        {
        j = i %4 + 1;

        assert (0 <= i && i < size);

        if (j == 4) data1232 [i] = 2;
        else        data1232 [i] = j;
        }
    }

//--------------------1342---------------------------------------------------------

void FillArray1342 (int data1342[], int size)
     {
     data1342 [0] = 1;

     for (int i = 1; i <= size / 2; i++)
         {
         assert (0 <= i     && i     <= size/2);
         assert (0 <= i - 1 && i - 1 <= size/2);

         data1342 [i] = data1342 [i-1] + 2;

         printf ("\n");
         printf ("\n  i = %d   , d = %d ", i, data1342[i]);
         }


     if (size %2 != 0)
         {
         data1342 [size/2 + 1] =  data1342 [size/2] - 1;

         for (int i = size/2 + 2; i < size; i++)
             {
             assert (size/2 + 1 <= i && i < size);
             assert (0 <= i - 1 && i - 1 < size);

             data1342 [i] = data1342 [i - 1] - 2;
             }
          }
     else
          {
          data1342 [size/2] =  data1342 [size/2 - 1] + 1;

          for (int i = size/2 + 1; i < size; i++)
             {
             assert (0 <= i - 1 && i - 1 < size);

             data1342 [i] = data1342 [i - 1] - 2;
             }
          }
    }

//---------------------123654--------------------------------------------------------

void FillArray123654 (int data123654[], int size)
     {
     data123654 [0] = 1;
     int i = 0;
     int NamMemNch;
     double periodNch;
//     int NamMambNch = siz
     int NamPeriod = ceil ((size + 1) / 3);

     if (NamPeriod % 2 == 1)
         {
         periodNch = ceil  ((size / 2) / 3);
         NamMemNch = (size / 2) % 3 + (size / 2) / 3;
         double periodch  = ((size / 2) / 3);
         }
     else
         {
         periodNch = ((size / 2) / 3);
         double periodch  = ceil  ((size / 2) / 3);
         int NamMemch = (size / 2) % 3 + (size / 2) / 3;
         }

     printf ("\n size %d, NamPeriod %d",  size, NamPeriod);

     while (i <= NamMemNch);
         for (int j = 1; j <= periodNch; j++)
             {
             for (int k = 1; k <= 2; k++)
                 {
                 i = i + k;
                 data123654 [i] = data123654 [i-1] + 1;
                 }
             i++;
             data123654 [i] = data123654 [i-1] + 4;
             }

     }
