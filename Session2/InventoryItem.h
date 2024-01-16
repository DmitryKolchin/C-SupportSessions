#pragma once
#include <string>

class InventoryItem
{
protected:
    std::string Name;
public:
    InventoryItem() = default;
    InventoryItem(std::string Name) : Name(Name) {}

   virtual std::string GetDisplayInfo();

};
