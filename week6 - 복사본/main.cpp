#include <algorithm>
#include <fstream>
#include<ios>
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include <vector>

#include "grade1.h"
#include "median1.h"
#include "Student_Info.h"

using namespace std;

int main(void) {
	//파일 스트림 만들고 "txt"파일을 읽기
	ifstream student_file("grades.txt");

	Student_info std;
	string::size_type maxlen = 0;

	//모든 과제를 제출한 학생과 그렇지 않은 학생
	vector<Student_info> did, didnt;

	//학생 이름과 모든 점수를 읽어 저장하고 가장 긴 이름을 찾음.
	while (read(student_file, std)) {
		//cin을 사용하면 직접 사용자 입력만 받을 수 있다.
		//student_file은 ifstream이어서 파일 입력 받을 수 있다.
		maxlen = max(maxlen, std.name.size());

		if (did_all_hw(std))
			did.push_back(std);
		else
			didnt.push_back(std);

		//두 집단에 데이터가 있는지 각각 확인하여 분석할 필요가 있는지 확인

		if (did.empty()) {
			cout << "No student did all homework!" << endl;
			return 1; //오류 코드
		}
		if (didnt.empty()) {
			cout << "All student did  homework!" << endl;
			
		}
		return 0;

	}
}
