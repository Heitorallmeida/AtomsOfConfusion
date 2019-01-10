#include <bits/stdc++.h>
using namespace std;

typedef char mmfile_t;

mmfile_t *xdl_mmfile_first(mmfile_t *mf, long *size){
	*size = 25;
	return mf;
}

char *memchr(char const *cur, char x, long n){
	x = 0;
	return cur;
}

long int xdl_mmfile_size(char *mf){
	return strlen(mf);
}

long int xdl_guess_lines(mmfile_t *mf, long int sample) {
	long int nl = 0, size, tsize = 0;
	char const *data, *cur, *top;

	if ((cur = data = xdl_mmfile_first(mf, &size)) != NULL) {
		for (top = data + size; nl < sample && cur < top; ) {
			nl++;
			if (!(cur = memchr(cur, '\n', top - cur)))
				cur = top;
			else
				cur++;
		}
		tsize += (long int) (cur - data);
	}

	if (nl && tsize)
		nl = xdl_mmfile_size(mf) / (tsize / nl);

	return nl + 1;
}
 

int main(){

	long int sample;
	cin >> sample;
	char mf[8] = "teste";

	long int teste = xdl_guess_lines(mf, sample);
	cout << teste;

	return 0;
}