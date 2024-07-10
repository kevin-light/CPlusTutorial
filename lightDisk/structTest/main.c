#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct PDU{
    int a;
    int b;
    int c;
    int d[];
} PDU;

int main(int argc, char *argv[])
{
    printf("Hello World!\n");
    printf("%ld \n", sizeof(PDU)); // d[] 不占空间
    PDU *pdu = (PDU*)malloc(sizeof (PDU)+100*sizeof (int));
    printf("%ld \n", sizeof(pdu));
    pdu->a = 90;
    pdu->b = 89;
    pdu->c = 88;
    memcpy(pdu->d, "you jump i jump", 16);
    printf("a=%d,b=%d,c=%d,d=%s \n",pdu->a,pdu->b,pdu->c,pdu->d);
    free(pdu);
    pdu=NULL;

    return 0;
}
