#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;

	while (1) {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		getline(cin, a);
		if (a == "yes") break;
	}
	cout << "종료합니다..." << endl;

	return 0;
}