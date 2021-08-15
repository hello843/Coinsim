// Currency sim ver1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <ctime>

using namespace std;

class Coin {
public:
    string name;
    int initialmintage;
};

class Wallet {
public:
    string address;
    double amount;
    void send();
};



int main()
{
    std::cout << "Game Started!\n To create a wallet type /walletcreate";
    if (cin >> "/walletcreate") {
        Wallet wallet;
        wallet.amount = 1;
        wallet.amount
    }

}

