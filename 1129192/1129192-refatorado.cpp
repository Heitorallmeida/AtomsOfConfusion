#include <bits/stdc++.h>
using namespace std;

//ATOMO

    long xdl_guess_lines(mmfile_t *mf, long sample) {
	long nl = 0, size, tsize = 0;
	char const *data, *cur, *top;

	if ((cur = data = xdl_mmfile_first(mf, &size)) != NULL) {
		for (top = data + size; nl < sample && cur < top; ) {
			nl++;
			if (!(cur = memchr(cur, '\n', top - cur)))
				cur = top;
			else
				cur++;
		}
		tsize += (long) (cur - data);
	}

	if (nl && tsize)
		nl = xdl_mmfile_size(mf) / (tsize / nl);

	return nl + 1;
}
 

//REFATORADO

long xdl_guess_lines(mmfile_t *mf, long sample){
	long nl = 0, size, tsize = 0;
	char const *data, *cur, *top;

	cur = xdl_mmfile_first(mf, &size);
	data = cur;

	if( cur != NULL ){

		for(top = data + size; nl < sample && cur < top; ){
			nl++;

			cur = memchr(cur, '\n', top - cur);
			cur ? cur++ : cur = top;
		}

		tsize += (long) (cur - data);
	}

	if (nl && tsize) nl = xdl_mmfile_size(mf) / (tsize / nl);

	return nl + 1;
}