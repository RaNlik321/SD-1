#include <iostream>
/*int main() {
	setlocale(LC_ALL, "ru");
	int num = 0;
	std::cin >> num;
	switch (num) {
	case 1:
		std::cout << "�����";
		break;
	case 2:
		std::cout << "�����";
		break;
	}
	return 0; 
}*/
/*int main() {
	setlocale(LC_ALL, "ru");
	double one = 0;
	double two = 0;
	char sm;
	std::cout << "������ ����� = >";
	std::cin >> one;
	std::cout << "�������� = >";
	std::cin >> sm;
	std::cout << "������ ����� = >";
	std::cin >> two;
	
	if (sm == '+') {
		std::cout << one + two;
	}
	else if (sm == '-') {
		std::cout << one - two;
	}
	else if (sm == '*') {
		std::cout << one * two;
	}
	else {
		std::cout << one / two;
	}
	return 0;
}*/
/*int main() {
	setlocale(LC_ALL, "ru");
	char star = ' *';
	for (int one = 0; one < 8; one++) {
		for (int two = 0; two < 5; two++) {
			std::cout << star;
		}
		std::cout << std::endl;
	}
	return 0;
}*/
/*int main() {
	setlocale(LC_ALL, "ru");
	do
	{
		std::cout << star << "";
		a++;
	} while (false);
	for (�������)
	{

	}
	return 0;
}*/
/*int main() {
	setlocale(LC_ALL, "ru");
	double rub = 0;
	bool prov = false;
	do {
		std::cout << "������� ���-�� ������ = > ";
		std::cin >> rub;
		if (rub > 0) {
			prov = true;
			std::cout << "�������� ������: \n1) USD \n2) EUR \n3) CNY \n4) FRT \n5)";
		}
	} while (prov==true);
	
	return 0;
}
rub-rub/100*5*/
/*int main() {
	setlocale(LC_ALL, "ru");
	const int size = 8;
	int ar[size]{};
		for (int i = size;i >= 0; i--) {
			std::cin >> ar[i];
			std::cout << ar[i];
		}
		return 0;
}*/

void del(double num1, double num2) {
	std::cout << "����������� ������� �����: " << num1 / num2;
}

void Umno(double num1, double num2) {
	std::cout << "����������� ��������� �����: " << num1 * num2;
}

void Min(double num1, double num2) {
	std::cout << "����������� ��������� �����: " << num1 - num2;
}

void Plus (double num1, double num2){
	std::cout << "����������� �������� �����: " << num1 + num2;
}

int main() 
{
	setlocale(LC_ALL, "ru");
	double num1 = 0;
	double num2 = 0;
	double rez = 0;
	char sm;

	std::cout << "������ ����� => ";
	std::cin >> num1;
	std::cout << "�������� => ";
	std::cin >> sm;
	std::cout << "������ ����� => ";
	std::cin >> num2;
	if (sm == '+') {
		Plus(num1, num2);
	}
	else if (sm == '-') {
		Min(num1, num2);
	}
	else if (sm == '*') {
		Umno(num1, num2);
	}
	else {
		del(num1, num2);
	}
	return 0;
}

