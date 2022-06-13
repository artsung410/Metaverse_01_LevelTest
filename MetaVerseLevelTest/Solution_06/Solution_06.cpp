#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> myCard;
vector<string> Player1_Card;
vector<string> Player2_Card;
vector<vector<string>> Player_Card = { Player1_Card , Player2_Card };

//vector<vector<string>> player_Card = { Player1_Card , Player2_Card };

string shape[] = { "♠", "♣", "◆", "♥" };
string card[] = { "A", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "j", "Q", "K" };

void CardSort(); 
void InputRandomCard();
void PushSevenCard(int cardAmount, vector<string> PlayerCard, string* myCard);
void BettingCard();

int main()
{
    // 전체 카드를 담는다.
    CardSort();

    // 플레이어에게 분배할 랜덤 카드를 7장씩 담는다.
    InputRandomCard();
    
    // 카드를 배팅해준다.
    BettingCard();
}

void CardSort()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            string cards = shape[i] + card[j];
            myCard.push_back(cards);
        }
    }

    myCard.push_back("Joker"); //조커 카드를 담는다.
}

void InputRandomCard()
{
    srand(time(0));
    int cardAmount = 53;
    int HowManyPlayer = 2;

    //for (int i = 0; i < HowManyPlayer; i++)
    //{
    //    PushSevenCard(cardAmount, Player_Card[i], card);
    //}

    for (int i = 0; i < 7; i++)
    {
        int ran1 = rand() % cardAmount;

        if (myCard[ran1] == "0")
        {
            while (myCard[ran1] == "0")
            {
                ran1 = rand() % cardAmount;
            }
        }
        Player1_Card.push_back(myCard[ran1]);
        myCard[ran1] = "0";
    }

    for (int i = 0; i < 7; i++)
    {
        int ran2 = rand() % cardAmount;

        if (myCard[ran2] == "0")
        {
            while (myCard[ran2] == "0")
            {
                ran2 = rand() % cardAmount;
            }
        }
        Player2_Card.push_back(myCard[ran2]);
        myCard[ran2] = "0";
    }
}

void BettingCard()
{
    cout << "player1 : ";
    for (int i = 0; i < 7; i++)
    {
        cout << Player1_Card[i] << " ";
    }
    cout << endl;

    cout << "player2 : ";
    for (int i = 0; i < 7; i++)
    {
        cout << Player2_Card[i] << " ";
    }
}

//void PushSevenCard(int cardAmount, vector<string> PlayerCard, string* myCard)
//{
//    for (int i = 0; i < 7; i++)
//    {
//        int randomNum = rand() % cardAmount;
//
//        if (myCard[randomNum] == "0")
//        {
//            while (myCard[randomNum] == "0")
//            {
//                randomNum = rand() % cardAmount;
//            }
//        }
//
//        PlayerCard.push_back(myCard[randomNum]);
//        myCard[randomNum] = "0";
//    }
//}

