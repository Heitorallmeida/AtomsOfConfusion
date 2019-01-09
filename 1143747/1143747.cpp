#include <bits/stdc++.h>
using namespace std;

static int getseword(struct protstream *prot, char *buf, int maxlen){

    int c = EOF;
    int quoted = 0;

    c = prot_getc(prot);
    if (c == '"') quoted = 1;
    else prot_ungetc(c, prot);

    while( maxlen > 1){
        c = prot_getc(prot);
        if(c == EOF) break;
        if(quoted && c == '"') break;
        if(!quoted && ( c == ' ' || c == ')' ) ) break;

        *buf++ = c;
        maxlen--;
    }

    *buf = '\0';

    if (quoted && c != EOF) c = prot_getc(prot);

    return c;
}