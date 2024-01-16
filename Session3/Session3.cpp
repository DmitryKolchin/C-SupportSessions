#include <iostream>
#include <vector>


class SoundBase
{
public:
    virtual void PlaySound()
    {
        std::cout << "Generic sound played\n";
    }

    virtual ~SoundBase() = default;
};

class GunshotSound : public SoundBase
{
public:
    void PlaySound() override
    {
        std::cout << "Gunshot sound played\n";
    }
};

class BackgroundSound : public SoundBase
{
public:
    void PlaySound() override
    {
        std::cout << "Background sound played\n";
    }
};

void PlaySound(SoundBase& Sound)
{
    Sound.PlaySound();
}



class GameInventoryItem
{
protected:
    std::string Name;
    float Weight;


public:
    GameInventoryItem(std::string&& Name, float Weight) : Name(Name), Weight(Weight) {}

    virtual void PrintName()
    {
        std::cout << "Name:  " << Name << ", Weight " << Weight << '\n';
    }


};

class Sword : public GameInventoryItem
{

};

class Inventory
{
private:
    std::vector<GameInventoryItem*> Items;

public:

    Inventory() = default;

    ~Inventory()
    {
        for (auto ItemPointer : Items)
        {
            delete ItemPointer;
        }
    }

    void AddItem(GameInventoryItem* NewItem)
    {
        Items.push_back(NewItem);
    }

};


int main(int argc, char* argv[])
{
    SoundBase* BaseSound = new SoundBase();
    SoundBase* Gunshot = new GunshotSound();
    SoundBase* Background = new BackgroundSound();

    PlaySound(*BaseSound);
    PlaySound(*Gunshot);
    PlaySound(*Background);


    delete BaseSound;
    delete Gunshot;
    delete Background;

    return 0;
}
