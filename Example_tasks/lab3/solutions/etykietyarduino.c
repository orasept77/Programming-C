

int main(int argc, char const *argv[])
{
    for(int i =0;i<10; i++){
        printf("000%i  ",i);
    }
    for(int i =10;i<100; i++){
        printf("00%i  ",i);
    }

    for(int i =100;i<1000; i++){
        printf("0%i  ",i);
    }
    for(int i =1000;i<10000; i++){
        printf("%i  ",i);
    }
    return 0;
}
