#include<iostream>
// using namespace std;

/*
Напишите рекурсивную функцию вычисления наибольшего общего делителя двух положительных целых чисел (Greatest Common Divisor, GCD). Для этого воспользуйтесь следующими свойствами:

GCD(a, b) = GCD(b, a \bmod b)GCD(a,b)=GCD(b,amodb)
GCD(0, a) = aGCD(0,a)=a
GCD(a, b) = GCD(b, a)GCD(a,b)=GCD(b,a)
Требования к реализации: в данном задании запрещено пользоваться циклами. Вы можете заводить любые вспомогательные функции, если они вам нужны. Функцию main определять не нужно.
*/

unsigned gcd(unsigned a, unsigned b) {
	if (a == 0) {
		return b;
	} else if (b == 0) {
		return a;
	} else if (a > b) {
		a = a% b;
		if (a == 0){
			return b;
		} else {
		    return gcd(a, b);
	    }
	} else if (b > a) {
		b = b% a;
		if (b == 0){
			return a;
		} else {
		    return gcd(a, b);
	    }
    }
	return 0;
}


int main () {
    
    int a = 0;
    int b = 15;
    
    int del_func = gcd(a, b);
    
    std::cout << del_func << std::endl;
    system("pause");
    return 0;
}