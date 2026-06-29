#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    char word[100];

    while (fin >> word)
    {
        int len = strlen(word);

        for (int i = len - 1; i >= 0; i--)
        {
            fout << word[i];
        }

        fout << " ";
    }

    fin.close();
    fout.close();

    return 0;
}



