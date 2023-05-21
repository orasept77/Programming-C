#include <stdio.h>
#include <string.h>

int main() {
    FILE *in, *train, *test;
    char line[1024];
    int setosa, versicolor, virginica;
    setosa = versicolor = virginica = 0;
    
    in = fopen("iris.data", "r");
    train = fopen("train.csv", "w");
    test = fopen("test.csv", "w");
    
    while(fgets(line, 1024, in)) {
        if(strstr(line, "setosa")) {
            if(setosa < 40) {
                fprintf(train, "%s", line);
                setosa++;
            } else {
                fprintf(test, "%s", line);
                setosa++;
            }
        } else if(strstr(line, "versicolor")) {
            if(versicolor < 40) {
                fprintf(train, "%s", line);
                versicolor++;
            } else {
                fprintf(test, "%s", line);
                versicolor++;
            }
        } else if(strstr(line, "virginica")) {
            if(virginica < 40) {
                fprintf(train, "%s", line);
                virginica++;
            } else {
                fprintf(test, "%s", line);
                virginica++;
            }
        }
    }
    
    fclose(in);
    fclose(train);
    fclose(test);
    
    return 0;
}