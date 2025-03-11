#include "fileUtils.h"
#include "utils.h"

void readFileName(char *fn) {
    printf("Please enter the name of the file ");
    fgets(fn, MAXIMUM, stdin);
    strip(fn);
} // end readFileName

FILE *openInputFile() {
    char fn[MAXIMUM];
    FILE *inf = NULL;
    do {
        readFileName((fn));
        inf = fopen(fn, "r");
    } while (inf == NULL);

    return inf;
}

int countRecords(FILE *fin, const int linesPerRecord) {
    int count = 0;
    char temp[MAXIMUM];
    while (fgets(temp, sizeof(temp), fin) != NULL) {
        count++;
    }
    return count / linesPerRecord;
}

