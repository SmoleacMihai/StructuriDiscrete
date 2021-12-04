#include <iostream>

using namespace std;

unsigned int Factorial(int);

int main()
{
    cout << "Proiect nr. 2, elaborat de Smoleac Mihai" << endl;
    cout << "Tema: Elemente de combinatorica" << endl;

    unsigned int n;
    cout << "n=";
    cin >> n;
    cout << n << "!=" << Factorial(n) << endl;
    return 0;
}

unsigned int Factorial(int n)
{
    unsigned int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    return f;
}