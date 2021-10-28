#include "TXLib.h"
#include "AlgoFunc.h"

int main ()
    {
    int Size   = 1;
    int shift  = 4;
    int NPer   = 3;
    int data [0] = {};

    int TotPer = (Size + (NPer - 1)) / NPer;
    printf ("\n TotPer = %d", TotPer);

    return 0;
    }
