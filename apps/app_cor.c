#include "ec_rgb_colors.h"
#include "stdio.h"

int main (int argc, char * argv[] )
{
    if (argc < 3)
    {
        ec_imprimirCor("parametros não informados", "RED");
        return 1;
    }

    //texto e cor
    ec_imprimirCor(argv[1], argv[2]);
    printf("\n");
    
    return 0;

}