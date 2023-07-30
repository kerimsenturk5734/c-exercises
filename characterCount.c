#include <stdio.h>

#define IN      1
#define OUT     0


int main(){
	sentenceStatistic0();
	sentenceStatistic1();
	
	return 0;	
}
//Linux wc komutunun gördüðü iþlevi görür.
void sentenceStatistic0(void){
	int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {//Dokuman sonuna kadar okur.
        ++nc;
        if (c == '\n')
            ++nl;
            if (c == ' ' || c == '\n' || c == '\t')
                state = OUT;
                
            else if (state == OUT) {
                state = IN;
                ++nw;
            }
    }

        printf("Row Count:%d, Word Count:%d, Character Count:%d\n", nl, nw, nc);

}


void sentenceStatistic1(){
	int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

        while ((c = getchar()) != EOF){
		
            if (c >= '0' && c <= '9')
                ++ndigit[c - '0'];
            else if (c == ' ' || c == '\n' || c == '\t')
                ++nwhite;
            else
                ++nother;
		}
		
        printf("digits = ");
        
        for (i = 0; i < 10; ++i)
                printf(" %d", ndigit[i]);
                
        printf(", white\aspace = %d, other = %d\n",
                nwhite, nother);
}

/*
	\a is alert/bell
	\b is backspace/rubout
	\n is newline
	\r is carriage return (return to left margin)
	\t is tab
*/
