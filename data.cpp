#include <iostream>
#include <map>
#include <cmath>
#include <iomanip> 

using namespace std;

int main() {
    FILE *fp;
    fp = fopen("Sample.txt", "r");
    int total = 0, count = 0;
    map<int, int> counter;

    int num;
    while (fscanf(fp, "%d", &num) == 1) {
       counter[num]++;
        count++;
        
    }

    fclose(fp);

    cout << "Number :" << endl;

    for (int i = 1; i <= 6; ++i) {
        int occurrences = counter[i];
        double percentage = (occurrences / static_cast<double>(count)) * 100.0;

        cout << i << " : " << occurrences << " times, " << fixed << setprecision(2) << percentage << "%"
             << " of total" << endl;
    }

    cout << "\nTotal Number is : " << count << endl;

    return 0;
}
