#include<iostream>
// using namespace std;

/*
В коде программы определена следующая функция:

int foo(int n) {
    if (n <= 0)
        return 1;
    return foo((n * 2) / 3) + foo(n - 2);
}
Нужно посчитать, сколько всего раз будет вызвана функция foo, если ее вызвать с аргументом 3 (т.е. foo(3)). Самый первый вызов тоже нужно посчитать. 

Подсказка: для решения этой задачи будет полезно нарисовать дерево рекурсивных вызовов.
*/

int foo(int n) {
	std::cout << 1;
    if (n <= 0)
        return 1;
    return foo((n * 2) / 3) + foo(n - 2);
}


int main () {
    
    int n = 3;
    int count = 0;
    int del_func = foo(n);
    
    std::cout << del_func << std::endl;
    system("pause");
    return 0;
}