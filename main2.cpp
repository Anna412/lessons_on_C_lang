 #include "Txlib.h"

void PrintArray (int data[], int size);
void FillArray  (int data[], int size,int start);

int main ()
    {
    int data [20] = {};

    FillArray  (data, 20, 0);
    PrintArray (data, 20);

    printf ("\n");
    return 0;
    }
void FillArray( int data[], int size, int start)
    {
    data[0]=start;

    for (int i = 0; i < size; i ++)
       {
        assert (0 <= i   && i   <  size);

        if ((i+1) % 6 == 0 or (i+2) % 6 == 0 or (i+3) % 6 == 0)

        data[i] = 3 - i % 3;

        else

        data[i] = 1 + i % 3;

        }
    }
void PrintArray ( int data[], int size)
    {
    for (int i = 0; i < size; i ++)
        {
        if (i % 5 == 0)  printf ("\n");

        $c; printf ("[%2d] = ",i);
        $g; printf (" %2d",    data[i]);
        $c; printf (", ");

        }
    $d;
    }
