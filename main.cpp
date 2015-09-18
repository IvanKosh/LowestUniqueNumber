/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 18 Сентябрь 2015 г., 18:22
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line;
	char ch;
	short i, l, count;
	while (getline(stream, line)) {
		l = line.length();
		for (ch = '1'; ch < ':'; ch++) {
			count = 0;
			for (i = 0; i < l; i += 2) {
				if (ch == line[i])
					count++;
			}
			if (count == 1) {
				for (i = 0; i < l; i += 2) {
					if (ch == line[i]) {
						break;
					}
				}
				
				cout << i/2+1 << endl;
				break;
			}
		}
		if (count != 1) {
			cout << 0 << endl;
		}
		//cout << line << endl;
	}
	return 0;
}

