#include <iostream>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include "randExpr.h"

using namespace std;

string randomizeExpr()
{
    std::string exprTemp = "(NO[N)ON]";
    std::string operations = "+-*/";
    std::string res = "";

    srand(time(NULL));
    int place = rand() % 3;

    int i = 0;
    while (i < exprTemp.length())
    {
        switch (exprTemp[i])
        {
        case '(':
        {
            res += (place == 1 ? "(" : "");
            break;
        }
        case ')':
        {
            res += (place == 1 ? ")" : "");
            break;
        }
        case '[':
        {
            res += (place == 2 ? "(" : "");
            break;
        }
        case ']':
        {
            res += (place == 2 ? ")" : "");
            break;
        }
        case 'N':
        {
            res += (char)(0x31 + rand() % 9);
            break;
        }
        case 'O':
        {
            res += operations[rand() % 4];
            break;
        }
        }

        ++i;
    }

    return res;
}