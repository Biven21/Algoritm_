#include "TXLib.h"
#include "AlgoFunc.h"

void Data_OverAB (int data [], int size);

int main ()
    {
    int size = 8;
    int data [8] = {};

    for (int i = 0; i < size; i++) data [i] = random (size * 2);

    $y PrintArray (data, size, size, "после заполнения data random");

    Data_OverAB (data, size);

    return 0;
    }

//-----------------------------------------------------------------------------
void Data_OverAB (int data [], int size)
     {
     int partA = 3;
     int Nol = 0;

     if (partA + 1 == size / 2)
         {
         for (int i = 0; i <= partA; i++)
             {
             Nol = data [i];
             data [i] = data [size - 1 - i];
             data [size - 1 - i] = Nol;
             }
         }
     $y PrintArray (data, size, size, "после заполнения data обмен равными частями");
     }
