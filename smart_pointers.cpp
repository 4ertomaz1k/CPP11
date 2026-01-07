#include <memory>


struct Hero
{
    void attack() {}
};

int main() {
    //memory will be clear at the end of this block
    std::unique_ptr<Hero> player = std::make_unique<Hero>();
    player->attack(); 
}