extern int nd(void);
extern void __VERIFIER_error(void) __attribute__((noreturn));
#define assert(X) if(!(X)){__VERIFIER_error();}
extern void __VERIFIER_assume(int);
#define assume(X) __VERIFIER_assume(X)
extern void __VERIFIER_keepalive(int);

int main()
{
	int secret = nd();
	int cond = nd();
	int i = nd();
	
	int answer = secret + 1;
	
	if (cond > 3){
		answer = answer + 10;
	}
	else {
		answer = i + 1;
	}
	if (cond <= 3){
		answer = answer + 10;
	}
	else {
		answer = 20;
	}

	__VERIFIER_keepalive(answer);
	assert(answer);
	return 0;
}
