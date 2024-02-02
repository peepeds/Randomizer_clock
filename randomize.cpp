#include <iostream>
#include <ctime>

using namespace std;

int Random(int start = 0 , int end = 6){
    FILE *fp ;
    time_t now;

    fp = fopen("Sample.txt","a+");
    now = time(NULL);
    struct tm *localTime = localtime(&now);

    int seconds = localTime->tm_sec;
    int random = seconds % end + start ;

    fprintf(fp,"%d\n",random);
    fclose(fp);

    return random ; 
}

int main() { 
   int x ; 
   x = Random();
   cout << x <<endl;
}
