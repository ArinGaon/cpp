#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string str = "파일에씁시다.";
	ofstream ofs("file.txt"); // file.txt 파일 열기
	ofs << str; // file.txt 파일에 str 문자열 쓰기
	ofs.close(); // 파일 닫기
	ifstream ifs("file.txt"); // 다시 열고
	ifs >> str; // 파일의 내용을 str에 저장
	cout << str << endl; // 파일에서 읽어온 내용 출력
	ifs.close(); // 파일 닫기
}