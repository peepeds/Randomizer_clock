#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

long long unsigned int Random(int start, int end) {
    if(start == end){
        return start;
    }
    auto microSeconds = duration_cast<microseconds>(system_clock::now().time_since_epoch()).count();
    long long unsigned int random = microSeconds % (end - start + 1) + start;

    return random;
}

int main() {
    int x;
    int start , end  ;
    printf("input start range : ");
    cin >> start;
    printf("input end range   : ");
    cin >> end;
     x = Random(start, end);
    cout << x << endl;

    return 0;
}
