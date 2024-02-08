import random


class LeagueHero:
    def __init__(self, x, y, hero_type, health, damage, mana, current_health=100):
        self.__coords = (x, y)
        self.__hero_type = hero_type
        self.__max_health = health
        self.__current_health = health * current_health / 100
        self.__max_mana = mana
        self.__current_mana = mana
        self.__damage = damage

    def __str__(self):
        return f"Hero {self.__hero_type} is with {self.__current_health} health currently"

    def attack(self, other):
        chance = random.randint(0, 9)
        current_damage = self.__damage
        if chance == 9:
            current_damage = current_damage * 3
        other.take_damage(current_damage)

    def take_damage(self, damage):
        self.__current_health -= damage
        if self.__current_health <= 0:
            self.__current_health = 0
            print(f"Hero {self.__hero_type} died GG")

    def is_alive(self):
        return self.__current_health > 0


tkresh = LeagueHero(0, 0, "Tkresh", 1250, 100, 500)
masterYi = LeagueHero(10, 10, "Master Yi", 2000, 60, 500)
amumu = LeagueHero(5, 5, "Amumu", 1500, 70, 500)


print(tkresh)
print(masterYi)
print(amumu)

while tkresh.is_alive() and masterYi.is_alive() and amumu.is_alive():
    tkresh.attack(masterYi)
    masterYi.attack(tkresh)
    masterYi.attack(amumu)
    amumu.attack(tkresh)
    tkresh.attack(amumu)
    amumu.attack(masterYi)
    print(tkresh)
    print(masterYi)
    print(amumu)