typedef struct _PAIR {
    int x;
    int y;
} PAIR;

int add(int, int);
char * get_version(void);
char * greeting(char *);

int add_sr(int x, int y, int *sum);
int get_version_sr(char * output, int buflen);
int greeting_sr(char * name, char * outp, int buflen);

int pair_add(PAIR * ppair);
