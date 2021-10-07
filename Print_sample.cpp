
#include "TXLib.h"
#include "AlgoFunc.h"

void FillArray (int data[], int size, int start, int step);
void FillArray123 (int data123[], int size);

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

    return 0;
    }

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
void FillArray123 (int data123[], int size)
    {
    data123 [0] = 0;

    for (int i = 0; i < size; i++)
        {
        assert (0 <= i && i < size);

        data123 [i] = i%3 + 1;
        }
    }
