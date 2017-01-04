#include <iostream>
using namespace std;

int main(void)
{
	int N;
	scanf("%d", &N);
	int num[N];
	
	for(int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}
	
	int sum1 = 0;
	int sum2 = 0;
	int ch = 1;
	int cnt1 = 0;
	int cnt2 = 0;
	double sum4 = 0;
	int max = 0;
	int flag1 = 0;
	int flag2 = 0;
	int flag3 = 0;
	int flag4 = 0;
	int flag5 = 0;
	for(int i = 0; i < N; i++) {
		if (num[i] % 10 == 0) {
			flag1 = 1;
			sum1 += num[i];
		}
		if (num[i] % 5 == 1) {
			flag2 = 1;
			sum2 += ch * num[i];
			ch = -ch;
		}
		if (num[i] % 5 == 2) {
			flag3 = 1;
			cnt1 ++;
		}
		if (num[i] % 5 == 3) {
			flag4 = 1;
			cnt2 ++;
			sum4 += num[i];
		}
		if (num[i] % 5 == 4) {
			flag5 = 1;
			if (num[i] > max) {
				max = num[i];
			}
		}
	}	
	
	if (flag1 == 1) {
		printf("%d ", sum1);
	} else {
		printf("N ");
	}
	
	if (flag2 == 1) {
		printf("%d ", sum2);
	} else {
		printf("N ");
	}
	
	if (flag3 == 1) {
		printf("%d ", cnt1);
	} else {
		printf("N ");
	}
	
	if (flag4 == 1) {
		printf("%.1f ", sum4 / cnt2);
	} else {
		printf("N ");
	}
	
	if (flag5 == 1) {
		printf("%d", max);
	} else {
		printf("N");
	}	
	
	return 0;
}
