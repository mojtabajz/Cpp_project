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
	friend void decrease(int ,string,person&);
	public:
		person(int gender,double health=100):gender(gender){
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
		const int gender;
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
class army {
	public:
		void de_sb() {
			size_bullet -= sized_bullet;
		}
	private:
		int size_bullet;
		int sized_bullet;
};
bool check( int mode) {
	if (mode != 1 || mode != 2)
		return true;
	return false;
}
void operator --(army& gun) {
	gun.de_sb();
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
					cout << "1=new game\n" << "2-continue";

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
