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

	int sum = 0;
	int i = 0;
	for (; i < n; i++) 
	{
		if (secret > 3) 
			sum += i + 3;
		else
			sum -= i - 5;

		if (i >= 2)
			sum = i + 10;
	}

	__VERIFIER_keepalive(sum);
	assert(sum);
	return 0;
}
