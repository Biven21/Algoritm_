#include "TXLib.h"
#include "AlgoFunc.h"

void Cikl_sdvig_Left (int data [], int size);

int main ()
    {
    int size = 11;
    int data [11] = {};


    for (int i = 0; i < size; i++) data [i] = random (size * 2);

    $y PrintArray (data, size, size, "после заполнени€ data random");

    Cikl_sdvig_Left (data, size);

    return 0;
    }

//-----------------------------------------------------------------------------
void Cikl_sdvig_Left (int data [], int size)
     {
     int ciklleft = data [0];
     int sdvigL = 0;

     for (int i = 0; i < size - 1; i++)
         {
         data [i] = data [i + 1];
         }
     data [size - 1] =  ciklleft;

     PrintArray (data, size, size, "после здвигв влево на 1 позицию");
     }
