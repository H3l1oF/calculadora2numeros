// Calculadora de dois numeros;
#include <iostream>

using namespace std;

int main() 
{
	float a, b;
	char c;
	inicio:
	system ("cls");
	cout << "Insira dois numeros:\n";
	cin >> a >> b;
	while (cin.fail()) // se o cin der falha é aqui que faz a verificação dos numeros 
    {
    	system("cls");
        cin.clear(); // limpa o buffer de entrada para que o cin se torne utilizavel de novo
        cin.ignore(INT_MAX, '\n'); // ignora a ultima entrada ou seja a do erro.
        cout << "Erro. So pode inserir numeros inteiros ou decimais.\n";
        cout << "Insira dois numeros:\n";
        cin >> a >> b;
    }
    sub:
	cout << "Insira a equacao (+)soma (-)subtracao (*)multiplicacao (/)divisao\n";
	cin >> c;
	switch (c) {
		case '+':
			cout << a << " + " << b << " = " << a+b << endl;
			break;
		case '-':
			cout << a << " - " << b << " = " << a-b << endl;
			break;
		case '*':
			cout << a << " * " << b << " = " << a*b << endl;
			break;
		case '/':
			cout << a << " / " << b << " = " << a/b << endl;
			break;
		default:
			system("cls");
			cout << "Erro. Equacao incorrecta.\n";
			goto sub;
	}
	cout << "\nDeseja sair da calculadora? (S/N)\n";
	cin >> c;
	if (c == 'N' || c == 'n') { goto inicio; }
	else cout << "Hasta la vista, baby!";
	return 0;
}