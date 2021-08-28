// Currency sim ver1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <ctime>
#include <thread>

using namespace std;
string strsetter;

vector <int> miners = { 0,0,0,0 ,0,0,0,0
                       ,0,0,0,0 ,0,0,0,0
                       ,0,0,0,0 ,0,0,0,0
                       ,0,0,0,0 ,0,0,0,0
};

/*
                        Copper   Silver
                        Gold     Bitcoin
                        Litcoin  Dogecoin
                        Ethereum FastEnergy
                        index = 0 -> 31
*/

class Coin {
public:
    //coin
    string coin_name;
    int coin_initialmintage;

    //bank
    string bank_name;
    double bank_amount;
    int bank_intrest;
};

class Miner {
public:
    string coin;
    string tier;
    int coinpersec;
    int price;
    int* number_of_miners;
};

class Wallet {
public:
    string address;
    double amount;
    void send();
};

void CreateWallet() {
    string line_input;
    cin >> line_input;

    if (line_input == "/walletcreate") {
        Wallet cprwallet;
        cout << "Enter the name of the wallet\n";
        cin >> line_input;
        cprwallet.address = line_input;
        strsetter = cprwallet.address;
        cout << "wallet created";
    }
    else {
        while (line_input != "/walletcreate") {
            cout << "Please enter correct command...\n";
            cin >> line_input;
        }
    }
}

void BuyMiner() {         
    miners[0] = 5;
    cout << miners[0];
}



int main()
{   
    std::cout << "Game Started!\nTo create a wallet type /walletcreate\n";
    CreateWallet();
    Coin copper;
    Wallet cprwallet;
    cprwallet.address = strsetter;
    cprwallet.amount = 1;
    copper.coin_name = "copper";
    copper.coin_initialmintage = 21;
    copper.bank_amount = 20;

    cout << "\nNext lets look at your copper wallet balance\n";
    cout << "Type /cprseebal\n";
    string line_input; cin >> line_input;
   
    if (line_input == "/cprseebal") {
        cout << cprwallet.amount;
    }
    else {
        cout << "That was incorrect";
            while (line_input != "/cprseebal")
            {
                cin >> line_input;
            }
    }
    cout << "\nNext lets buy a miner\n" <<
        "There are four types of miners for each coin\n" <<
        "Basic, Tier1, Tier2, Tier3\n" <<
        "To buy one type, the name of the coin and then the tier for example\n" <<
        "/BuyCopperBasic\n";

    Miner CopperBasic;
    CopperBasic.coin = "Copper";
    CopperBasic.coinpersec = rand() % 6;
    #define Check_cpr_miners cout << miners[0];
    CopperBasic.number_of_miners = &miners[0];
    *CopperBasic.number_of_miners;

    cin >> line_input;
    if (line_input == "/BuyCopperBasic" )
    {
        CopperBasic.number_of_miners ++;
        cprwallet.amount --;
        Check_cpr_miners;
        
    }
    else {
        while (line_input != "/BuyCopperBasic") {
            cout << "Wrong input try again!";
            cin >> line_input;
        }
    }



}
