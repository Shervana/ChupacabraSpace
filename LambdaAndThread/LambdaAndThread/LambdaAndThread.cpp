
#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

class Character {
public:
    Character(string n) {
        this-> Name = n;
    }

    virtual int Attack(int &a) {
        a -= 1;
        return a;
    }
    string GetName() {
        return Name;
    }
private:
    string Name;
};

class Mage : public Character {
public:
    using Character::Character;
    int Attack(int &a) {
        while (a > 2) {
        a -= 3;
        cout << "Mage " << GetName() << " attacks!" << " The monster got weaker: " << a << endl;
        this_thread::sleep_for(chrono::milliseconds(700));

        }
        return a;
    }

};

class Paladin : public Character {
public:
    using Character::Character;
    int Attack(int &a) {
        while (a > 1) {
            a -= 2;
            if (a == 1) {
                a -= 1;
            }
            cout << "\t\t\t\t" << "Paladin " << GetName() << " attacks!" << " The monster got weaker: " << a << endl;
            this_thread::sleep_for(chrono::milliseconds(500));
        };
        return a;
    }
};

 int BossHeals (int &a) {
    while (a > 0 && a <= 100) {
        a += 1;
        cout << "\t\t\t\t" << "Monster: I AM HEALED!!!" << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
        }
    return a;
    };


int main()
{    
    Mage m("Roberto");
    Paladin p("Veronica");
    int BossHP = 100;
    thread th_1([&BossHP]() {BossHeals(BossHP); });
    thread th(&Paladin::Attack, ref(p), ref(BossHP));
    m.Attack(BossHP);

    th.join();
    th_1.join();

    cout << "Monster is dead! Congratulations!" << endl;
}
