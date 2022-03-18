#include <iostream>
#include <list>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    list <int> lst;

    int summ = 0;
    for (int i = 0; i < 10000; ++i) {
        int num = rand() % 200 - 100;
        summ += num;
        lst.push_back(num);
    }

    float answer = summ / 10000.0;
    cout << answer << endl;
    return 0;
}
