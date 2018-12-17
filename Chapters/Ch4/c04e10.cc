#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int NumberOfRounds();

int myTurn(vector<string>);
int pcTurn(vector<string>);
int didiwin(int, int, vector<string>);
void plotscore(int &, int &, int &);
void updatescore(int &myscore, int &pcscore, int &iwin);
void c04e10()
{
    vector<string> sRPS = {"rock", "paper", "scissors"};
    int myscore = 0;
    int pcscore = 0;
    int iwin = 0;
    int N = NumberOfRounds();
    plotscore(myscore, pcscore, iwin);
    while (myscore < N && pcscore < N)
    {
        std::cout << "########################\n";
        int myind = myTurn(sRPS);
        int pcind = pcTurn(sRPS);
        iwin = didiwin(myind, pcind, sRPS);
        updatescore(myscore, pcscore, iwin);
        plotscore(myscore, pcscore, iwin);
    }
    cout << "########################\n";
    if (myscore == N)
    {
        cout << "Congratulations! You won!\n";
    }
    else
    {
        cout << "you lost :| better luck next time!";
    }
}

int NumberOfRounds()
{
    cout << "how many rounds won to win a game?: ";
    int N;
    cin >> N;
    cin.ignore();
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
        if (sRPS[myind] == "rock")
        {
            iwin = sRPS[pcind] == "scissors" ? 1 : -1;
        }
        else if (sRPS[myind] == "paper")
        {
            iwin = sRPS[pcind] == "rock" ? 1 : -1;
        }
        else if (sRPS[myind] == "scissors")
        {
            iwin = sRPS[pcind] == "paper" ? 1 : -1;
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
    }
    else if (iwin == -1)
    {
        winner = "computer wins the round";
    }
    else if (iwin == 0)
    {
        winner = "ex aequo";
    }
    std::cout << winner << endl;
    std::cout << "you: " << myscore << "-" << pcscore << " :pc\n";
}

void updatescore(int &myscore, int &pcscore, int &iwin)
{
    if (iwin == 1)
    {
        myscore++;
    }
    else if (iwin == -1)
    {
        pcscore++;
    }
}