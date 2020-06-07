#include<stdio.h>
int main() {
	int ns, nt, lc; // number of sides, number of times, loop counter
	double ev, ov, sv;  // expected value, observed value, sum of values
	printf("Enter the number of sides on the die: ");
	scanf("%d", &ns);
	printf("Enter the number of times the die was rolled: ");
	scanf("%d", &nt);
	ev = nt / ns;
	for (lc = 0; lc < ns; lc++) {
		printf("Enter the number of times side %d was rolled: ", lc + 1);
		scanf("%lf", &ov);
		sv += ((ov - ev) * (ov - ev)) / ev;
	}
	printf("The total X square is %lf\n", sv);
	return 0;
}