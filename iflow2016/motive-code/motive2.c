extern int nd(void);
extern void __VERIFIER_error(void) __attribute__((noreturn));
#define assert(X) if(!(X)){__VERIFIER_error();}
extern void __VERIFIER_assume(int);
#define assume(X) __VERIFIER_assume(X)
extern void __VERIFIER_keepalive(int);

int main()
{
	int secret = nd();
	int n = nd();
	assume(n > 10);
	int i = 0;
	int answer = secret + 5;
	int flag = 1;

	for (; i < n; i++) {
		if (flag) {
			answer = 5;
		}
		else {
			answer = answer + 10;
		}
		flag = !flag;
	}

	__VERIFIER_keepalive(answer);
	assert(answer);
	return 0;
}
