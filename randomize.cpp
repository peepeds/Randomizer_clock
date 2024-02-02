#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int Random(int start = 1, int end = 6) {
    //FILE *fp ;
    //fp = fopen("Sample.txt", "a+");

    auto microSeconds = duration_cast<microseconds>(system_clock::now().time_since_epoch()).count();
    int random = microSeconds % end + start;

    //fprintf(fp, "%d\n",random);
    //fclose(fp);

    return random;
}

int main() {
    int x;
    x = Random();
    cout << x << endl;

    return 0;
}
