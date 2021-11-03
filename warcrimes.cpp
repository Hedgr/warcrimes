#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <Windows.h>


using namespace std;

int random = 0;

void sleep(int seconds)
{
	clock_t temp;
	temp = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < temp) {}
}

int on_start() {
	srand((((((((unsigned)time(0)) / 2) + 2) * 3) - 3) / 2) - 121);
	
	return 0;
}

int get_random_int(int offset, int range) {
	random = (offset + (rand() % range));
	//offset is the lowest number (default 0) and range is the highest (1 - 9 would be random = (1 + (rand() % 9)
	return 0;
}

class debug_c
{
public:
	string version = "0.3";
	int debug;

	int startup_debug();
	int display_levels();
};

int debug_c::startup_debug() {
	cout << "version " << debug_c::version << "\n";
	return 0;
}

int debug_c::display_levels() {

	return 0;
}

class game_c
{
public:
	int time;

	int init();
};

int game_c::init() {
	int time = 0;

	return 0;
}

class player_c
{
public:
	int money;

	int kidnappers;
	int kidnapper_level;
	
	int kidnap_people();
	int init();
};

int player_c::kidnap_people() {

	return 0;
}

int player_c::init() {
	player_c::money = 250;
	player_c::kidnappers = 0;
	player_c::kidnapper_level = 1;

	return 0;
}


class kidnapping_c
{
public:
	
	int kidnap_with_bike();
	int kidnap_with_car();
	int kidnap_with_minivan();
	int kidnap_with_van();
	int kidnap_with_truck();

};


class car_c
{
public:

	string car_s;
	int car;
	int bike_level;
	int car_level;
	int minivan_level;
	int van_level;
	int truck_level;

	int bike_multiplier;
	int car_multiplier;
	int minivan_multiplier;
	int van_multiplier;
	int truck_multiplier;
	int get_multipliers();

	int get_best_car();
	int upgrade_car();
	int upgrade_car_level();
	int init();
};

int car_c::get_multipliers() {
	car_c::bike_multiplier = (1 * car_c::bike_level);
	car_c::car_multiplier = (3 * car_c::car_level);
	car_c::minivan_multiplier = (7 * car_c::minivan_level);
	car_c::van_multiplier = (15 * car_c::van_level);
	car_c::truck_multiplier = (32 * car_c::truck_level);
	return 0;
}

int car_c::upgrade_car() {

	return 0;
}

int car_c::upgrade_car_level() {

	return 0;
}

int car_c::init() {
	car_c::car_s = "bike";
	car_c::car = 1;
	car_c::bike_level = 1;
	car_c::car_level = 0;
	car_c::minivan_level = 0;
	car_c::van_level = 0;
	car_c::truck_level = 0;
	car_c::get_multipliers();

	

	return 0;
}

class basement_c
{
public:
	int init();
	
	int basement_level;
	int max_capacity;
	int current_occupants;
	int is_full;
	int kidnapped_total;
	

};

int basement_c::init() {
	basement_c::basement_level = 1;
	basement_c::max_capacity = (basement_c::basement_level * 20);
	basement_c::current_occupants = 0;
	basement_c::is_full = 0;
	basement_c::kidnapped_total = 0;
	return 0;
}

class shop_c
{
public:
	int init();
	int update_prices();
	int on_sell();
	int shop();
	int car_shop();
	int basement_shop();
	
	int can_buy;
	int basement_level_price;
	int kidnapped_price;
	int level;
	int money_spent;
};

int shop_c::on_sell() {
	if (kidnapped_price < 6)
	{
		kidnapped_price = (kidnapped_price - 2);
	}
	else
	{
		kidnapped_price = 5;
	}

	return 0;
}

int shop_c::update_prices() {

	if (kidnapped_price < 20)
	{
		kidnapped_price = (kidnapped_price + 1); 
	}

	return 0;
}

int shop_c::shop() {
	string x = "";
	do {
		cout << "you are now in the shop, what would you like to buy:\n1. cars\n2. basement upgrades\n3. helpers\n";
		cin >> x;
	} while (x == "1" || x == "2" || x == "3");
	if (x == "1" || x == "2")
	{
		if (x == "1")
		{
			shop_c::car_shop();
		}
		else
		{

		}
	}
	else
	{

	}
	return 0;
}

int shop_c::init() {
	level = 0;
	money_spent = 0;
	can_buy = 1029384756;
	return 0;
}



debug_c debug;
game_c game;
player_c player;
car_c car;
basement_c basement;
shop_c shop;
kidnapping_c kidnapping;


int shop_c::basement_shop() {
	string x = "";
	do
	{
		cout << "your basement is level " << basement.basement_level << "\ntype in the number to select:\n1. level up - $";
	} while (true); 
	return 0;
}

int car_shop_check(int car_number_f) {
	int car_f = 500;
	int minivan = 1750;
	int van = 6000;
	int truck = 20000;
	int car_price = 0;
	if (car_number_f == 1)
	{
		car_price = car_f;
	}
	if (car_number_f == 2)
	{
		car_price = minivan;
	}
	if (car_number_f == 3)
	{
		car_price = van;
	}
	if (car_number_f == 4)
	{
		car_price = truck;
	}

	if (car_price < player.money)
	{
		shop.can_buy = 1;
	}
	else
	{
		shop.can_buy = 0;
	}
	
	return 0;
}

int shop_c::car_shop() {
	string answer = "";
	int idk_really = 0;
	if (car.car == 1)
	{
		cout << "you currently have a bike\nshop (type in number to purchase):\n1. car - $500\n2. minivan - $1750\n3. van - $6000\n4. truck - $20000\n";
		idk_really = 1;
	}
	if (car.car == 2)
	{
		cout << "you currently have a car and a bike\nshop (type in number to purchase):\n1. minivan - $1750\n2. van - $6000\n3. truck - $20000\n";
		idk_really = 2;
	}
	if (car.car == 3)
	{
		cout << "you currently have a car, a bike and a minivan\nshop (type in number to purchase):\n1. van - $6000\n2. truck - $20000\n";
		idk_really = 3;
	}
	if (car.car == 4)
	{
		cout << "you currently have a car, a bike, a minivan and a van\nshop (type in number to purchase):\n1. truck - $20000\n";
		idk_really = 4;
	}
	if (car.car == 5)
	{
		cout << "you currently have every vehicle, which includes a car, a bike, a minivan, a van and a truck";
		idk_really = 5;
	}
	cin >> answer;

	if (answer == "1" && idk_really < 5)
	{
		if (idk_really == 1)
		{
			car.car = 2;
			car.car_s = "car";
			car.car_level = 1;
		}
		if (idk_really == 2)
		{
			car.car = 3;
			car.car_s = "minivan";
			car.minivan_level = 1;
		}
		if (idk_really == 3)
		{
			car.car = 4;
			car.car_s = "van";
			car.van_level = 1;
		}
		if (idk_really == 4)
		{
			car.car = 5;
			car.car_s = "truck";
			car.truck_level = 1;
		}
	}
	if (answer == "2" && idk_really < 4)
	{
		if (idk_really == 1)
		{
			car.car = 3;
			car.car_s = "minivan";
			car.minivan_level = 1;
		}
		if (idk_really == 2)
		{
			car.car = 4;
			car.car_s = "van";
			car.van_level = 1;
		}
		if (idk_really == 3)
		{
			car.car = 5;
			car.car_s = "truck";
			car.truck_level = 1;
		}
	}
	if (answer == "3" && idk_really < 3)
	{
		if (idk_really == 1)
		{
			car.car = 4;
			car.car_s = "van";
			car.van_level = 1;
		}
		if (idk_really == 2)
		{
			car.car = 5;
			car.car_s = "truck";
			car.truck_level = 1;
		}
	}
	if (answer == "4" && idk_really < 2)
	{
		if (idk_really == 1)
		{
			car.car = 5;
			car.car_s = "truck";
			car.truck_level = 1;
		}
	}

	/*
	if (idk_really < 6) {
		if (answer == "1")
		{
			if (idk_really == 1)
			{
				car.car = 2;
				car.car_s = "car";
				car.car_level = (car.car_level + 1);
			}
			if (idk_really == 2)
			{
				car.car = 3;
				car.car_s = "minivan";
				car.minivan_level = (car.minivan_level + 1);
			}
			if (idk_really == 3)
			{
				car.car = 4;
				car.car_s = "van";
				car.van_level = (car.van_level + 1);
			}
			if (idk_really == 4)
			{
				car.car = 5;
				car.car_s = "truck";
				car.truck_level = (car.truck_level + 1);
			}
		}
		if (answer == "2" && idk_really < 5)
		{
			if (idk_really == 1)
			{
				car.car = 3;
				car.car_s = "minivan";
				car.minivan_level = (car.minivan_level + 1);
			}
			if (idk_really == 2)
			{
				car.car = 4;
				car.car_s = "van";
				car.van_level = (car.van_level + 1);
			}
			if (idk_really == 3)
			{
				car.car = 5;
				car.car_s = "truck";
				car.truck_level = (car.truck_level + 1);
			}
		}
		if (answer == "3" && idk_really < 4)
		{
			if (idk_really == 1)
			{
				car.car = 4;
				car.car_s = "van";
				car.van_level = (car.van_level + 1);
			}
			if (idk_really == 2)
			{
				car.car = 5;
				car.car_s = "truck";
				car.truck_level = (car.truck_level + 1);
			}
		}
		if (answer == "4" && idk_really > 3)
		{
			car.car = 5;
			car.car_s = "truck";
			car.truck_level = (car.truck_level + 1);
		}
	}
	return 0;
	*/
}


int kidnapping_c::kidnap_with_bike() {
	if ((basement.current_occupants+car.bike_multiplier) < basement.max_capacity) {
		basement.current_occupants = (basement.current_occupants + car.bike_multiplier);
		if (car.bike_multiplier > 1) {
			cout << "you have kidnapped " << car.bike_multiplier << " people\n";
		}
		else
		{
			cout << "you have kidnapped 1 person\n";
		}
	}
	else
	{
		int people_dumped_on_street = 0;
		people_dumped_on_street = ((basement.current_occupants + car.bike_multiplier) - basement.max_capacity);
		cout << "you dump " << people_dumped_on_street;
		if (people_dumped_on_street == 1) {
			cout << " person on the street because they could not fit in the basement\n";
		}
		else
		{
			cout << " people on the street because they could not fit in the basement\n";
		}
		basement.current_occupants = basement.max_capacity;
	}
	return 0;
}

int kidnapping_c::kidnap_with_car() { 
	if ((basement.current_occupants+car.car_multiplier) < basement.max_capacity) 
	{
		basement.current_occupants = (basement.current_occupants + car.car_multiplier);
		cout << "you have kidnapped " << car.car_multiplier << " people\n";
	}
	else
	{
		int people_dumped = 0;
		people_dumped = ((basement.current_occupants + car.car_multiplier) - basement.max_capacity);
		cout << "you dump " << people_dumped;
		if (people_dumped == 1) {
			cout << " person on the street because they could not fit in the basement\n";
		}
		else
		{
			cout << " people on the street because they could not fit in the basement\n";
		}
	}
	return 0;
}

int kidnapping_c::kidnap_with_minivan() {
	if ((basement.current_occupants + car.minivan_multiplier) < basement.max_capacity)
	{
		basement.current_occupants = (basement.current_occupants + car.minivan_multiplier);
		cout << "you have kidnapped " << car.minivan_multiplier << " people\n";
	}
	else
	{
		int people_dumped = 0;
		people_dumped = ((basement.current_occupants + car.minivan_multiplier) - basement.max_capacity);
		cout << "you dump " << people_dumped;
		if (people_dumped == 1) {
			cout << " person on the street because they could not fit in the basement\n";
		}
		else
		{
			cout << " people on the street because they could not fit in the basement\n";
		}
	}
	return 0;
}

int kidnapping_c::kidnap_with_van() {
	if ((basement.current_occupants + car.van_multiplier) < basement.max_capacity)
	{
		basement.current_occupants = (basement.current_occupants + car.van_multiplier);
		cout << "you have kidnapped " << car.car_multiplier << " people\n";
	}
	else
	{
		int people_dumped = 0;
		people_dumped = ((basement.current_occupants + car.van_multiplier) - basement.max_capacity);
		cout << "you dump " << people_dumped;
		if (people_dumped == 1) {
			cout << " person on the street because they could not fit in the basement\n";
		}
		else
		{
			cout << " people on the street because they could not fit in the basement\n";
		}
	}
	return 0;
}


int kidnapping_c::kidnap_with_truck() {
	if ((basement.current_occupants + car.truck_multiplier) < basement.max_capacity)
	{
		basement.current_occupants = (basement.current_occupants + car.truck_multiplier);
		cout << "you have kidnapped " << car.truck_multiplier << " people\n";
	}
	else
	{
		int people_dumped = 0;
		people_dumped = ((basement.current_occupants + car.truck_multiplier) - basement.max_capacity);
		cout << "you dump " << people_dumped;
		if (people_dumped == 1) {
			cout << " person on the street because they could not fit in the basement\n";
		}
		else
		{
			cout << " people on the street because they could not fit in the basement\n";
		}
	}
	return 0;
}

int on_update() {
	if (basement.current_occupants > basement.max_capacity)
	{
		basement.is_full = 1;
	}
	else {
		basement.is_full = 0;
	}

	return 0;
}



int kidnap_people() {
	cout << "what type of car do you want to use (type in number):\n";
	if (car.car == 5)
	{
		cout << "1. bike\n2. car\n3. minivan\n4. van\n5. truck\n";
	}
	if (car.car == 4)
	{
		cout << "1. bike\n2. car\n3. minivan\n4. van\n";
	}
	if (car.car == 3)
	{
		cout << "1. bike\n2. car\n3. minivan\n";
	}
	if (car.car == 2)
	{
		cout << "1. bike\n2. car\n";
	}
	if (car.car == 1)
	{
		cout << "1. bike\n";
	}
	string answer = "";
	cin >> answer;
	if (answer == "1")
	{
		kidnapping.kidnap_with_bike();
	}
	if (answer == "2" && car.car > 1)
	{
		kidnapping.kidnap_with_car();
	}
	if (answer == "3" && car.car > 2)
	{
		kidnapping.kidnap_with_minivan();
	}
	if (answer == "4" && car.car > 3)
	{
		kidnapping.kidnap_with_van();
	}
	if (answer == "5" && car.car > 4)
	{
		kidnapping.kidnap_with_truck();
	}
	return 0;
}


int print_stuff() {
	cout << "inventory:\nmoney: " << player.money << "\nworkers: " << player.kidnappers << "\nworkers level: " << player.kidnapper_level << "\n";
	if (car.car == 1)
	{
		cout << "current car: bike\nbike level: " << car.bike_level << "\n";
	}
	if (car.car == 2)
	{
		cout << "current cars:\nbike\ncar\nbike level: " << car.bike_level << "\ncar level: " << car.car_level;
	}
	if (car.car == 3)
	{
		cout << "current cars:\nbike\ncar\nminivan\nbike level: " << car.bike_level << "\ncar level: " << car.car_level << "\nminivan level: ";
		cout << car.minivan_level;
	}
	if (car.car == 4)
	{
		cout << "current cars:\nbike\ncar\nminivan\nvan\nbike level: " << car.bike_level << "\ncar level: " << car.car_level << "\nminivan level: ";
		cout << car.minivan_level << "\nvan level: " << car.van_level;
	}
	if (car.car == 5)
	{
		cout << "current cars:\nbike\ncar\nminivan\nvan\nbike level: " << car.bike_level << "\ncar level: " << car.car_level << "\nminivan level: ";
		cout << car.minivan_level << "\nvan level: " << car.van_level << "\ntruck level: " << car.truck_level << "\n";
	}
	cout << "people in basement: " << basement.current_occupants; 
	if (basement.current_occupants == basement.max_capacity)
	{
		cout << " (currently full)";
	}
	cout << "\nmax basement capacity: " << basement.max_capacity << "\n\n";
	return 0;
}

int what_to_do_shop() {
	string what_to_do_s = "";
	do {
		cout << "you are now in the shop, what would you like to do:\n1. buy\n2. sell\n";
		cin >> what_to_do_s;
	} while (what_to_do_s != "1" || what_to_do_s != "2");
	if (what_to_do_s == "1")
	{
		
	}
	else
	{
		do
		{
			player.money = (player.money + shop.kidnapped_price);
			shop.on_sell();
		} while (basement.current_occupants > 0);
	}
}

int what_to_do_2(string thing_to_do) {
	game.time = (game.time + 1);
	if (thing_to_do == "1")
	{ //kidnap people
		kidnap_people();
	}
	if (thing_to_do == "2")
	{ //shop
		shop.shop();
	}
	if (thing_to_do == "3")
	{ //job board

	}
	if (thing_to_do == "4")
	{ //metrics
		print_stuff();
	}
	return 0;
}

int what_to_do() {
	int did_it_correctly = 0;
	do
	{
		cout << "what do you want to do (type in number):\n1. kidnap people\n2. go to the shop (does not work currently)\n3. look at the job board (also doesnt work)\n4. check metrics\n";
		string thing_to_do = "";
		cin >> thing_to_do;
		
		if (thing_to_do == "1" || thing_to_do == "2" || thing_to_do == "3" || thing_to_do == "4")
		{
			what_to_do_2(thing_to_do);
			did_it_correctly = 1;
		}
	} while (did_it_correctly == 0);
	did_it_correctly = 0;
	return 0;
}


int main_loop() {
	game.time = (game.time + 1);
	shop.update_prices();
	what_to_do();

	return 0;
}

int main() {
	debug.startup_debug();
	game.init();
	car.init();
	basement.init();
	player.init();
	shop.init();
	
	do {
		main_loop();
	} while (true);
	return 69420;
}
