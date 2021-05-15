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
