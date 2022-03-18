#include <iostream>
#include <list>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;
    inputFile.open("input.txt");

    list <int> lst;
    while (!inputFile.eof())
    {
        int num;
        inputFile >> num;
        lst.push_back(num);
    }

    lst.sort();

    int summ = 0;
    for (int i : lst) {
        summ += i;
    }

    float answer = (float)summ / lst.size();

    cout << answer << endl;

    for (int i : lst)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
