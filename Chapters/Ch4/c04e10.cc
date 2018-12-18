// Copyright 2018 Hubert Andre
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int NumberOfRounds();

int myTurn(std::vector<std::string>);
int pcTurn(std::vector<std::string>);
int didiwin(int, int, std::vector<std::string>);
void plotscore(int &, int &, int &);
void updatescore(int *myscore, int *pcscore, const int &iwin);
void c04e10() {
  std::vector<std::string> sRPS = {"rock", "paper", "scissors"};
  int myscore = 0;
  int pcscore = 0;
  int iwin = 0;
  int N = NumberOfRounds();
  plotscore(myscore, pcscore, iwin);
  while (myscore < N && pcscore < N) {
    std::cout << "########################\n";
    int myind = myTurn(sRPS);
    int pcind = pcTurn(sRPS);
    iwin = didiwin(myind, pcind, sRPS);
    updatescore(&myscore, &pcscore, iwin);
    plotscore(myscore, pcscore, iwin);
  }
  std::cout << "########################\n";
  if (myscore == N) {
    std::cout << "Congratulations! You won!\n";
  } else {
    std::cout << "you lost :| better luck next time!";
  }
}

int NumberOfRounds() {
  std::cout << "how many rounds won to win a game?: ";
  int N;
  std::cin >> N;
  std::cin.ignore();
  return N;
}

int myTurn(std::vector<std::string> sRPS) {
  bool validinput;
  int myind;
  do {
    std::cout << "rock, paper, scissors?: ";
    std::string s;
    std::cin >> s;
    auto f = find(sRPS.begin(), sRPS.end(), s);
    myind = distance(sRPS.begin(), f);
    if (myind == sRPS.size()) {
      std::cout << "invalid input\n";
    }
    validinput = myind < sRPS.size();
  } while (!validinput);
  return myind;
}

int pcTurn(std::vector<std::string> sRPS) {
  unsigned int seed = 1;
  int pcind = rand_r(&seed) % 3;
  std::cout << "       computer played: " << sRPS[pcind] << std::endl;
  return pcind;
}
int didiwin(int myind, int pcind, std::vector<std::string> sRPS) {
  int iwin=0;
  if (myind == pcind) {
    iwin = 0;
  } else {
    if (sRPS[myind] == "rock") {
      iwin = sRPS[pcind] == "scissors" ? 1 : -1;
    } else if (sRPS[myind] == "paper") {
      iwin = sRPS[pcind] == "rock" ? 1 : -1;
    } else if (sRPS[myind] == "scissors") {
      iwin = sRPS[pcind] == "paper" ? 1 : -1;
    }
  }
  return iwin;
}

void plotscore(const int &myscore, const int &pcscore, const int &iwin) {
  std::string winner;
  if (iwin == 1) {
    winner = "you win the round";
  } else if (iwin == -1) {
    winner = "computer wins the round";
  } else if (iwin == 0) {
    winner = "ex aequo";
  }
  std::cout << winner << std::endl;
  std::cout << "you: " << myscore << "-" << pcscore << " :pc\n";
}

void updatescore(int *myscore, int *pcscore, const int &iwin) {
  if (iwin == 1) {
    (*myscore)++;
  } else if (iwin == -1) {
    (*pcscore)++;
  }
}
