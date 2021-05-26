#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <string>
#include <windows.h>  

int co_i;//
double co_d;//
int mode;//in se khat baraye sakhti bazi

using namespace std;
class person {
	//template<typename T>
	friend void decrease(int, string, person&);
	friend void SubLevel(int, string, person&);

public:
	person(int gender, double health = 100) {
		this->health = health;
		id++;
	}
	void set(double money, double health) {
		this->health = health;
	};
	void get() {
		cout << health << '\t' << money << '\t';
	}

	template <typename T>
	static void mo(T moneyy)
	{
		money = moneyy;
	}

private:
	static long int money;
	int id;
	double health;

};
long int person::money = 1000;

template <typename T>
void decrease(int coefficient, string which, person& pl)
{

	if (which == "h")
	{
		pl.health -= coefficient;
	}
	if (which == "m")
	{
		person::money -= coefficient;
		person::mo(T money);
	}
}


template <typename T>
void SubLevel(int coefficient, string which, person& pl)
{

	if (which == "h")
	{
		pl.health += coefficient;
	}
	if (which == "m")
	{
		person::money += coefficient;
		person::mo(T money);
	}
}

class weapon
{
	friend void shop();
public:

	weapon(int size_bullet, int reload) :reload_time(reload)
	{
		this->size_bullet = size_bullet;
	}

	void de_sb(int per_click) {
		size_bullet -= per_click;

	}

	void All_bullets(int Bought_bullets)
	{
		all_bullets += Bought_bullets;
	}
private:
	const int reload_time;//time of baking
	int all_bullets;
	int size_bullet;
	//int per_click;  delete
};
bool check(int mode) {
	if (mode != 1 || mode != 2)
		return true;
	return false;
}
/*void operator --(weapon& gun) {
	gun.de_sb();
}*/

weapon Karabiner_98K(5, 53);
weapon Gewehr_41(10, 79);
weapon Gewehr_43(10, 55);
weapon Volkssturmgewehr(13, 50);

weapon Gun[4] = { Karabiner_98K , Gewehr_41 , Gewehr_43 , Volkssturmgewehr };
int G1 = 0, G2 = 0, G3 = 0, G4 = 0;//entekhab selah faghat yek bar baraye shop
void shop()
{

	int choise;
	while (true)
	{
		cout << "0.Close" << endl << "1.Gun" << endl << "2.Bullet" << endl << "3.Health" << endl;
		cin >> choise;
		if (choise == 0)
		{
			return;
		}
		while (choise == 1)
		{
			cout << "0.Close" << endl << "1.Karabiner 98K" << endl << "2.Gewehr 41" << endl << "3.Gewehr 43" << endl << "4.Volkssturmgewehr" << endl;
			cin >> choise;

			if (choise == 1)
			{
				cout << "It is a German shotgun weapon.\n" << "It has 5 bullets.\n" << "Baking time 53 seconds.\n" << "The price of this weapon is x$\n" << "0.Close\n" << "1.Buy this weapon\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G1 == 0)
				{
					//price

					G2 = 0;
					G3 = 0;
					G4 = 0;

					G1++;
					break;
				}
				else if (choise == 1 && G1 == 1)
				{
					cout << "This weapon has already been purchased." << endl;
					break;
				}
			}
			else if (choise == 2)
			{
				cout << "It is a German semi-automatic weapon.\n" << "It has 10 bullets.\n" << "Baking time 79 seconds.\n" << "The price of this weapon is x\n" << "0.Close\n" << "1.Buy this weapon\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G2 == 0)
				{
					//price

					G1 = 0;
					G3 = 0;
					G4 = 0;

					G2++;
					break;
				}
				else if (choise == 1 && G2 == 1)
				{
					cout << "This weapon has already been purchased." << endl;
					break;
				}
			}
			else if (choise == 3)
			{
				cout << "It is a German semi-automatic weapon.\n" << "It has 10 bullets.\n" << "Baking time 55 seconds.\n" << "The price of this weapon is x\n" << "0.Close\n" << "1.Buy this weapon\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G3 == 0)
				{
					//price

					G1 = 0;
					G2 = 0;
					G4 = 0;

					G3++;
					break;
				}
				else if (choise == 1 && G3 == 1)
				{
					cout << "This weapon has already been purchased." << endl;
					break;
				}
			}
			else if (choise == 4)
			{
				cout << "It is a German semi-automatic weapon.\n" << "It has 13 bullets.\n" << "Baking time 50 seconds.\n" << "The price of this weapon is x\n" << "0.Close\n" << "1.Buy this weapon\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G4 == 0)
				{
					//price

					G1 = 0;
					G2 = 0;
					G3 = 0;

					G4++;
					break;
				}
				else if (choise == 1 && G4 == 1)
				{
					cout << "This weapon has already been purchased." << endl;
					break;
				}
			}

		}
		while (choise == 2)
		{
			cout << "0.Close" << endl << "1.Karabiner 98K" << endl << "2.Gewehr 41" << endl << "3.Gewehr 43" << endl << "4.Volkssturmgewehr" << endl;
			cin >> choise;

			if (choise == 1)
			{
				cout << "A pack of 10 bullets of this weapon\n" << "The price of these bullets is n\n" << "0.Close\n" << "1.Buy this pack\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G1 == 1)
				{
					//price


					Gun[0].All_bullets(10);
					break;
				}
			}
			else if (choise == 2)
			{
				cout << "A pack of 15 bullets of this weapon\n" << "The price of these bullets is n\n" << "0.Close\n" << "1.Buy this pack\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G2 == 1)
				{
					//price

					Gun[1].All_bullets(15);

					break;
				}
			}
			else if (choise == 3)
			{
				cout << "A pack of 15 bullets of this weapon\n" << "The price of these bullets is n\n" << "0.Close\n" << "1.Buy this pack\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G3 == 1)
				{
					//price

					Gun[2].All_bullets(15);

					break;
				}
			}
			else if (choise == 4)
			{
				cout << "A pack of 20 bullets of this weapon\n" << "The price of these bullets is n\n" << "0.Close\n" << "1.Buy this pack\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G4 == 1)
				{
					//price

					Gun[3].All_bullets(20);

					break;
				}
			}
		}
		while (choise == 3)
		{
			cout << "0.Close\n" << "1.Bandage n$ (Adds 1 unit to health)\n" << "2.Patch n$ (Adds 0.5 unit to health)\n" << "3.Vitamin n$ (Adds 1.5 unit to health)\n";
			cin >> choise;

			if (choise == 0)
			{
				break;
			}
			else if (choise == 1)
			{
				//price
				//health
			}
			else if (choise == 2)
			{
				//price
				//health
			}
			else if (choise == 3)
			{
				//price
				//health
			}
		}
	}
}

void decreas_bullet(int BULLET)
{
	if (G1 == 1)
	{
		Gun[0].de_sb(BULLET);
	}
	else if (G2 == 1)
	{
		Gun[1].de_sb(BULLET);
	}
	else if (G3 == 1)
	{
		Gun[2].de_sb(BULLET);
	}
	else if (G4 == 1)
	{
		Gun[3].de_sb(BULLET);
	}
}

bool decryptfunc_token(string token)//Caesar Cipher decryptfunc with 3 times shift
{
	char ch;
	for (int i = 0; token[i] != '\0'; ++i)
	{
		ch = token[i];
		if (ch >= 'a' && ch <= 'z')
		{
			ch = ch - 3;
			if (ch < 'a')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			token[i] = ch;
		}

		else if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch - 3;
			if (ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			token[i] = ch;
		}
	}
	if (token == "alala")
		return true;
	else
		return false;

}



int main()
{
	shop();
	int menu, which, marhale, money, health;
	fstream saver("save.txt", ios::in | ios::out);
	person D(1);
	person E(0);
	for (;;) {
		system("cls");
		cout << "1-play" << endl << "2-setting" << endl << "3-shop" << endl;
		cin >> menu;
		system("cls");
		switch (menu) {
		case 1: {

			for (;;) {
				cout << "what mode you want?!\n" << "1-hard\n" << "2-easy\n";
				cin >> mode;
				system("cls");
				if (!check(mode)) {
					continue;
				}
				system("cls");
				cout << "1-new game\n" << "2-continue";

				cin >> marhale;
				if (marhale == 2) {


					saver >> marhale >> money >> health;
					//pl.set();
					saver.close();
				}
				break;
			}
			switch (marhale)
			{
			case 1:
			{
				int choise;
				cout << "1: two-way belief" << endl;
				this_thread::sleep_for(chrono::seconds(5));
				system("cls");

				cout << "Due to the suspicious activities of the Nazis in Myanmar, the Soviet Army needed to send an agent to Myanmar to infiltrate the Nazis." << endl;
				this_thread::sleep_for(chrono::seconds(5));

				cout << "This mission is offered to Emma..." << endl;
				this_thread::sleep_for(chrono::seconds(2));
				while (true)
				{
					cout << "Commander: Do you want to do this mission in Myanmar?" << endl << "1.yes" /*start mission*/ << endl << "2.I want 3 days to respond" << endl;
					cin >> choise;

					if (choise == 1)
					{
						break;
					}
					else if (choise == 2)
					{
						system("cls");
						cout << "The next day and after thinking about the mission ..." << endl;
						this_thread::sleep_for(chrono::seconds(3));

						system("Color 79");
						cout << "Emma remembers how her father was killed by the Nazis." << endl;
						this_thread::sleep_for(chrono::seconds(4));
						cout << "That is why she decides to accept this mission." << endl;
						this_thread::sleep_for(chrono::seconds(4));
						break;
					}
				}

				system("cls");
				system("color 0f");
				cout << "Emma travels to Myanmar alone and first enters a secret shop to buy weapons." << endl;
				this_thread::sleep_for(chrono::seconds(3));
				while (true)
				{
					shop();
					if (G1 > 0 || G2 > 0 || G3 > 0 || G4 > 0)
					{
						cout << "It was a good choice." << endl;
						break;
					}
				}

				this_thread::sleep_for(chrono::seconds(2));
				cout << "After touring Myanmar and gathering information, Emma discovers Nazi activity in the forests of Bagan.\n" << " He goes there to do his mission." << endl;
				this_thread::sleep_for(chrono::seconds(8));
				cout << "In the middle of the night, while wandering in the woods,\n" << "She met Daniel and at first thought he was a Nazi because of the equipment Daniel had with him (which Daniel had bought from the natives and had a Nazi symbol)." << endl;
				this_thread::sleep_for(chrono::seconds(20));

				cout << "So Emma went to her so that she could approach him and penetrate their position." << endl;
				this_thread::sleep_for(chrono::seconds(2));
				system("cls");


				//cout << "Daniel told his own story and why he came here, and Emma,who thought Daniel was a Nazi, thought the story Daniel had told her was a lie. 

				system("cls");
				cout << "After spending the night in the wood near dawn, they suddenly stumble upon a Nazi camp.\n" << " At that moment, 4 Nazi soldiers see them. Daniel quickly flees in fear." << endl;
				this_thread::sleep_for(chrono::seconds(10));
				system("cls");
				while (true)
				{
					cout << "Emma:" << endl << "1.I shoot at the Nazis and then run away" << endl << "2.I escape" << endl;
					cin >> choise;
					if (choise == 1)
					{
						cout << "Emma fires three bullets at the Nazis and kills two of them" << endl;
						this_thread::sleep_for(chrono::seconds(2));
						decreas_bullet(3);
						cout << "Then Emma runs away" << endl;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "The Nazis chase after them and shoot at them.\n";
						this_thread::sleep_for(chrono::seconds(2));
						cout << "Daniel's hand shoots." << endl;
						this_thread::sleep_for(chrono::seconds(4));

						cout << "Meanwhile, three wolves that smelled Daniel's blood attacked them." << endl;
						this_thread::sleep_for(chrono::seconds(3));
						cout << "Daniel and Emma escaped from the wolves and the wolves went to the Nazis and clashed with them and finally killed them." << endl;
						this_thread::sleep_for(chrono::seconds(7));
						system("cls");
						cout << "Emma and Daniel continue to reach a river that is crossed by a bridge." << endl;
						this_thread::sleep_for(chrono::seconds(3));

						while (true)
						{
							cout << "1.Let's cross the bridge" << endl << "2.Let's go under the bridge" << endl;
							cin >> choise;
							if (choise == 1)
							{
								cout << "They cross the bridge and reach the abandoned huts." << endl;
								this_thread::sleep_for(chrono::seconds(3));
								//start SubLevel
								//SubLevel();
								//bazi farie
								break;
							}
							else if (choise == 2)
							{
								cout << "They swim in the river and the Nazis lose them." << endl;
								this_thread::sleep_for(chrono::seconds(3));
								break;
							}
						}
						break;
					}
					else if (choise == 2)
					{
						cout << "Emma also runs away." << endl;
						this_thread::sleep_for(chrono::seconds(1));

						cout << "The Nazis chase after them and shoot at them.\n";
						this_thread::sleep_for(chrono::seconds(2));
						cout << "Daniel's hand shoots." << endl;
						this_thread::sleep_for(chrono::seconds(4));

						cout << "Meanwhile, three wolves that smelled Daniel's blood attacked them." << endl;
						this_thread::sleep_for(chrono::seconds(3));
						cout << "Daniel and Emma escaped from the wolves and the wolves went to the Nazis and clashed with them and finally kill the tow of them." << endl;
						this_thread::sleep_for(chrono::seconds(7));
						system("cls");
						cout << "Emma and Daniel continue to reach a river that is crossed by a bridge." << endl;
						this_thread::sleep_for(chrono::seconds(2));

						while (true)
						{
							cout << "1.Let's cross the bridge" << endl << "2.Let's go under the bridge" << endl;
							cin >> choise;
							if (choise == 1)
							{
								cout << "They cross the bridge." << endl;
								this_thread::sleep_for(chrono::seconds(1));
								cout << "They go to abandoned huts and stand there." << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "The two Nazis who were following him also go there to find them." << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "Emma, who was standing up, stabbed one of them in the back with a knife." << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "The other Nazi heard Daniel panting and went to kill Daniel." << endl;
								this_thread::sleep_for(chrono::seconds(2));
								system("cls");
								while (true)
								{
									cout << "Daniel also notices him and looks for a means of self-defense that catches his eye on a rock." << endl;
									cout << "Daniel:" << endl << "1.Take the stone and defend myself" << endl << "2.Do not take the stone" << endl;
									cin >> choise;
									if (choise == 1)
									{
										cout << "Daniel throws a stone at the Nazi soldier." << endl;
										this_thread::sleep_for(chrono::seconds(2));
										cout << "Nazia gets angry and points her gun at Daniel, who is suddenly shot by Emma from a distance." << endl;
										decreas_bullet(2);
										this_thread::sleep_for(chrono::seconds(3));
										break;
									}
									else if (choise == 2)
									{
										cout << "The Nazi slowly approaches Daniel to kill him." << endl;
										this_thread::sleep_for(chrono::seconds(3));
										cout << "Emma slowly approaches the Nazi soldier from behind and kills him with a knife." << endl;
										this_thread::sleep_for(chrono::seconds(3));
										break;
									}
								}
								break;
							}
							else if (choise == 2)
							{
								cout << "They swim in the river and the Nazis lose them." << endl;
								this_thread::sleep_for(chrono::seconds(3));
								break;
							}
						}
						break;
					}
				}
				cout << "When the situation calms down, they take refuge in the abandoned temples to rest and get Daniel's dressing.\n";
				this_thread::sleep_for(chrono::seconds(7));
				cout << "Emma trusts Daniel and realizes that Daniel is not a Nazi.\n";
				this_thread::sleep_for(chrono::seconds(5));
				cout << "He tells his true story to Daniel.\n";
				this_thread::sleep_for(chrono::seconds(4));
				cout << "Daniel shows the book to Emma and says that I am looking for the entrance to the gate here.\n";
				this_thread::sleep_for(chrono::seconds(7));
				cout << "Emma, who does not believe in such things, thinks that Daniel is crazy and is snoozing.";
				this_thread::sleep_for(chrono::seconds(7));
				system("cls");

				cout << "They rest for a few hours, and around noon Emma leaves for town to get medicine for Daniel and food." << endl;
				this_thread::sleep_for(chrono::seconds(9));
				cout << "On the way through the forest, she sees a group of Nazis imprisoning the natives of the area and taking them to one side." << endl;
				this_thread::sleep_for(chrono::seconds(10));
				cout << "She follows them and reaches a pit and the Nazis enter it. Facing the pit is a thick red tree with blue flowers on it." << endl;
				this_thread::sleep_for(chrono::seconds(13));
				cout << "She suddenly realizes that it is too late and Daniel is waiting." << endl;
				this_thread::sleep_for(chrono::seconds(7));
				cout << "She goes to the city and prepares the necessary items and returns to the temple." << endl;
				this_thread::sleep_for(chrono::seconds(15));
				system("cls");

				cout << "Emma tells the story of the Nazis and that pit and tree to Daniel." << endl;
				this_thread::sleep_for(chrono::seconds(7));
				cout << "And Daniel shows her a part of the book that gives exactly the characteristics of this tree and says that there is a pit near it." << endl;
				this_thread::sleep_for(chrono::seconds(15));
				cout << "Emma believes Daniel." << endl;
				this_thread::sleep_for(chrono::seconds(2));
				cout << "Emma helps Daniel find the pit, both because the Nazis enter the pit and because of her curiosity about the book's story." << endl;
				this_thread::sleep_for(chrono::seconds(15));
				system("cls");

				break;
			}
			case 2: {
				cout << 2;
				cin >> marhale;
				break;
			}
			case 3://start level3
			{

				system("CLS");
				cout << "Emma and Daniel find themselves in prison...." << endl;
				this_thread::sleep_for(chrono::seconds(2));
				system("CLS");

				cout << "According to the contents of the book, Daniel sees signs in that place and realizes that this is the place and now they are in the pit." << endl;
				this_thread::sleep_for(chrono::seconds(2));
				system("CLS");

				cout << "A suspect approaches them and start talking to them:" << endl;
				system("CLS");

				system("Color 0A");
				this_thread::sleep_for(chrono::seconds(2));
				cout << "suspect:hey guys !" << endl;
				system("CLS");

				system("Color 04");
				this_thread::sleep_for(chrono::seconds(2));
				cout << "Emma: hi ...." << endl;
				system("CLS");

				system("Color 0A");
				this_thread::sleep_for(chrono::seconds(2));
				cout << "suspect:what brings you here ? " << endl;
				system("CLS");

				system("Color 04");
				this_thread::sleep_for(chrono::seconds(2));
				cout << "Emma:Do we know you?" << endl;
				system("CLS");

				system("Color 0A");
				this_thread::sleep_for(chrono::seconds(2));
				cout << "suspect: i dont think that's a good question . you can trust ,i realy mean it !!" << endl << "so go ahead. tell me your story ";
				this_thread::sleep_for(chrono::seconds(2));
				system("CLS");

				cout << "Daniel and Emma told him their stories" << endl;
				this_thread::sleep_for(chrono::seconds(2));
				system("CLS");

				cout << "Now it's emma's choice !!" << endl;
				this_thread::sleep_for(chrono::seconds(2));
				system("CLS");

				int choice;
				cin >> choice;
				while (true)
				{
					if (choice == 1)//Admit that she is a spy
					{
						cout << "She confess that she is russian spy !" << endl;
						this_thread::sleep_for(chrono::seconds(2));
						system("CLS");
						cout << "Suspect guy tell to the Nazis that they are russian spies who they were looking for them " << endl;
						this_thread::sleep_for(chrono::seconds(2));
						system("CLS");
						//Go to the torture room

						cout << "The Nazis take them to a torture chamber for collecting information about thier information " << endl;
						this_thread::sleep_for(chrono::seconds(2));
						system("CLS");
						cout << "Right Before interrogators arrive,A tray full of winning tools catches Emma's eye! " << endl;
						this_thread::sleep_for(chrono::seconds(2));
						system("CLS");
						cout << "Emma picked up a sharp tool with all her might and freed herself and Daniel from the ropes " << endl;
						this_thread::sleep_for(chrono::seconds(2));
						system("CLS");

						break;

					}
					else if (choice == 2)//She is a tourist and has come to this city for fun
					{
						system("CLS");
						cout << "The Nazis cut them to test on them" << endl;
						this_thread::sleep_for(chrono::seconds(2));
						system("CLS");
						//Go to the test room
						cout << "Before the scientists arrived, a tray full of winning tools caught Emma's eye" << endl;
						this_thread::sleep_for(chrono::seconds(2));
						system("CLS");
						cout << "And Emma took a sharp tool with all her might and freed herself and Daniel from the ropes" << endl;
						this_thread::sleep_for(chrono::seconds(2));
						system("CLS");
						break;
					}
					else
					{
						cout << "An error has occurred!";

					}
				}
				system("CLS");
				cout << "Their eyes catch on the rocket launcher and they catch it and run to the end of the corridor behind the room, which leads to a dead end" << endl;
				this_thread::sleep_for(chrono::seconds(2));
				system("CLS");
				cout << "Daniel realizes that this is where the book says and the gate opens" << endl;
				this_thread::sleep_for(chrono::seconds(2));
				system("CLS");
				cout << "Suddenly his eye falls on a flat and strange part of the wall and goes towards him" << endl;
				this_thread::sleep_for(chrono::seconds(2));
				system("CLS");
				cout << "When he touches it, a series of sentences appear in a foreign language and Daniel has to decipher it" << endl;
				this_thread::sleep_for(chrono::seconds(2));

				system("CLS");


				//enter token to open the alala's gate
				string token;
				cin >> token;

				if (decryptfunc_token(token) == true)
				{
					cout << "Gate is open !";

					system("CLS");
					cout << "When he touches it, a series of sentences appear in a foreign language and Daniel has to decipher it" << endl;
					this_thread::sleep_for(chrono::seconds(2));
					system("CLS");
					cout << "Emma, ​​who was a little further from the gate, has two decisions:" << endl;
					this_thread::sleep_for(chrono::seconds(2));
					system("CLS");
					cout << "1)Go to Daniel to save him" << endl;
					this_thread::sleep_for(chrono::seconds(2));
					system("CLS");
					cout << "2)Move further away from the gate to be safe" << endl;
					this_thread::sleep_for(chrono::seconds(2));
					system("CLS");


					int choice2;
					cin >> choice2;
					while (true)
					{
						if (choice2 == 1) //save daneil
						{
							//She dies to save his life
							cout << "Both Emma and Daniel are dragged into gate the underworld and face Alala" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							system("CLS");
							cout << "Both Emma and Daniel are dragged into gate the underworld and face Alala" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							system("CLS");
							cout << "Suddenly, Emma takes offense for fear and fires a rocket at Alala, causing Alala to kill her..." << endl;
							this_thread::sleep_for(chrono::seconds(2));
							system("CLS");
							cout << "Now Daniel is very sad about Emma's death" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							system("CLS");
							cout << " Alala tells him the story of the Nazisand tells them that you must get them out so that they do not harm the world any more" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							system("CLS");
							cout << "It gives Daniel the right to choose between two things" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							system("CLS");
							cout << "1)Reach the supernatural power" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							system("CLS");

							cout << "2)Let her live" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							system("CLS");



							int choiceD;
							cin >> choiceD; //daneil choise
							while (true)
							{
								if (choiceD == 1)
								{
									//Reach supernatural power
									system("CLS");
									cout << "Then he comes out of the gate and destroys the Nazis in that area with the power he has" << endl;
									this_thread::sleep_for(chrono::seconds(2));
									system("CLS");


									while (true)
									{
										shop();
										if (G1 > 0 || G2 > 0 || G3 > 0 || G4 > 0)
										{
											cout << "It was a good choice." << endl;
											break;
										}
									}
									break;
								}
								else if (choiceD == 2)
								{
									//bring emma to life
									system("CLS");
									cout << "emma comes alive and together they destroy the trachea of ​​that area" << endl;
									this_thread::sleep_for(chrono::seconds(2));
									system("CLS");

									while (true)
									{
										shop();
										if (G1 > 0 || G2 > 0 || G3 > 0 || G4 > 0)
										{
											cout << "It was a good choice." << endl;
											break;
										}
									}
									break;
								}
								else
								{
									cout << "An error has occurred!";
									return 0;
								}

							}
							break;
						}
						else if (choice2 == 2)//Do not save Daniel
						{
							//start the war with Nazis
							system("CLS");
							cout << "Daniel goes to the gate and seizes power and tells Emma what the story of the Nazis is. Together they destroy the Nazis" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							system("CLS");
							while (true)
							{
								shop();
								if (G1 > 0 || G2 > 0 || G3 > 0 || G4 > 0)
								{
									cout << "It was a good choice." << endl;
									break;
								}
							}
							system("CLS");
							cout << "After the destruction of the Nazis, they take people out of prison and save them, and they destroy that pit forever" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							system("CLS");
							cout << "The END ..." << endl;
							this_thread::sleep_for(chrono::seconds(2));
							system("CLS");
							break;
						}
						else
						{
							cout << "An error has occurred!";
						}

					}

				}
				else
					cout << "Can't enter gate:(";
				break;
			}
			break;
			}
			break;
		}


		case 2: {
			cout << "1-mode" << endl << "2-audio" << endl;
			cin >> which;
			break;
		}
		case 3: {
			cout << "1-colt" << endl << "2-shotgun" << endl << "3-mosalsal" << endl << "4-snipe" << endl << "5-rpg\n";
			cin >> which;
			switch (which) {
			case 1: {
				cout << "100 ta kam shod :)";
				this_thread::sleep_for(chrono::seconds(2));
			}
				  break;
			case 2: {
				cout << "100 ta kam shod :)";
				this_thread::sleep_for(chrono::seconds(2));
			}
				  break;
			case 3: {
				cout << "100 ta kam shod :)";
				this_thread::sleep_for(chrono::seconds(2));
			}
				  break;
			case 4: {
				cout << "100 ta kam shod :)";
				this_thread::sleep_for(chrono::seconds(2));
			}
				  break;
			case 5: {
				cout << "100 ta kam shod :)";
				this_thread::sleep_for(chrono::seconds(2));
			}
				  break;
			}
		}
		}
		return 1;
	}

