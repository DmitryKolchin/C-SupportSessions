#include "GameInventory.h"

#include <iostream>

#include "InventoryItem.h"

void GameInventory::AddItem(InventoryItem* NewItem)
{
    Items.push_back(NewItem);
}

void GameInventory::DisplayItems()
{
    for (auto& Item : Items)
    {
        std::cout << "-" << Item->GetDisplayInfo() << "\n";
    }
}
