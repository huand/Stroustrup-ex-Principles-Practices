#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int NumberOfRounds();

int myTurn(vector<string>);
int pcTurn(vector<string>);
int didiwin(int, int);
void plotscore(int, int, int);
void c04e10()
{
    vector<string> sRPS = {"rock", "paper", "scissors"};
    int myscore = 0;
    int pcscore = 0;
    int N = NumberOfRounds();
    while (myscore < N && pcscore << N)
    {
        std::cout << "########################\n";
        int myind = myTurn(sRPS);
        int pcind = pcTurn(sRPS);
        int iwin = didiwin(myind, pcind);
        void plotscore(int myscore, int pcscore, int iwin);
    }
}

int NumberOfRounds()
{
    cout << "how many rounds won to win a game?";
    int N;
    cin >> N;
    return N;
}

int myTurn(vector<string> sRPS)
{
    bool validinput;
    int myind;
    do
    {
        std::cout << "rock, paper, scissors?: ";
        string s;
        cin >> s;
        auto f = find(sRPS.begin(), sRPS.end(), s);
        myind = distance(sRPS.begin(), f);
        if (myind == sRPS.size())
        {
            std::cout << "invalid input\n";
        }
        validinput = myind < sRPS.size();
    } while (!validinput);
    return myind;
}

int pcTurn(vector<string> sRPS)
{
    int pcind = rand() % 3;
    std::cout << "       computer played: " << sRPS[pcind] << endl;
    return pcind;
}
int didiwin(int myind, int pcind, vector<string> sRPS)
{
    int iwin;
    if (myind == pcind)
    {
        iwin = 0;
    }
    else
    {

        switch (myind)
            if (sRPS[myind] == "rock")
            {
                iwin = pcind == scissors ? 1 : -1;
            }
            else if (sRPS[myind] == "paper")
            {
                iwin = pcind == rock ? 1 : -1;
            }
            else if (sRPS[myind] == "scissors")
            {
                iwin = pcind == paper ? 1 : -1;
            }
    }
    return iwin;
}

void plotscore(int &myscore, int &pcscore, int &iwin)
{
    string winner;
    if (iwin == 1)
    {
        winner = "you win the round";
        myscore++;
    }
    else if (iwin == -1)
    {
        winner = "computer wins the round";
        pcscore++;
    }
    else if (iwin == 0)
    {
        std::cout << "ex aequo\n";
    }
    std::cout << winner << endl;
    std::cout << "you: " << myscore << "-" << pcscore << " :pc\n";
}