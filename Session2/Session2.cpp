
#include <iostream>

#include "BankAccount.h"
#include "GameCharacter.h"
#include "GameInventory.h"
#include "InventoryItem.h"
#include "Person.h"
#include "Player.h"
#include "Sword.h"
#include "Warrior.h"
#include "Wizard.h"
#include "Bow.h"

int main(int argc, char* argv[])
{
    Person Me("Dmitrii", 22);
    Me.DisplayInfo();

    Me.SetAge(25);
    Me.SetName("Not Dmitrii");
    Me.DisplayInfo();

    Player player("John", 100, 0);
    std::cout << "Player's name: " << player.GetName() << '\n';
    std::cout << "Player's health: " << player.GetHealth() << '\n';
    std::cout << "Player's score: " << player.GetScore() << "\n";

    BankAccount bank_account(1, 200);
    bank_account.Deposit(100);
    std::cout << bank_account.GetBalance() << '\n';

    bank_account.Withdraw(400);
    std::cout << bank_account.GetBalance() << '\n';

    Wizard wizard("Wizard", 1, 100);
    wizard.DisplayInfo();
    Warrior warrior("Warrior", 2, 100);
    warrior.DisplayInfo();

    GameInventory game_inventory;


    Sword* sword = new Sword("Excalibur", 20);
    Bow* bow = new Bow("Longbow", 4);

    game_inventory.AddItem(sword);
    game_inventory.AddItem(bow);
    game_inventory.DisplayItems();

    delete sword;
    delete bow;

    return 0;
}
