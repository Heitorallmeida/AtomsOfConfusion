#include <bits/stdc++.h>
using namespace std;

// ATOMO

    static int getseword(char *prot, char *buf, int maxlen)
{
    int c = EOF;
    int quoted;

    c = prot_getc(prot, maxlen);
    if (c == '"')
        quoted = 1;
    else
        quoted = 0;

    while (maxlen > 1 &&
           (c = prot_getc(prot, maxlen)) != EOF &&
           (quoted ?
               (c != '"') :
               (c != ' ' && c != ')'))) {
        *buf++ = c;
        maxlen--;
    }
    *buf = '\0';
    if (quoted && c != EOF)
        c = prot_getc(prot, maxlen);
    return c;
}
  

// SEM ATOMO DE CONFUSAO

static int getseword(char *prot, char *buf, int maxlen){

    int c = EOF;
    int quoted = 0;

    c = prot_getc(prot, maxlen);
    if (c == '"') quoted = 1;

    while( maxlen > 1){
        c = prot_getc(prot, maxlen);
        if(c == EOF) break;
        if(quoted && c == '"') break;
        if(!quoted && ( c == ' ' || c == ')' ) ) break;

        *buf++ = c;
        maxlen--;
    }

    *buf = '\0';

    if (quoted && c != EOF) c = prot_getc(prot, maxlen);

    return c;
}