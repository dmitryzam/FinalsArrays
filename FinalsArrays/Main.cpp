#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>

int main() {
	setlocale(LC_ALL, "RU");
	int n;
	
	// ������ 1. ���������� ������ N ���������.
	std::cout << "������ 1.\n����������� ������.";
	const int size1 = 10;
	int arr1[size1]{};
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 10 + 1;
		std::cout << arr1[i] << ' ';
	}
	std::cout << std::endl; // ������������ ������� ������ ������,
	// � ����� ����� ������ �� ������ ������ ������.
	std::cout << "������� ���-�� ��������� ��� ���������� -> ";
	std::cin >> n;

	// ������� ����������
	//std::sort(arr1, arr1 + n);

	// ����������� ����������
	for (int i = n - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr1[j] > arr1[i + 1])
				std::swap(arr1[j], arr1[j + 1]);

	std::cout << "�������� ������:\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";
	
	// ������ 2. ����������� �� ������.
	std::cout << "������ 2.\n����������� �� ��� ��� ������:\n";
	const int size2 = 31;
	double arr2[size2]{};
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-5 + + 30) - 30; // [-30..-5)
		arr2[i] += rand() % 11 / 10.0; // ��������� ������� �������� �� 0.0 �� 1.0 ������������ � ����� 0,1.
		std::cout << arr2[i] << ", ";
	}
	std::cout << "\b\b \n";

	std::cout << "������� ������� ������� ����������� ��� �������� -";
	double max_temp, sum = 0.0;
	int counter = 0;
	std::cin >> max_temp;

	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < max_temp)
			counter++;
	}
	std::cout << "������� ����������� �� �����: " << sum / size2 << std::endl;
	std::cout << "����������� ���������� ����: " << max_temp << " ��������: " << counter << "\n\n";

	// ������ 3.





	return 0;
}