#pragma once
#include <string>
#include <vector>

class InventoryItem;

class GameInventory
{
    std::vector<InventoryItem*> Items;
public:
    void AddItem(InventoryItem* NewItem);
    void DisplayItems();

};
