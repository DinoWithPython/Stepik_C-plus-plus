# include <iostream >
// using namespace std;

/*
Предположим, что в программе определён макрос sqr.

define sqr(x) x * x

Какое значение будет иметь следующее выражение?

sqr(3 + 0)
*/


int main()
{
	
	#define sqr(x) x * x
	std::cout << sqr(3 + 0);

  system("pause");
  return 0;
}