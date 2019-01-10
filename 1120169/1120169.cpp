#include <bits/stdc++.h>
using namespace std;

char prot_getc(char *prot, int maxlen)
{
    return prot[maxlen];
}

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


int main()
{
    char *buf = (char *) malloc(100 * sizeof(char));
    char *prot = (char *) malloc(100 * sizeof(char));

    cin >> prot;

    int value = getseword(prot, buf, strlen(prot) - 1);

    cout << buf;

    return 0;
}