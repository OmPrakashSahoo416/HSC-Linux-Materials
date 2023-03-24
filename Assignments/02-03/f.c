int g(int);
#define ADD(a,b) (a + b)
int f(int m, int n) {
	return ADD(m, n) + g(10);
}
