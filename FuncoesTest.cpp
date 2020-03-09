#include <iostream>
#include "UnitTest++.h"
#include "funcoes.h"

namespace std
{
    TEST(somaInt)
    {
        const int resultado = somaInt(2,2);
        CHECK_EQUAL(4,resultado);
    }
 }
