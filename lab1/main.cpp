#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    char words[1000][100];
    int count = 0;

    while (fin >> words[count])
    {
        count++;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        fout << words[i] << " ";
    }

    fin.close();
    fout.close();

    return 0;
}