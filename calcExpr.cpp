#include <stack>
#include <cctype>
#include <map>
#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
#include <sstream> 
#include <iterator>
#include <cmath>
#include <cctype>
#include "calcExpr.h"

using namespace std;

string strToRPN(string str) {
    string rpnStr;

    size_t found;
    while ((found = str.find(' ')) != string::npos) // Удаляем пробелы
    {
        str.erase(found, 1);
    }

    for (int i = 0; i < str.size(); ++i) // Заменяем выражения вида -a или +a на (0-a) или (0+a) соответственно
    {
        if ((str[i] == '+' || str[i] == '-') && (i == 0 || (!isalnum(str[i - 1]) && str[i - 1] != ')')))
        {
            auto it = find_if(str.begin() + i + 1, str.end(), [](char const s) {return !isalnum(s); });
            str.insert(it, ')');
            str.insert(i, "(0");
        }
    }

    map<char, size_t> map;
    stack<char> stack;

    map.insert({ '^', 4 }); // Задаем операциям приоритет
    map.insert({ '*', 3 });
    map.insert({ '/', 3 });
    map.insert({ '+', 2 });
    map.insert({ '-', 2 });
    map.insert({ '(', 1 });
    map.insert({ ')', 1 });

    for (auto s : str) // Реализуем алгоритм нахождения ОПЗ
    {
        if (!isalnum(s))
        {
            if (s == '(')
            {
                stack.push(s);
            }

            else if (s == ')')
            {
                while (stack.top() != '(')
                {
                    rpnStr += ' ';
                    rpnStr += stack.top();
                    stack.pop();
                }

                stack.pop();
            }

            else if (stack.empty() || map[stack.top()] < map[s])
            {
                stack.push(s);
                rpnStr += ' ';
            }

            else
            {
                do
                {
                    rpnStr += ' ';
                    rpnStr += stack.top();
                    rpnStr += ' ';
                    stack.pop();
                } while (!(stack.empty() || (map[stack.top()] < map[s])));

                stack.push(s);
            }
        }

        else
        {
            rpnStr += s;
        }
    }

    while (!stack.empty())
    {
        rpnStr += ' ';
        rpnStr += stack.top();
        stack.pop();
    }

    return rpnStr;
}

double strToDouble(const string& str) // Переводим строку в число
{
    double x = 0.0;
    istringstream(str) >> x;
    return x;
}

double calcBinary(const double& op1, // Определяем бинарные операции
    const double& op2,
    const char& operation)
{
    double result = 0.0;
    switch (operation)
    {
    case ('+'):  result = op1 + op2;
        break;
    case ('-'):  result = op1 - op2;
        break;
    case ('^'): result = pow(op1, op2);
        break;
    case ('*'):  result = op1 * op2;
        break;
    case ('/'):  if (op2 != 0) result = op1 / op2;
              else result = -1;
        break;
    }
    return result;
}

double calculateExpr(std::string str) // 
{
    string rpnStr = strToRPN(str);

    std::stringstream ss(rpnStr);
    std::istream_iterator<std::string> begin(ss);
    std::istream_iterator<std::string> end;
    std::vector<std::string> polishExpr(begin, end);

    const set<string> operators = { "+", "-", "*", "/", "^"};
    stack<double>* operands = new stack<double>();

    for (const auto& e : polishExpr)
    {
        if (operators.find(e) != operators.end())
        {
            double x2 = operands->top();
            operands->pop();
            double x1 = operands->top();
            operands->pop();
            operands->push(calcBinary(x1, x2, e[0]));
        }
        else
            operands->push(strToDouble(e));
    }

    double result = operands->top();

    return round(result*100)/100;
}
