#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string str = "���Ͽ����ô�.";
	ofstream ofs("file.txt"); // file.txt ���� ����
	ofs << str; // file.txt ���Ͽ� str ���ڿ� ����
	ofs.close(); // ���� �ݱ�
	ifstream ifs("file.txt"); // �ٽ� ����
	ifs >> str; // ������ ������ str�� ����
	cout << str << endl; // ���Ͽ��� �о�� ���� ���
	ifs.close(); // ���� �ݱ�
}