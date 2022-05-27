# include <iostream >
using namespace std;

/*
Программа принимает на вход две переменные a и b и выводит на экран их сумму.
*/

int main()
{
    int a = 0;
    int b = 0;
    
    cout << "Input a: ";
    cout.flush();
    cin >> a;
    
    cout << "Input b: ";
    cout.flush();
    cin >> b;
    
    cout << "a + b = " << (a + b) << endl;
    
    system("pause");
    return 0;
}