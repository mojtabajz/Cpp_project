#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
int co_i;//
double co_d;//
int mode;//in se khat baraye sakhti bazi
using namespace std;
class person {
	//template<typename T>
	friend void decrease(int ,string,person&);
	public:
		person(int gender,double health=100){
			this->health = health;
			id++;
		}
		void set( double money , double health ) {						
			this->health = health;
		};
		void get() {
			cout << health << '\t' << money << '\t';
		}
		static void mo(int moneyy) {
			money = moneyy;
		}
	private:
		static long int money;	
		int id;
		double health;
			
};
long int person::money=1000;
//template<typename T>
void decrease(int coefficient,string which,person &pl) {
	if (which == "h") {
		pl.health -= coefficient;
	}
	if (which == "m") {
		person::money -= coefficient;
	}
}
class weapon{
	friend void shop();
	public:
		
		weapon(int size_bullet , int reload):reload_time(reload)
		{
			this->size_bullet = size_bullet;
		}
		
		void de_sb() {
			size_bullet -= per_click;
			
		}
		
		void All_bullets(int Bought_bullets)
		{
			all_bullets += Bought_bullets;
		}
	private:
		const int reload_time;
		int all_bullets;
		int size_bullet;
		int per_click;
};
bool check( int mode) {
	if (mode != 1 || mode != 2)
		return true;
	return false;
}
void operator --(weapon& gun) {
	gun.de_sb();
}
	
void shop()
{
	int choise;
	while(true)
	{
		cout << "0.Close" << endl << "1.Gun" << endl << "2.Bullet" << endl << "3.Health" << endl;
		cin >> choise ;
		if(choise == 0)
		{
			return ;
		}
		while(choise == 1)
		{
			cout << "0.Close" << endl << "1.Karabiner 98K" << endl << "2.Gewehr 41" << endl << "3.Gewehr 43" << endl << "4.Volkssturmgewehr" << endl ;
			cin >> choise;
			
			if(choise == 1)
			{
				cout << "It is a German shotgun weapon.\n" << "It has 5 bullets.\n" << "Baking time 53 seconds.\n" << "The price of this weapon is x$\n" << "0.Close\n" << "1.Buy this weapon\n" ;
				cin >> choise ;
				if(choise == 0)
				{
					break;
				}
				else if(choise == 1)
				{
					//price
					weapon Karabiner_98K(5,53);
					break;
				}
			}
			else if(choise == 2)
			{
				cout << "It is a German semi-automatic weapon.\n" << "It has 10 bullets.\n" << "Baking time 79 seconds.\n" << "The price of this weapon is x\n" << "0.Close\n" << "1.Buy this weapon\n" ;
				cin >> choise ;
				if(choise == 0)
				{
					break;
				}
				else if(choise == 1)
				{
					//price
					weapon Gewehr_41(10,79);
					break;
				}
			}
			else if(choise == 3)
			{
				cout << "It is a German semi-automatic weapon.\n" << "It has 10 bullets.\n" << "Baking time 55 seconds.\n" << "The price of this weapon is x\n" << "0.Close\n" << "1.Buy this weapon\n" ;
				cin >> choise ;
				if(choise == 0)
				{
					break;
				}
				else if(choise == 1)
				{
					//price
					weapon Gewehr_43(10,55);
					break;
				}
			}
			else if(choise == 4)
			{
				cout << "It is a German semi-automatic weapon.\n" << "It has 13 bullets.\n" << "Baking time 50 seconds.\n" << "The price of this weapon is x\n" << "0.Close\n" << "1.Buy this weapon\n" ;
				cin >> choise ;
				if(choise == 0)
				{
					break;
				}
				else if(choise == 1)
				{
					//price
					weapon Volkssturmgewehr(13,50);
					break;
				}
			}
			
		}
		while(choise == 2)
		{
			cout << "0.Close" << endl << "1.Karabiner 98K" << endl << "2.Gewehr 41" << endl << "3.Gewehr 43" << endl << "4.Volkssturmgewehr" << endl ;
			cin >> choise;
			
			if(choise == 1)
			{
				cout << "A pack of 10 bullets of this weapon\n" << "The price of these bullets is n\n" << "0.Close\n" << "1.Buy this pack\n" ;
				cin >> choise ;
				if(choise == 0)
				{
					break;
				}
				else if(choise == 1)
				{
					//price
					Karabiner_98K.All_bullets(10);
					break;
				}
			}
			else if(choise == 2)
			{
				cout << "A pack of 15 bullets of this weapon\n" << "The price of these bullets is n\n" << "0.Close\n" << "1.Buy this pack\n" ;
				cin >> choise ;
				if(choise == 0)
				{
					break;
				}
				else if(choise == 1)
				{
					//price
					Gewehr_41.All_bullets(15);
					break;
				}
			}
			else if(choise == 3)
			{
				cout << "A pack of 15 bullets of this weapon\n" << "The price of these bullets is n\n" << "0.Close\n" << "1.Buy this pack\n" ;
				cin >> choise ;
				if(choise == 0)
				{
					break;
				}
				else if(choise == 1)
				{
					//price
					Gewehr_43.All_bullets(15);
					break;
				}
			}
			else if(choise == 4)
			{
				cout << "A pack of 20 bullets of this weapon\n" << "The price of these bullets is n\n" << "0.Close\n" << "1.Buy this pack\n" ;
				cin >> choise ;
				if(choise == 0)
				{
					break;
				}
				else if(choise == 1)
				{
					//price
					Volkssturmgewehr.All_bullets(20);
					break;
				}
			}
		}
		while(choise == 3)
		{
			cout << "0.Close\n" << "1.Bandage n$ (Adds 1 unit to health)\n" << "2.Patch n$ (Adds 0.5 unit to health)\n" << "3.Vitamin n$ (Adds 1.5 unit to health)\n" ;
			cin >> choise ;
			 
			if(choise == 0)
			{
				break;
			}
			else if(choise == 1)
			{
				//price
				//health
			}
			else if(choise == 2)
			{
				//price
				//health
			}
			else if(choise == 3)
			{
				//price
				//healse
			}
		}
	}
}


string decryptfunc_token(string token)
{
	char text[100];
	char temp;

	for (int i = 0; text[i] != '\0'; ++i) {
		temp = text[i];
		//If the message to be decypted is in lower case.
		if (temp >= 'a' && temp <= 'z') {
			temp = temp - 3;

			if (temp < 'a') {
				temp = temp + 'z' - 'a' + 1;
			}

			text[i] = temp;
		}
		//If the message to be decypted is in upper case.
		else if (temp >= 'A' && temp <= 'Z') {
			temp = temp - 3;

			if (temp < 'A') {
				temp = temp + 'Z' - 'A' + 1;
			}

			text[i] = temp;
		}
	}

	return token;

}



int main()
{
	shop();
	int menu,which,marhale, money, health;
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
						
						
						saver >> marhale>>money>>health;						
						//pl.set();
						saver.close();
					}
					break;
				}		
				switch (marhale) {
					case 1: {
						cout << 1;						
						cin >> marhale;
						saver << marhale << '\t' << money << '\t' << health;
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
						this_thread::sleep_for(chrono::seconds(5));

						cout << "According to the contents of the book, Daniel sees signs in that place and realizes that this is the place and now they are in the pit." << endl;
						this_thread::sleep_for(chrono::seconds(5));

						cout << "A suspect approaches them and start talking to them:" << endl;


						system("Color 0A");
						this_thread::sleep_for(chrono::seconds(5));
						cout << "suspect:hey guys !" << endl;

						system("Color 04");
						this_thread::sleep_for(chrono::seconds(5));
						cout << "Emma: hi ...." << endl;

						system("Color 0A");
						this_thread::sleep_for(chrono::seconds(5));
						cout << "suspect:what brings you here ? " << endl;

						system("Color 04");
						this_thread::sleep_for(chrono::seconds(5));
						cout << "Emma:Do we know you?" << endl;

						system("Color 0A");
						this_thread::sleep_for(chrono::seconds(5));
						cout << "suspect: i dont think that's a good question . you can trust ,i realy mean it !!" << endl << "so go ahead. tell me your story ";
						this_thread::sleep_for(chrono::seconds(5));

						cout << "Daniel and Emma told him their stories" << endl;
						this_thread::sleep_for(chrono::seconds(5));

						cout << "Now it's emma's choice !!" << endl;
						this_thread::sleep_for(chrono::seconds(5));

						int op_e;
						cin >> op_e;
						switch (op_e)
						{
						case 1://Admit that she is a spy
						{
							//Go to the torture room
							break;
						}
						case 2://She is a tourist and has come to this city for fun
						{
							//Go to the test room
							break;
						}
						break;
						}

						system("CLS");

						cin >> op_e;
						switch (op_e)
						{
						case 1://save daneil
						{
							//She dies to save his life
							int op_d;
							cin >> op_d;

							switch (op_d)//daneil choise
							{
							case 1:
							{
								//Reach supernatural power
								break;
							}
							case 2:
							{
								//bring emma to life
								break;
							}
							break;
							}
							system("CLS");
						}
						case 2://Do not save Daniel
						{
							//start the war with Nazis
							break;
						}

						//enter token to open the alala's gate
						string token;
						cin >> token;

						if (decryptfunc_token(token) == "alala")
							cout << "You won !";
						break;
						}
						break;
					}

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
				case 1:{
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

}
