#include<iostream>
#include<string>
using namespace std;

void Food(float sex, float goal, float weight) {
	float uglevod;
	if (sex == 1 && goal == 1){
		uglevod = 2;
	}
    if (sex == 1 && goal == 2){
		uglevod = 5;
	}
    if (sex == 2 && goal == 1){
		uglevod = 0.5;
	}
    if (sex == 2 && goal == 2){
		uglevod = 3;
	}

	//--------------------------------------------------- �����
	float belki;
	if (sex == 1 && goal == 1){
		belki = 2;
	}
    if (sex == 1 && goal == 2){
		belki = 3;
	}
    if (sex == 2 && goal == 1){
		belki = 1.5;
	}
    if (sex == 2 && goal == 2){
		belki = 2.5;
	}

	cout << endl << "\t�����! ��������� � �������..." << endl;
	cout << "� ����� ��� ����� ����������:" << endl;
	cout << "\t������: " << weight * belki << "�." << endl;
	cout << "\t���������: " << weight * uglevod << "�." << endl;
	cout << "\t�����: " << weight * 0.5 << "�." << endl;
}

//------------------------------------------------------------------���������� ��� �
void TrainingsForMen(int goal, int days, int experiance) {
	int times;
	int repits;
	if (goal == 1) {
		switch (experiance) {
		case 1: times = 2;
			repits = 15;
			break;
		case 2:  times = 3;
			repits = 20;
			break;
		case 3: times = 3;
			repits = 25;
			break;
		}
		switch (days) {

		case 3: cout << "�������� ����� ����� ����������:"
			<< "\n\t���� 1�:"
			<< "\n\t\t������ 15 ���."
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t�������� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ����. ����� �� ����� " << times << "�" << repits
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t������ 45 ���"
			<< "\n\t���� 2�:"
			<< "\n\t\t������ 15 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t���� ����. ����� �� ����� " << times << "�" << repits
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t�������� � ��������� " << times << "�" << repits
			<< "\n\t\t������ 45 ���"
			<< "\n\t���� 3�:"
			<< "\n\t\t������ 15 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t���� ����. ����� �� ����� " << times << "�" << repits
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t�������� � ��������� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t������ 45 ���"
			<< "\n\n��������� ��� ���!" << endl;
			break;
		case 4: cout << "�������� ����� ����� ����������:"
			<< "\n\t���� 1�:" << endl << "\t\t������ 15 ���."
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t�������� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ����. ����� �� ����� " << times << "�" << repits
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t������ 30 ���"
			<< "\n\t���� 2�:"
			<< "\n\t\t������ 60 ���."
			<< "\n\t���� 3�:"
			<< "\n\t\t������ 15 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t���� ����. ����� �� ����� " << times << "�" << repits
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t�������� � ��������� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t������ 30 ���"
			<< "\n\t���� 4�:"
			<< "\n\t\t������ 60 ���."
			<< "\n\n��������� ��� ���!"
			<< endl;
			break;
		case 5: cout << "�������� ����� ����� ����������:"
			<< "\n\t���� 1�:" << endl << "\t\t������ 15 ���."
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t�������� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ����. ����� �� ����� " << times << "�" << repits
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t������ 30 ���"
			<< "\n\t���� 2�:"
			<< "\n\t\t������ 60 ���."
			<< "\n\t���� 3�:"
			<< "\n\t\t������ 15 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t���� ����. ����� �� ����� " << times << "�" << repits
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t�������� � ��������� " << times << "�" << repits
			<< "\n\t\t������ 30 ���"
			<< "\n\t���� 4�:"
			<< "\n\t\t������ 60 ���."
			<< "\n\t���� 5�:"
			<< "\n\t\t������ 15 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t���� ����. ����� �� ����� " << times << "�" << repits
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t�������� � ��������� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\nt\t������ 30 ���"
			<< "\n\n��������� ��� ���!" << endl;
			break;
		case 6: cout << "�������� ����� ����� ����������:"
			<< "\n\t���� 1�:"
			<< "\n\t\t������ 60 ���."
			<< "\n\t���� 2�:" << endl << "\t\t������ 15 ���."
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t�������� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ����. ����� �� ����� " << times << "�" << repits
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t������ 20 ���"
			<< "\n\t���� 3�:"
			<< "\n\t\t������ 60 ���."
			<< "\n\t���� 4�:"
			<< "\n\t\t������ 15 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t���� ����. ����� �� ����� " << times << "�" << repits
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t�������� � ��������� " << times << "�" << repits
			<< "\n\t\t������ 20 ���"
			<< "\n\t���� 5�:"
			<< "\n\t\t������ 60 ���."
			<< "\n\t���� 6�:"
			<< "\n\t\t������ 15 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t���� ����. ����� �� ����� " << times << "�" << repits
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t�������� � ��������� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t������ 20 ���"
			<< "\n\n��������� ��� ���!" << endl;
			break;

		}
	}
	else {
		switch (experiance) {
		case 1: times = 2;
			repits = 15;
			break;
		case 2:  times = 3;
			repits = 12;
			break;
		case 3: times = 3;
			repits = 10;
			break;
		}
		switch (days) {
		case 2:cout<< "�������� ����� ����� ����������:" 
			<< "\n\t���� 1�:" << endl << "\t\t������ 5 ���."
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t��� ������ " << times << "�" << repits
			<< "\n\t\t������������ " << times << "�" << "max"
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t������ 5 ���"
			<< "\n\t���� 2�:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t������������ " << times << "�" << "max"
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t��� ������ " << times << "�" << repits
			<< "\n\n\t\t������ 5 ���"
			<< "\n\n��������� ��� ���!" 
			<< endl;
			break;
		case 3:  cout << "�������� ����� ����� ����������:"
			<< "\n\t���� 1�:" << endl << "\t\t������ 5 ���."
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t��� ������ " << times << "�" << repits
			<<  "\n\t\t������������ " << times << "�" << "max"
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t������ 5 ���"
			<< "\n\t���� 2�:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t������������ " << times << "�" << "max"
	        << "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t��� ������ " << times << "�" << repits
			<< "\n\t\t������ 5 ���"
			<< "\n\t���� 3�:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t������������ " << times << "�" << "max"
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t��� ������ " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t������ 5 ���"
			<< "\n\n��������� ��� ���!" << endl;
			break;
		case 4:  cout << "�������� ����� ����� ����������:"
			<< "\n\t���� 1�:" << endl << "\t\t������ 5 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t��� ������ " << times << "�" << repits
			<< "\n\t\t���������� ��� ���� " << times << "�" << repits
			<< "\n\t\t�������� ��� ���� " << times << "�" << repits
			<< "\n\t\t���� " << times << "�" << repits
		    << "\n\t\t������ 5 ���"
			<< "\n\t���� 2�:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ��� ����� " << times << "�" << repits
			<< "\n\t\t�������� ��� ����� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t���� �������� ����� ������� " << times << "�" << repits
			<< "\n\t\t������ 5 ���"
			<< "\n\t���� 3�:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t������������ " << times << "�" << "max"
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t���� ����. ����� �� ������ " << times << "�" << repits
			<< "\n\t\t������ ����� ����� " << times << "�" << repits
			<< "\n\t\t������ 5 ���"
			<< "\n\t���� 4�:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t�������� ��� �� ��������� ������ " << times << "�" << repits
			<< "\n\t\t������� � ��������� ���� ������������ " << times << "�" << repits
			<< "\n\t\t���������� ��� ���� � ��������� " << times << "�" << repits
			<< "\n\t\t���������� ��� �� ����� " << times << "�" << repits
			<< "\n\t\t������ 5 ���"
			<< "\n\n��������� ��� ���!" << endl;
			break;
		case 5:  cout << "�������� ����� ����� ����������:" 
			<< "\n\t���� 1�:" << endl << "\t\t������ 5 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t��� ������ " << times << "�" << repits
			<< "\n\t\t���������� ��� ���� " << times << "�" << repits
			<< "\n\t\t�������� ��� ���� " << times << "�" << repits
			<< "\n\t\t���� " << times << "�" << repits
			<< "\n\t\t������ 5 ���"
			<< "\n\t���� 2�:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t���� ������ � ���������� " << times << "�" << repits
			<< "\n\t\t���� �������� ����� ������� " << times << "�" << repits
			<< "\n\t\t������ ����� ����� " << times << "�" << repits
			<< "\n\t\t������ 5 ���"
			<< "\n\t���� 3�:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ��� ����� " << times << "�" << repits
			<< "\n\t\t�������� ��� ����� " << times << "�" << repits
			<< "\n\t\t������ ������� ������ 3 � MAX"
			<< "\n\t\t������ 5 ���"
			<< "\n\t���� 4�:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t������������ " << times << "�" << "max"
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t���� ����. ����� �� ������ " << times << "�" << repits
			<< "\n\t\t�������� ���� " << times << "�" << repits
			<< "\n\t\t������ 5 ���"
			<< "\n\t���� 5�:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t�������� ��� �� ��������� ������ " << times << "�" << repits
			<< "\n\t\t������� � ��������� ���� ������������ " << times << "�" << repits
			<< "\n\t\t���������� ��� ���� � ��������� " << times << "�" << repits
			<< "\n\t\t���������� ��� �� ����� " << times << "�" << repits
			<< "\n\t\t������ 5 ���"
			<< "\n\n��������� ��� ���!" << endl;
			break;
		case 6:  cout << "�������� ����� ����� ����������:"
			<< "\n\t���� 1�:" << endl << "\t\t������ 5 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t��� ������ " << times << "�" << repits
			<< "\n\t\t���������� ��� ���� " << times << "�" << repits
			<< "\n\t\t�������� ��� ���� " << times << "�" << repits
			<< "\n\t\t���� " << times << "�" << repits
			<< "\n\t\t������ 5 ���"
			<< "\n\t���� 2�:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t���� ������ � ���������� " << times << "�" << repits
			<< "\n\t\t���� �������� ����� ������� " << times << "�" << repits
			<< "\n\t\t������ ����� ����� " << times << "�" << repits
			<< "\n\t\t������ 5 ���"
			<< "\n\t���� 3�:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t��� ������ ���� " << times << "�" << repits
			<< "\n\t\t��� �������� ��� ����� " << times << "�" << repits
			<< "\n\t\t�������� ��� ����� " << times << "�" << repits
			<< "\n\t\t������ ������� ������ 3 � MAX"
			<< "\n\t\t������ 5 ���"
			<< "\n\t���� 4�:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t������������ " << times << "�" << "max"
			<< "\n\t\t���� ���. ����� � ����� " << times << "�" << repits
			<< "\n\t\t���� ����. ����� �� ������ " << times << "�" << repits
			<< "\n\t\t�������� ���� " << times << "�" << repits
			<< "\n\t\t������ 5 ���"
			<< "\n\t���� 5�:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t����� " << times << "�" << repits
			<< "\n\t\t�������� ��� �� ��������� ������ " << times << "�" << repits
			<< "\n\t\t������� � ��������� ���� ������������ " << times << "�" << repits
			<< "\n\t\t���������� ��� ���� � ��������� " << times << "�" << repits
			<< "\n\t\t���������� ��� �� �����  " << times << "�" << repits
			<< "\n\t\t������ 5 ���"
			<< "\n\t���� 6�:"
			<< "\n\t\t������ 60 ���."
			<< "\n\n��������� ��� ���!" << endl;
			break;
		
		}
	}
}
// -------------------------------------------------------------���������� ��� �
void TrainingsForWeman(int goal, int days,int experiance) {
	int times;
	int repits;
	
	
	if (goal == 1) {
		switch (experiance) {
		case 1: times = 2;
			repits = 15;
			break;
		case 2:  times = 3;
			repits = 20;
			break;
		case 3: times = 3;
			repits = 25;
			break;
		}
		switch (days) {
			
		
		case 3: cout << "�������� ����� ����� ����������:" 
			<<"\n\t���� ������:"
			<<"\n\t\t������ 30 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t���������� + ���������� ��� "<< times <<"�"<< repits
			<< "\n\t\t��� ������ + ������� �� ������� "<< times << "�" << repits
			<< "\n\t\t���� ������������� ����� �� ������ + �������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ��������������� ����� + ��� �������� ���� " << times << "�" << repits
			<< "\n\t\t��������� + ���������� ��� �� ����� " << times << "�" << repits
			<< "\n\t\t������ 30 ���."
		<< "\n\t���� ������:"
			<< "\n\t\t������ 30 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t���� ������������� ����� �� ������ + �������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ��������������� ����� + ��� �������� ���� " << times << "�" << repits
			<< "\n\t\t��������� + ���������� ��� �� ����� " << times << "�" << repits
			<< "\n\t\t���������� + ���������� ��� " << times << "�" << repits
			<< "\n\t\t��� ������ + ������� �� ������� " << times << "�" << repits
			<< "\n\t\t������ 30 ���."
		<< "\n\t���� ������:"
			<< "\n\t\t������ 30 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t��������� + ���������� ��� �� ����� " << times << "�" << repits
			<< "\n\t\t���������� + ���������� ��� " << times << "�" << repits
			<< "\n\t\t��� ������ + ������� �� ������� " << times << "�" << repits
			<< "\n\t\t���� ������������� ����� �� ������ + �������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ��������������� ����� + ��� �������� ���� " << times << "�" << repits
			<< "\n\t\t������ 30 ���."
			<<"\n\n ��������� ��� ���!"
			<< endl;
			break;
		case 4:cout<< "�������� ����� ����� ����������:" 
			<< "\n\t���� ������:"
			<< "\n\t\t������ 30 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t���������� + ���������� ��� " << times << "�" << repits
			<< "\n\t\t��� ������ + ������� �� ������� " << times << "�" << repits
			<< "\n\t\t���� ������������� ����� �� ������ + �������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ��������������� ����� + ��� �������� ���� " << times << "�" << repits
			<< "\n\t\t��������� + ���������� ��� �� ����� " << times << "�" << repits
			<< "\n\t\t������ 30 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 30 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t���� ������������� ����� �� ������ + �������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ��������������� ����� + ��� �������� ���� " << times << "�" << repits
			<< "\n\t\t��������� + ���������� ��� �� ����� " << times << "�" << repits
			<< "\n\t\t���������� + ���������� ��� " << times << "�" << repits
			<< "\n\t\t��� ������ + ������� �� ������� " << times << "�" << repits
			<< "\n\t\t������ 30 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 30 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t��������� + ���������� ��� �� ����� " << times << "�" << repits
			<< "\n\t\t���������� + ���������� ��� " << times << "�" << repits
			<< "\n\t\t��� ������ + ������� �� ������� " << times << "�" << repits
			<< "\n\t\t���� ������������� ����� �� ������ + �������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ��������������� ����� + ��� �������� ���� " << times << "�" << repits
			<< "\n\t\t������ 30 ���."
			<< "\n\t���� ���������:"
			<< "\n\t\t������ 60 ���."
			<< "\n\n ��������� ��� ���!"
			<< endl;
			break;
		case 5:cout<< "�������� ����� ����� ����������:" 
			<< "\n\t���� ������:"
			<< "\n\t\t������ 20 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t���������� + ���������� ��� " << times << "�" << repits
			<< "\n\t\t��� ������ + ������� �� ������� " << times << "�" << repits
			<< "\n\t\t���� ������������� ����� �� ������ + �������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ��������������� ����� + ��� �������� ���� " << times << "�" << repits
			<< "\n\t\t��������� + ���������� ��� �� ����� " << times << "�" << repits
			<< "\n\t\t������ 20 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 60 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 20 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t���� ������������� ����� �� ������ + �������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ��������������� ����� + ��� �������� ���� " << times << "�" << repits
			<< "\n\t\t��������� + ���������� ��� �� ����� " << times << "�" << repits
			<< "\n\t\t���������� + ���������� ��� " << times << "�" << repits
			<< "\n\t\t��� ������ + ������� �� ������� " << times << "�" << repits
			<< "\n\t\t������ 20 ���."
			<< "\n\t���� ���������:"
			<< "\n\t\t������ 60 ���."
			<< "\n\t���� �����:"
			<< "\n\t\t������ 20 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t��������� + ���������� ��� �� ����� " << times << "�" << repits
			<< "\n\t\t���������� + ���������� ��� " << times << "�" << repits
			<< "\n\t\t��� ������ + ������� �� ������� " << times << "�" << repits
			<< "\n\t\t���� ������������� ����� �� ������ + �������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ��������������� ����� + ��� �������� ���� " << times << "�" << repits
			<< "\n\t\t������ 20 ���."
			<< "\n\n ��������� ��� ���!"
			<< endl;
			break;
		case 6: cout << "�������� ����� ����� ����������:"
			<< "\n\t���� ������:"
			<< "\n\t\t������ 20 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t���������� + ���������� ��� " << times << "�" << repits
			<< "\n\t\t��� ������ + ������� �� ������� " << times << "�" << repits
			<< "\n\t\t���� ������������� ����� �� ������ + �������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ��������������� ����� + ��� �������� ���� " << times << "�" << repits
			<< "\n\t\t��������� + ���������� ��� �� ����� " << times << "�" << repits
			<< "\n\t\t������ 20 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 60 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 20 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t���� ������������� ����� �� ������ + �������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ��������������� ����� + ��� �������� ���� " << times << "�" << repits
			<< "\n\t\t��������� + ���������� ��� �� ����� " << times << "�" << repits
			<< "\n\t\t���������� + ���������� ��� " << times << "�" << repits
			<< "\n\t\t��� ������ + ������� �� ������� " << times << "�" << repits
			<< "\n\t\t������ 20 ���."
			<< "\n\t���� ���������:"
			<< "\n\t\t������ 60 ���."
			<< "\n\t���� �����:"
			<< "\n\t\t������ 20 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t��������� + ���������� ��� �� ����� " << times << "�" << repits
			<< "\n\t\t���������� + ���������� ��� " << times << "�" << repits
			<< "\n\t\t��� ������ + ������� �� ������� " << times << "�" << repits
			<< "\n\t\t���� ������������� ����� �� ������ + �������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���� ��������������� ����� + ��� �������� ���� " << times << "�" << repits
			<< "\n\t\t������ 20 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 60 ���."
			<< "\n\n ��������� ��� ���!"
			<< endl;
			break;
		
		}
	}
	else {
		switch (experiance) {
		case 1: times = 2;
			repits = 15;
			break;
		case 2:  times = 3;
			repits = 12;
			break;
		case 3: times = 3;
			repits = 10;
			break;
		}
		switch (days) {
			
		case 2:  cout << "�������� ����� ����� ����������:"
			<< "\n\t���� ������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t��� ������ (����� ����) " << times << "�" << repits
			<< "\n\t\t�������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t��������� ������� ����������� ��� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t�������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20"
			<< "\n\t\t��������� ���� �� ������� � ������� ����� " << times << "�" << repits
			<< "\n\t\t��� ����� ����� " << times << "�" << repits
			<< "\n\t\t������ ����� " << times << "�" << repits
			<< "\n\t\t���� ������������� ����� �� ������ " << times << "�" << repits
			<< "\n\t\t���� ��������������� ����� " << times << "�" << repits
			<< "\n\t\t���������� ��� �� ����� " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\n ��������� ��� ���!"
			<< endl;
			break;
		case 3: cout << "�������� ����� ����� ����������:"
			<< "\n\t���� ������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t��� ������ (����� ����) " << times << "�" << repits
			<< "\n\t\t�������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t������� ���� � ��������� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t���� �������� � ������� " << times << "�" << repits
			<< "\n\t\t��������� �������� � �� ������ ����� ����� " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20"
			<< "\n\t\t��������� ������� ����������� ��� " << times << "�" << repits
			<< "\n\t\t���� ������������� ����� �� ����� " << times << "�" << repits
			<< "\n\t\t��� �������� ��� ����� 45���. " << times << "�" << repits
			<< "\n\t\t���� ��������������� ����� " << times << "�" << repits
			<< "\n\t\t�������� �������� � ������� " << times << "�" << repits
			<< "\n\t\t�������������� " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20"
			<< "\n\t\t��������� ���� �� ������� � ������� ����� " << times << "�" << repits
			<< "\n\t\t��� ����� ����� " << times << "�" << repits
			<< "\n\t\t������ ����� " << times << "�" << repits
			<< "\n\t\t������� �� ������� �� ������ " << times << "�" << repits
			<< "\n\t\t�������� ��� � ���������" << times << "�" << repits
			<< "\n\t\t���������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\n ��������� ��� ���!"
			<< endl;
			break;
		case 4: cout << "�������� ����� ����� ����������:"
			<< "\n\t���� ������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t��� ������ (����� ����) " << times << "�" << repits
			<< "\n\t\t�������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t������� ���� � ��������� " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20"
			<< "\n\t\t��������� ������� ����������� ��� " << times << "�" << repits
			<< "\n\t\t��� �������� ��� ����� 45 ���. " << times << "�" << repits
			<< "\n\t\t�������� �������� � ������� " << times << "�" << repits
			<< "\n\t\t��� �������� ���� " << times << "�" << repits
			<< "\n\t\t���� �������� � ������� " << times << "�" << repits
			<< "\n\t\t�������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t��������� ���� �� ������� � ������� ����� " << times << "�" << repits
			<< "\n\t\t��� ����� ����� " << times << "�" << repits
			<< "\n\t\t������ ����� " << times << "�" << repits
			<< "\n\t\t������� �� ������� �� ������ " << times << "�" << repits
			<< "\n\t\t��������� ������ " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\t���� ���������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t��������� ���� �� ������� � ������� ����� " << times << "�" << repits
			<< "\n\t\t��� ����� ����� " << times << "�" << repits
			<< "\n\t\t������ ����� " << times << "�" << repits
			<< "\n\t\t������� �� ������� �� ������ " << times << "�" << repits
			<< "\n\t\t��������� ������ " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\n ��������� ��� ���!"
			<< endl;
			break;
		case 5: cout << "�������� ����� ����� ����������:"
			<< "\n\t���� ������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t��� ������ (����� ����) " << times << "�" << repits
			<< "\n\t\t�������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t��������� ������ " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t��������� � ����� ����������� ��� " << times << "�" << repits
			<< "\n\t\t���������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���������� ��� � ���������� " << times << "�" << repits
			<< "\n\t\t�������� ��� �� ������� ���� " << times << "�" << repits
			<< "\n\t\t�������� ��� � ��������� �� ������ � ������� " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t��������� ���� �� ������� � ������� ����� " << times << "�" << repits
			<< "\n\t\t��� ����� ����� " << times << "�" << repits
			<< "\n\t\t������ ����� " << times << "�" << repits
			<< "\n\t\t������� �� ������� �� ������ " << times << "�" << repits
			<< "\n\t\t��������� ������ " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			
			<< "\n\t���� ���������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20"
			<< "\n\t\t��������� ������� ����������� ��� " << times << "�" << repits
			<< "\n\t\t��� �������� ��� ����� 45 ���. " << times << "�" << repits
			<< "\n\t\t�������� �������� � ������� " << times << "�" << repits
			<< "\n\t\t�������� ��� � ��������� ���� " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\t���� �����:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t���� ������������� ����� �� ����� " << times << "�" << repits
			<< "\n\t\t���� ��������������� �����  " << times << "�" << repits
			<< "\n\t\t���� ������������� ����� �� ������ " << times << "�" << repits
			<< "\n\t\t�������������� " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\n ��������� ��� ���!"
			<< endl;
			break;
		case 6: cout << "�������� ����� ����� ����������:"
			<< "\n\t���� ������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t���������� �� ������� " << times << "�" << repits
			<< "\n\t\t��� ������ (����� ����) " << times << "�" << repits
			<< "\n\t\t�������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t��������� ������ " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t��������� � ����� ����������� ��� " << times << "�" << repits
			<< "\n\t\t���������� ��� � ��������� " << times << "�" << repits
			<< "\n\t\t���������� ��� � ���������� " << times << "�" << repits
			<< "\n\t\t�������� ��� �� ������� ���� " << times << "�" << repits
			<< "\n\t\t�������� ��� � ��������� �� ������ � ������� " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t��������� ���� �� ������� � ������� ����� " << times << "�" << repits
			<< "\n\t\t��� ����� ����� " << times << "�" << repits
			<< "\n\t\t������ ����� " << times << "�" << repits
			<< "\n\t\t������� �� ������� �� ������ " << times << "�" << repits
			<< "\n\t\t��������� ������ " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\n ��������� ��� ���!"
			<< "\n\t���� ���������:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20"
			<< "\n\t\t��������� ������� ����������� ��� " << times << "�" << repits
			<< "\n\t\t��� �������� ��� ����� 45 ���. " << times << "�" << repits
			<< "\n\t\t�������� �������� � ������� " << times << "�" << repits
			<< "\n\t\t�������� ��� � ��������� ���� " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\t���� �����:"
			<< "\n\t\t������ 5 ���."
			<< "\n\t\t�������� ��� �� ������� 20 + ������� ������ 30�. 3 �������"
			<< "\n\t\t���� ������������� ����� �� ����� " << times << "�" << repits
			<< "\n\t\t���� ��������������� �����  " << times << "�" << repits
			<< "\n\t\t���� ������������� ����� �� ������ " << times << "�" << repits
			<< "\n\t\t�������������� " << times << "�" << repits
			<< "\n\t\t������ 5 ���."
			<< "\n\t���� ������:"
			<< "\n\t\t������ 60 ���."
			<< "\n\n ��������� ��� ���!"
			<< endl;
			break;
		
		}
	}
}

class FoodDetiles {
public:
           void PrintBelok() {
		cout << "����������� ��������� �����" << endl;
	}
           void PrintUglevody() {
		cout << "����������� ��������� ���������" << endl;
	}
	       void PrintJury() {
		cout << "����������� ��������� �����" << endl;
	}
};

void main() {
	setlocale(LC_ALL, "RUS");
	cout << "\t\t����������� ��� !!!" << endl << endl;
                                                          // ����� ����
	linkSex:
	cout  <<"����� ��������� ��� ���:"<<endl
		  <<"\t������� - 1"<<endl
		  <<"\t������� - 2"<<endl;
    int sex;
	cout << "������� ��� �����_";
	cin >> sex;
	if (!(sex == 1 || sex == 2)) {
		cout << "\t������!!! ���������� ��� ���." << endl;
		goto linkSex;
	}

                                                           // �������� ����
	int weight;
	cout <<endl << "������� ��� ��� � ��._";
	cin >> weight;

                                                            // ����� ����
	linkGoal:
	cout << endl <<"�������! ������ ������� ����:" << endl 
        		 <<"\t������ - 1" << endl 
		         <<"\t�������� ����� - 2" << endl;
    int goal;
	cout << "������� ��� �����_";
	cin >> goal;
	if (!(goal == 1 || goal == 2)) {
		cout << "\t������!!! ���������� ��� ���.";
		goto linkGoal;
	}


//************************************************************************����������
// ����� ����������� ���������� � ������ 
	linkTrainingDays:
	cout <<endl<< "\t������ � �����������!" << endl<<endl; // ����� ����������� ������������� ����
	int trainingsInaWeek;
	if (goal==1)
	{
		cout << "��� ����� ����� �� ������ ������������� �� 3� �� 6�� ��� � ������!" << endl
			 << "������� ��� �� ������ �������������?_";
	}
	if (goal == 2)
	{
		cout << "��� ����� ����� �� ������ ������������� �� 2� �� 6�� ��� � ������!" << endl
			<< "������� ��� �� ������ �������������?_";
	}
	cin >> trainingsInaWeek;
	cout << endl;
//��������	
	if (goal == 2 && (trainingsInaWeek < 2 || trainingsInaWeek > 6)) {
		cout << "������������ ����������� ����������! ���������� ��� ���." << endl;
		goto linkTrainingDays;
	}
	if (goal == 1 && (trainingsInaWeek < 3 || trainingsInaWeek > 6)) {
		cout << "������������ ����������� ����������! ���������� ��� ���." << endl;
		goto linkTrainingDays;
	}

	int  experienceLevel=0;
	cout << "�������� ������� ����� ����������������(1-��� �����; 2-���� �� 3� �������; 3-�������)";
	cin >> experienceLevel;

	cout << "##########################################################" << endl;
// �������
	Food(sex, goal, weight);
	cout <<endl;
	
	int foodDetails;                                                      // � ��� ���������
	cout << "������ ����������� ������� ���������? (�� - 1 ��� - 2) - ";
	cin >> foodDetails;
	
	if(foodDetails == 1) {
		cout << endl << "\t ������ ����� �������� ��������" << endl
			<< "\t\t����� - \t������� 1" << endl
			<< "\t\t�������� - \t������� 2" << endl
			<< "\t\t���� - \t\t������� 3" << endl << endl
			<<"\t\t���� ���������� - ������� 0" << endl;
	int choseDetailFood, choseDetailFood2;
	cin >> choseDetailFood >> choseDetailFood2;

	FoodDetiles detailsOfFood;

	switch (choseDetailFood)
	{
	case 1: detailsOfFood.PrintBelok();
		break;
	case 2: detailsOfFood.PrintUglevody();
		break;
	case 3: detailsOfFood.PrintJury();
		break;
	}

	switch (choseDetailFood2)
	{
	case 1: detailsOfFood.PrintBelok();
		break;
	case 2: detailsOfFood.PrintUglevody();
		break;
	case 3: detailsOfFood.PrintJury();
		break;
	}
	};

	cout << endl;
// ���������� ��� �
	if (sex == 1) 
		 TrainingsForMen(goal, trainingsInaWeek, experienceLevel);
// ���������� ��� �
	else TrainingsForWeman(goal, trainingsInaWeek, experienceLevel);
}