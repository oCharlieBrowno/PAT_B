#include <iostream>
using namespace std;

int main(void)
{
	int n = -1;
	int cnt = 1;
	while (n != 0) {
		scanf("%d", &n);
		while (n > 3) {
			cnt ++;
			n /= 3;
		}
		printf("%d\n", cnt);
	}
	
	return 0;
 } 
