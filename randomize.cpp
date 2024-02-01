#include <iostream>
#include <ctime>

using namespace std;

int main() { 
    FILE *fp ;
    time_t now;

    fp = fopen("Sample.txt","a+");
    now = time(NULL);
    struct tm *localTime = localtime(&now);

    int seconds = localTime->tm_sec;
    int random = seconds % 6 + 1 ;

    //cout  << random << endl ;  

    fprintf(fp,"%d\n",random);
    fclose(fp);
}
