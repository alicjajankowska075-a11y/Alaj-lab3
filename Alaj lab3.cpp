// Alaj lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
/*{
   float i = 0.0;
   while (i != 5.0) {
       cout << "Wartosc i = " << i << endl;
       i = i + 0.05;

       //if (i > 10)
       //    break;
   }
   
}*/
/* {
    int a, b;
    cout << "podaj a:";
    cin >> a;
    cout << "podaj b:";
    cin >> b;
    if (a == b)
        cout << "\nliczby sa rowne.";
    else if (a < b)
        cout << "a jest mniejsze od b.";
    else if (a > b)
        cout << "b jest wieksze od a";

}*/
/* {
    double r;
    cout << "podaj r:";
    cin >> r;
    if (0.7 <= r <= 1)
        cout << "bardzo silna korelacja dodatnia";
    else if (r >= 0.5)
        cout << "silna korelacja dodatnia";
    else if (r >= 0.3)
        cout << "umiarkowana korelacja dodatnia";
    else if (r >= 0.2)
        cout << "słaba korelacja dodatnia";
    else
        cout << "brak korelacji";

}*/

 /* {
    double x, y;
    char opcja;
    cout << "podaj x:";
    cin >> x;
    cout << "podaj y:";
    cin >> y;
    cout << "podaj znak dla działania";
    cin >> opcja;
    if (y == 0)
        cout << "nie dzielimy przez 0" << endl;
    switch (opcja)
    {
    case '+':
        cout << x + y << endl;
        break;
    case '-':
        cout << x - y << endl;
        break;
    case'*':
        cout << x * y << endl;
        break;
    case'/':
        cout << x / y << endl;
        break;
    
    }

}*/
/* {
	int i = 0;
	while (true)
	{
		i++;
		if (i == 200)
		{
			break;
		}
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}

}*/
/* {
	int n;
	cout << "podaj n: ";
	cin >> n;
	for (int i=2;i<= sqrt(n); i++)
		if (n % i == 0)
		{
			cout << "liczba ma dzielnik:" << i << endl;
			break;
		}


}*/

/* {
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a >= b)&&(a >= c))
	{
		cout << "najwieksza liczba to " << a;

	}
	else if ((b >= a)&& (b>= c))
	{
		cout << "najwieksza liczba to " << b;
	}
	else if ((c >= a) && (c >= b))
	{
		cout << "najwieksza liczba to " << c;
	}



}*/
/* {
	int suma=0;
	for (int i = 1;i <= 100;i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}
		suma += i;
	}
	cout << "Suma wynosi: " << suma;
	return 0;
}*/
/* {
	int i=1;
	while (true)
	{
		if (i % 7 == 0 && i > 50)
		{
			cout << i;
			break;
		}
		i++;
	}
}*/





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
