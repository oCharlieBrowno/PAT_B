//Don't Forget To BREAK!!
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n = 0;
	int R = 0;
	char ch;

	while (scanf("%d %d", &n, &R) != EOF) {
		vector<char> vec; 
		while (n != 0) {
			if (n % R < 10) {
				ch = n % R + '0';
			}
			else {
				switch(n % R) {
					case 10: ch = 'A';break;
					case 11: ch = 'B';break;
					case 12: ch = 'C';break;
					case 13: ch = 'D';break;
					case 14: ch = 'E';break;
					case 15: ch = 'F';break;
				}
			}
			vec.push_back(ch);
			n /= R;
		}
		for (int i = vec.size()-1; i >= 0; i--) {
			printf("%c", vec[i]);
		} 
		printf("\n");
	}

	return 0;
}
