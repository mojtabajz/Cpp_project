#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <string>
#include <windows.h>  

using namespace std;

int co_i;//
double co_d;//
int mode;//in se khat baraye sakhti bazi

class person {
	template<typename T>
	friend void SubLevel(T cash,T h,person& E,person& D);
	
	template<typename t>// mrs:)
	friend void operator+=(person &p,t increase);//mrs:)
	
	template<typename t>//mrs:)
	friend void operator-=(person &P,t mitigate);//mrs:)
	
	template<typename T>//mrs:)
	friend void decrease_m(T decrease_money,person&E,person&D);//mrs:)
	
	template<typename T>//mrs:)
	friend void Add_m(T Add_money,person&E,person&D);//mrs:)
		
	friend void save_replace(person &E,person &D);//inja chon ba estefade az id mikhaim seekp anjam bedam mrs:)
	friend bool check_id(person &E,person &D,int id);//inja chon ba estefade az id mikhaim seekg anjam bedam mrs:)
public:
	
	person(int gender,double health=10,double money=50,int mode=1):gender(gender){//gender ro kamel kardam va money ro ezafe kardam *****//mode ro ezafe kardam mrs:)
		this->health = health;
		//id++;//pak kardam chon bedard nemikhore mrs:)
		this->All_money=money;
		//if(gender==1)//agar in nabashe dobar id ro ziad mikone
		//id++; bedard nemikhord mrs:)
	}
	
	/*void set(double money, double health) {
		this->health = health;
	};
	void get()const {
		cout << health << '\t' << All_money << '\t';
	}
	static void mo(int moneyy) { chon static ro hazf kardam mrs:)
		money = moneyy;
	}*/
	
	void print_information()const{//baraye fahmidan vaziat mrs:)
		if(gender==1)
			cout<<"Emma\n";
		else
			cout<<"Daniel\n";
		cout<<"your id is :"<<id<<endl;
		cout<<"your health is :"<<health<<endl;
		cout<<"your money is :"<<All_money<< "$" <<endl;
	}
	
	int get_id()const{//baraye malom kardan id mrs:)
		return id;
	}
	void set_id(int id){//baraye ghesmat new game ke id yeksan nashe mrs:)
		this->id=id;
	}
	void set_mode(int mode){//baraye sakhti bazi mrs:)
		this->mode=mode;//mrs:)
	}
	
	void set_marhale(int marhale){//baraye marahele mrs:)
		this->marhale=marhale;//baraye marahele mrs:)
	}
	int get_marhale()const{//baraye marahele mrs:)
		return marhale;//baraye marahele mrs:)
	}
	/*void de(){//alaki
		health--;
	}*/

/*	template <typename T> ino pak kardam chon friend kardam niaz be in nist mrs:)
	void d_m(T money)	mrs:)
	{	mrs:)
		All_money -= money;mrs:)
	}mrs:)
	mrs:)
	template <typename T>mrs:)
	void A_m(T money)mrs:)
	{mrs:)
		All_money += money;mrs:)
	}mrs:)*/
	
	template <typename t>
	int baghi_poool(t roket)
	{
		double baghi_poool;
		baghi_poool = All_money - roket;
		return baghi_poool;
	}
	
private:
	//static long int money;	hazf shod mrs:)
	double All_money; 
	int id=0;// age shod ham static bezan ham gheir ta faghat ye id neveshte beshe mrs:)bara khodame shoma nadide begir:)
	double health;
	const int gender;//   ezafe shod mrs:)
	int mode;//baraye halat sakhti va asoni bazi //mrs:)
	int marhale=0;//barye inke befahmim kodom marhale hast mrs:)
};

//long int person::money = 1000;     hazf

//person p1(1);//ba header call mikonim mrs:)
template <typename T>
void decrease_m(T decrease_money,person&E,person&D)// az pool kam mikone  *****header ro taghir dadam mrs:)
{
//	p1.d_m(decrease_money);pak kardam ke to header benevisam mrs:)	
	E.All_money-=decrease_money;//mrs:)
	D.All_money-=decrease_money;//mrs:)
}

template <typename T>
void Add_m(T Add_money,person&E,person&D)// be pool ezafe mikone ******header ro taghir dadam mrs:)
{
	//	p1.A_m(Add_money);pak kardam ke to header benevisam mrs:)
	E.All_money+=Add_money;//mrs:)
	D.All_money+=Add_money;//mrs:)
}

template<typename t>// mrs:)
void operator-=(person &p,t mitigate){// baraye kam shodan jon mrs:)
	if(p.mode==1)//mrs:)
		p.health-=mitigate;//mrs:)
	else //mrs:)
		if(p.mode==2){//mrs:)
			p.health-=(mitigate*1.5);//mrs:)
		}//mrs:)
}//mrs:)

template<typename t>// mrs:)
void operator+=(person &p,t increase){// baraye kam shodan jon mrs:)	
		p.health+=increase;//mrs:)	
}//mrs:)

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
void shop(person& E, person& D)
{

	int choise;
	while (true)
	{
		cout << "0.Close" << endl << "1.Gun" << endl << "2.Bullet" << endl << "3.Health" << endl;
		cin >> choise;
		system("cls");
		if (choise == 0)
		{
			return;
		}
		while (choise == 1)
		{
			cout << "0.Close" << endl << "1.Karabiner 98K" << endl << "2.Gewehr 41" << endl << "3.Gewehr 43" << endl << "4.Volkssturmgewehr" << endl;
			cin >> choise;
			system("cls");
			if (choise == 1)
			{
				cout << "It is a German shotgun weapon.\n" << "It has 5 bullets.\n" << "Baking time 53 seconds.\n" << "The price of this weapon is 15$\n" << "0.Close\n" << "1.Buy this weapon\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G1 == 0)
				{
					decrease_m(15,E,D);

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
				cout << "It is a German semi-automatic weapon.\n" << "It has 10 bullets.\n" << "Baking time 79 seconds.\n" << "The price of this weapon is 18.5$\n" << "0.Close\n" << "1.Buy this weapon\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G2 == 0)
				{
					decrease_m(18.5,E,D);

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
				cout << "It is a German semi-automatic weapon.\n" << "It has 10 bullets.\n" << "Baking time 55 seconds.\n" << "The price of this weapon is 20.5$\n" << "0.Close\n" << "1.Buy this weapon\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G3 == 0)
				{
					decrease_m(20.5,E,D);

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
				cout << "It is a German semi-automatic weapon.\n" << "It has 13 bullets.\n" << "Baking time 50 seconds.\n" << "The price of this weapon is 25$\n" << "0.Close\n" << "1.Buy this weapon\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G4 == 0)
				{
					decrease_m(25,E,D);

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
			system("cls");

			if (choise == 1)
			{
				cout << "A pack of 10 bullets of this weapon\n" << "The price of these bullets is 5$\n" << "0.Close\n" << "1.Buy this pack\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G1 == 1)
				{
					decrease_m(5,E,D);
					

					Gun[0].All_bullets(10);
					break;
				}
			}
			else if (choise == 2)
			{
				cout << "A pack of 15 bullets of this weapon\n" << "The price of these bullets is 9.5$\n" << "0.Close\n" << "1.Buy this pack\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G2 == 1)
				{
					decrease_m(9.5,E,D);

					Gun[1].All_bullets(15);

					break;
				}
			}
			else if (choise == 3)
			{
				cout << "A pack of 15 bullets of this weapon\n" << "The price of these bullets is 9.5$\n" << "0.Close\n" << "1.Buy this pack\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G3 == 1)
				{
					decrease_m(9.5,E,D);

					Gun[2].All_bullets(15);

					break;
				}
			}
			else if (choise == 4)
			{
				cout << "A pack of 20 bullets of this weapon\n" << "The price of these bullets is 15$\n" << "0.Close\n" << "1.Buy this pack\n";
				cin >> choise;
				if (choise == 0)
				{
					break;
				}
				else if (choise == 1 && G4 == 1)
				{
					decrease_m(15,E,D);

					Gun[3].All_bullets(20);

					break;
				}
			}
		}
		while (choise == 3)
		{
			cout << "0.Close\n" << "1.Bandage 10$ (Adds 1 unit to health)\n" << "2.Patch 5$ (Adds 0.5 unit to health)\n" << "3.Vitamin 15$ (Adds 1.5 unit to health)\n";
			cin >> choise;
			system("cls");

			if (choise == 0)
			{
				break;
			}
			else if (choise == 1)
			{
				decrease_m(10,E,D);
				E += 1;
				D += 1;
			}
			else if (choise == 2)
			{
				decrease_m(5,E,D);
				E += 0.5;
				D += 0.5;
			}
			else if (choise == 3)
			{
				decrease_m(15,E,D);
				E += 1.5;
				D += 1.5;
			}
		}
		system("cls");
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


//void status()// tedad kole tir/tedad tir baghi monde , mizan salamati , meghdar pool
void save_replace(person&,person&);//header file ke nashenakhte nabashe mrs:)
void calm_situation(person& E, person& D)// to mogheiat hahe arom continue,status,shop,Auto save
{	
	while(true)
	{
		int choise;
		cout << "Which one do you have in mind?" << endl << "1.continue" << endl << "2.shop" << endl << "3.status" << endl;
		cin >> choise;
		system("cls");
		if(choise == 1)
		{
			save_replace(E,D);
			return ;
		}
		else if(choise == 2)
		{
			shop(E, D);
			system("cls");
			
		}
		else if(choise == 3)
		{
			E.print_information();
			this_thread::sleep_for(chrono::seconds(5));
			D.print_information();
			this_thread::sleep_for(chrono::seconds(5));
			system("cls");
			
		}
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




//in tabe baraye save kardan mavaghei hast ke mikhaim ezafe beshe be filemon mrs:)
void save_append(person &E,person &D){
	ofstream saver("save_E.txt", ios::app);
	if (!saver) {
		cerr << "can not open\n";
		exit(0);
	}	
	saver.write(reinterpret_cast<const char*>(&E), (sizeof(person)));
	saver.close();

	ofstream saverr("save_D.txt", ios::app);
	if (!saverr) {
		cerr << "can not open\n";
		exit(0);
	}
	saverr.write(reinterpret_cast<const char*>(&D), (sizeof(person)));
	saverr.close();
}

//in tabe baraye mavaghei hast ke mikhaim etelaat ro be roz  konim  mrs:)
void save_replace(person &E,person &D) {
	ofstream  osave("save_E.txt", ios::binary|ios::in|ios::out);//taghir mohem baraye inke beshe az halat update estefade kard mrs:)
	if (!osave) {
		cerr << "cant2";
		exit(0);
	}			
		osave.seekp((E.id)*sizeof(person));//mrs:)
		osave.write(reinterpret_cast<const char*>(&E), sizeof(person));
		osave.close();


	ofstream  osavee("save_D.txt", ios::binary|ios::in|ios::out);//taghir mohem baraye inke beshe az halat update estefade kard mrs:)
	if (!osavee) {
		cerr << "cant2";
		exit(0);
	}			
		osavee.seekp((D.id)*sizeof(person));//mrs:)
		osavee.write(reinterpret_cast<const char*>(&D), sizeof(person));
		osavee.close();
}

//baraye check kardan ke id vared shode vojod dare ya na mrs:)
bool check_id(person &E,person &D,int id){
	for(int i=0;;i++){

		ifstream rsave("save_E.txt", ios::in);
		if (!rsave) {
			cerr << "nabod ";

		}
		rsave.seekg(i* (sizeof(person)));	

		rsave.read(reinterpret_cast<char*>(&E),
			sizeof(person));
			if(E.get_id()==id){
				rsave.close();				
				ifstream Rsavee("save_D.txt", ios::in);
				if (!Rsavee) {
					cerr << "cant2";
					exit(0);
				}		
				Rsavee.seekg(i* (sizeof(person)));
				Rsavee.read(reinterpret_cast<char*>(&D),
					sizeof(person));
				Rsavee.close();

				return true;
			}
			if(rsave.eof()){

				rsave.clear();//fek konam bodan in khat va badish lazem nabashe mrs:)
				rsave.seekg(0);
				rsave.close();

				return 0;
			}			

	}
}

bool set_id(person &copy){//baraye ok kardan ghesmat new game  mrs:)
	ifstream check("save_E.txt", ios::in);
	if (!check) {
		//cerr << "file save peyda nashod \n "; hazf shod bedard nemikhord mrs:)
		return false;//baraye inke be id 1 ro ezafe nakone mrs:)
	}	
	else{
		check.seekg(-1*sizeof(person),ios::end);		

	check.read(reinterpret_cast<char*>(&copy),
		sizeof(person));		
	check.close();
	}
	return true;//baraye inke yek ro ezafe kone mrs:)
}

template <typename T>
void SubLevel(T cash,T h,person& E,person& D)//start sublevel 
{

	cout << "They follow in the footsteps of the bear to reach a plain." << endl;
	this_thread::sleep_for(chrono::seconds(6));
	cout << "They see a black bear sitting on the ground." << endl;
	this_thread::sleep_for(chrono::seconds(5));
	cout << "Emma draws her gun and points it at the bear." << endl;
	this_thread::sleep_for(chrono::seconds(5));
	cout << "He kills the bear with just one bullet." << endl;
	decreas_bullet(1);
	this_thread::sleep_for(chrono::seconds(4));
	
	cout << "They go to the city and sell the bear." << endl;
	this_thread::sleep_for(chrono::seconds(4));
	cout << "They eat with some of that money." << endl;
	this_thread::sleep_for(chrono::seconds(4));
	cout << "They return to the forest and continue on their way." << endl;
	this_thread::sleep_for(chrono::seconds(8));


	E += h;
	D += h;//miad be jon ezafe mekone 
	Add_m(cash,E,D);//miad be pol ezafe mikone 
}

int main()
{
	int menu, which, marhale, money, health, id;
	
	//fstream saver("save.txt", ios::in | ios::out);  hazf
	person test(0);
	person D(0);
	person E(1);
	while(true)
	{
		
		system("cls");
		cout << "1.Play" << endl << "2.Setting" << endl << "3.Shop" << endl;
		cin >> menu;
		system("cls");
		switch (menu)
		{
			case 1:
			{

				while(true)
				{
					cout << "what mode you want?!\n" << "2.Easy\n" << "1.Hard\n" ;
					cin >> mode;
					system("cls");
					if (!check(mode)) {
						continue;
					}
					system("cls");
					cout << "1.new game\n" << "2.continue\n";

					cin >> marhale;
					E.set_mode(mode);//baraye ok kardan sakhti bazi mrs:)*****taghir dadam mrs:)
					D.set_mode(mode);//baraye ok kardan sakhti bazi mrs:)*****taghir dadam mrs:)
					system("cls");
					if (marhale == 2)
					{
						//saver >> marhale>>money>>health;		hazf				
						cout<<"please input your id \n";//ezafe kardan ghesmat continue mrs:)
						while(true){
							cin>>id;
							if(check_id(E,D,id)){

								cout<<"loading succesful:)\n ";
								E.print_information();
								this_thread::sleep_for(chrono::seconds(4));
								D.print_information();
								this_thread::sleep_for(chrono::seconds(4));
								E.set_mode(mode);//ezafe shod baraye taghir sakhti bazi mrs:)
								D.set_mode(mode);//ezafe shod baraye taghir sakhti bazi mrs:)
								break;
							}
							else{
								cout<<"try again :( \n";
							}
						}
						marhale=E.get_marhale();//befahme az kodom marhale shoro kone mrs:)
						//saver >> marhale >> money >> health;
						//pl.set();
						//saver.close();  hazf
					}
					else if(marhale == 1)
					{
						if(set_id(test)){//taghiresh dadam mrs:)
						E.set_id(test.get_id()+1);
						
						D.set_id(test.get_id()+1);
						}
						else{//mrs:)
							E.set_id(test.get_id());//mrs:)
							D.set_id(test.get_id());//mrs:)
						}
						save_append(E,D);

						E.print_information();
						this_thread::sleep_for(chrono::seconds(4));
						system("cls");
						D.print_information();
						this_thread::sleep_for(chrono::seconds(4));
						system("cls");
					}
					break;
				}
				switch (marhale)
				{
					case 1:
					{
						int choise;
						cout << "1: two-way belief" << endl;
						this_thread::sleep_for(chrono::seconds(4));
						system("cls");
								
						cout << "Due to the suspicious activities of the Nazis in Myanmar, the Soviet Army needed to send an agent to Myanmar to infiltrate the Nazis." << endl;
						this_thread::sleep_for(chrono::seconds(8));
			
						cout << "This mission is offered to Emma..." << endl;
						this_thread::sleep_for(chrono::seconds(2));
						while (true)
						{
							cout << "Commander: Do you want to do this mission in Myanmar?" << endl << "1.yes" /*start mission*/ << endl << "2.I want 3 days to respond" << endl;
							cin >> choise;	
							system("cls");
							if (choise == 1)
							{
								break;
							}
							else if (choise == 2)
							{
							
								cout << "The next day and after thinking about the mission ..." << endl;
								this_thread::sleep_for(chrono::seconds(4));	
	
								system("Color 79");
								cout << "Emma remembers how her father was killed by the Nazis." << endl;
								this_thread::sleep_for(chrono::seconds(5));
								cout << "That is why she decides to accept this mission." << endl;
								this_thread::sleep_for(chrono::seconds(6));
								system("cls");
								break;
							}
						}	
						system("color 0f");
						cout << "Emma travels to Myanmar alone and first enters a secret shop to buy weapons." << endl;
						this_thread::sleep_for(chrono::seconds(6));
						system("cls");
						while (true)
						{
							shop(E,D);
							system("cls");
							if (G1 > 0 || G2 > 0 || G3 > 0 || G4 > 0)
							{
								cout << "It was a good choice." << endl;
								break;
							}
						}
						this_thread::sleep_for(chrono::seconds(3));
						system("cls");
		
						this_thread::sleep_for(chrono::seconds(1));
						cout << "After touring Myanmar and gathering information, Emma discovers Nazi activity in the forests of Bagan.\n" << " He goes there to do his mission." << endl;
						this_thread::sleep_for(chrono::seconds(11));
						cout << "In the middle of the night, while wandering in the woods,\n" << "She met Daniel and at first thought he was a Nazi because of the equipment Daniel had with him (which Daniel had bought from the natives and had a Nazi symbol)." << endl;
						this_thread::sleep_for(chrono::seconds(20));	
	
						cout << "So Emma went to her so that she could approach him and penetrate their position." << endl;
						this_thread::sleep_for(chrono::seconds(8));
						system("cls");	
	
	
						cout << "Daniel told his own story and why he came here." << endl;
						this_thread::sleep_for(chrono::seconds(5));
						cout << "Emma, who thought Daniel was a Nazi, thought the story Daniel had told her was a lie." << endl; 
						this_thread::sleep_for(chrono::seconds(7));
						system("cls");
						calm_situation(E,D);
						system("cls");
						
						
						
						while (true)
						{
							cout << "After spending the night in the wood near dawn, they suddenly stumble upon a Nazi camp.\n" << " At that moment, 4 Nazi soldiers see them. Daniel quickly flees in fear." << endl;
							this_thread::sleep_for(chrono::seconds(10));
							cout << "Emma:" << endl << "1.I shoot at the Nazis and then run away" << endl << "2.I escape" << endl;
							cin >> choise;
							system("cls");
							if (choise == 1)
							{
								cout << "Emma fires three bullets at the Nazis and kills two of them" << endl;
								this_thread::sleep_for(chrono::seconds(5));
								decreas_bullet(3);
								
								cout << "Then Emma runs away" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "The Nazis chase after them and shoot at them.\n";
								this_thread::sleep_for(chrono::seconds(4));
								cout << "Daniel's hand shoots." << endl;
								D -= 2;
								this_thread::sleep_for(chrono::seconds(3));
								
								cout << "Meanwhile, three wolves that smelled Daniel's blood attacked them." << endl;
								this_thread::sleep_for(chrono::seconds(5));
								cout << "Daniel and Emma escaped from the wolves and the wolves went to the Nazis and clashed with them and finally killed them." << endl;
								this_thread::sleep_for(chrono::seconds(10));
								system("cls");
								cout << "Emma and Daniel continue to reach a river that is crossed by a bridge." << endl;
								this_thread::sleep_for(chrono::seconds(4));
	
								while (true)
								{
									cout << "1.Let's cross the bridge" << endl << "2.Let's go under the bridge" << endl;
									cin >> choise;
									system("cls");
									if (choise == 1)
									{
										cout << "They cross the bridge and reach the abandoned huts." << endl;
										this_thread::sleep_for(chrono::seconds(4));
										//sublevel
										
										break;
									}
									else if (choise == 2)
									{
										cout << "They swim in the river and the Nazis lose them." << endl;
										this_thread::sleep_for(chrono::seconds(4));
										break;
									}
								}
								break;
							}
							else if (choise == 2)
							{
								cout << "Emma also runs away." << endl;
								this_thread::sleep_for(chrono::seconds(2));
		
								cout << "The Nazis chase after them and shoot at them.\n";
								this_thread::sleep_for(chrono::seconds(3));
								cout << "Daniel's hand shoots." << endl;
								D -= 2;
								this_thread::sleep_for(chrono::seconds(2));
								
								cout << "Meanwhile, three wolves that smelled Daniel's blood attacked them." << endl;
								this_thread::sleep_for(chrono::seconds(4));
								cout << "Daniel and Emma escaped from the wolves and the wolves went to the Nazis and clashed with them and finally kill the tow of them." << endl;
								this_thread::sleep_for(chrono::seconds(15));
								system("cls");
								
	
								while (true)
								{
									cout << "Emma and Daniel continue to reach a river that is crossed by a bridge." << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "1.Let's cross the bridge" << endl << "2.Let's go under the bridge" << endl;
									cin >> choise;
									system("cls");
									if (choise == 1)
									{
										cout << "They cross the bridge." << endl;
										this_thread::sleep_for(chrono::seconds(2));
										cout << "They go to abandoned huts and stand there." << endl;
										this_thread::sleep_for(chrono::seconds(3));
										cout << "The two Nazis who were following him also go there to find them." << endl;
										this_thread::sleep_for(chrono::seconds(5));
										cout << "Emma, who was standing up, stabbed one of them in the back with a knife." << endl;
										this_thread::sleep_for(chrono::seconds(5));
										cout << "The other Nazi heard Daniel panting and went to kill Daniel." << endl;
										this_thread::sleep_for(chrono::seconds(8));
										system("cls");
										while (true)
										{
											cout << "Daniel also notices him and looks for a means of self-defense that catches his eye on a rock." << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "Daniel:" << endl << "1.Take the stone and defend myself" << endl << "2.Do not take the stone" << endl;
											cin >> choise;
											system("cls");
											if (choise == 1)
											{
												cout << "Daniel throws a stone at the Nazi soldier." << endl;
												this_thread::sleep_for(chrono::seconds(3));
												cout << "Nazia gets angry and points her gun at Daniel, who is suddenly shot by Emma from a distance." << endl;
												decreas_bullet(2);
												
												this_thread::sleep_for(chrono::seconds(7));
												break;
											}
											else if (choise == 2)
											{
												cout << "The Nazi slowly approaches Daniel to kill him." << endl;
												this_thread::sleep_for(chrono::seconds(3));
												cout << "Emma slowly approaches the Nazi soldier from behind and kills him with a knife." << endl;
												this_thread::sleep_for(chrono::seconds(6));
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
								system("cls");
								break;
							}
						}
						system("cls");
						cout << "When the situation calms down, they take refuge in the abandoned temples to rest and get Daniel's dressing.\n";
						this_thread::sleep_for(chrono::seconds(12));
						system("cls");
						calm_situation(E,D);
						system("cls");
						
						cout << "Emma trusts Daniel and realizes that Daniel is not a Nazi.\n";
						this_thread::sleep_for(chrono::seconds(6));
						cout << "He tells his true story to Daniel.\n";
						this_thread::sleep_for(chrono::seconds(4));
						cout << "Daniel shows the book to Emma and says that I am looking for the entrance to the gate here.\n";
						this_thread::sleep_for(chrono::seconds(10));
						cout << "Emma, who does not believe in such things, thinks that Daniel is crazy and is snoozing.";
						this_thread::sleep_for(chrono::seconds(12));
						system("cls");
		
						cout << "They rest for a few hours, and around noon Emma leaves for town to get medicine for Daniel and food." << endl;
						this_thread::sleep_for(chrono::seconds(11));
						cout << "On the way through the forest, she sees a group of Nazis imprisoning the natives of the area and taking them to one side." << endl;
						this_thread::sleep_for(chrono::seconds(11));
						cout << "She follows them and reaches a pit and the Nazis enter it. Facing the pit is a thick red tree with blue flowers on it." << endl;
						this_thread::sleep_for(chrono::seconds(13));
						cout << "She suddenly realizes that it is too late and Daniel is waiting." << endl;
						this_thread::sleep_for(chrono::seconds(7));
						cout << "She goes to the city and prepares the necessary items and returns to the temple." << endl;
						this_thread::sleep_for(chrono::seconds(14));
						system("cls");
		
						cout << "Emma tells the story of the Nazis and that pit and tree to Daniel." << endl;
						this_thread::sleep_for(chrono::seconds(7));
						cout << "And Daniel shows her a part of the book that gives exactly the characteristics of this tree and says that there is a pit near it." << endl;
						this_thread::sleep_for(chrono::seconds(14));
						cout << "Emma believes Daniel." << endl;
						this_thread::sleep_for(chrono::seconds(3));
						cout << "Emma helps Daniel find the pit, both because the Nazis enter the pit and because of her curiosity about the book's story." << endl;
						this_thread::sleep_for(chrono::seconds(15));
						system("cls");
						calm_situation(E,D);
						system("cls");
						break;
					}
					case 2:
					{
						int choise;
						cout << "2: In search of the pit" << endl;
						this_thread::sleep_for(chrono::seconds(4));
						system("cls");
						
						cout << "Daniel and Emma stayed overnight in the temple and headed out into the woods in the morning." << endl;
						this_thread::sleep_for(chrono::seconds(10));
									
						cout << "Emma could not remember the way to the pit." << endl;
						this_thread::sleep_for(chrono::seconds(6));
						system("cls");
						
						while(true)
						{
							cout << "In the forest, they find a sign of the Nazis path and follow it to a crossroads." << endl;
							this_thread::sleep_for(chrono::seconds(6));
							cout << "1.River path" << endl << "2.Forest path" << endl;
							cin >> choise ;
							system("cls");
							if(choise == 1)
							{
								cout << "They cross the river and see a boat there." << endl;
								this_thread::sleep_for(chrono::seconds(5));
								cout << "They use it to cross the river." << endl;
								this_thread::sleep_for(chrono::seconds(4));
								cout << "They board a boat and move across the river." << endl;
								this_thread::sleep_for(chrono::seconds(5));
										
								
										
								cout << "They reach the forest and continue on their way." << endl;
								this_thread::sleep_for(chrono::seconds(5));
								
								system("cls");
								while(true)
								{
									cout << "On the way, they see a sign of a bear claw on a tree." << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "Emma:" << endl << "1.Go check" << endl << "2.Do not check" << endl;
									cin >> choise ;
									system("cls");
									if(choise == 1)
									{
										//start SubLevel
										SubLevel(15, 2, E, D);
										break;
									}
									else if(choise == 2)
									{
										break;
									}
											
								}
										
								break;
							}
							else if(choise == 2)
							{			
								while(true)
								{
									cout << "They continue their way in the forest and encounter some unknown characters who attack them." << endl;
									this_thread::sleep_for(chrono::seconds(5));
									cout << "1.Shoot them" << endl << "2.Do not shoot" << endl;
									cin >> choise ;
									system("cls");
									if(choise == 1)
									{	
										cout << "Emma shoots at them to kill them, but realizes that the bullets have no effect." << endl;
										decreas_bullet(5);
										this_thread::sleep_for(chrono::seconds(8));
										break;
									}
									else if(choise == 2)
									{
										break;
									}
								}
								cout << "They hurt Emma and Daniel and then let them go." << endl;
								this_thread::sleep_for(chrono::seconds(5));
								E -= 2;
								D -= 2;
								
								cout << "Emma and Daniel conclude that they were elves." << endl;
								this_thread::sleep_for(chrono::seconds(5));
								cout << "That is why they had an unknown face and the bullets did not affect them." << endl;
								this_thread::sleep_for(chrono::seconds(10));
										
								break;
							}
								
						}
						system("cls");
						cout << "They come to an inscription." << endl;
						this_thread::sleep_for(chrono::seconds(3));
						cout << "Daniel realizes that the sign on the inscription is the same as the book sign, so they conclude that they have chosen the right path." << endl;
						this_thread::sleep_for(chrono::seconds(14));
						system("cls");
						calm_situation(E,D);
						system("cls");
								
						cout << "They continue on their way to reach a strange village." << endl;
						this_thread::sleep_for(chrono::seconds(5));
						cout << "They go to the village to get information to talk to the locals." << endl;
						this_thread::sleep_for(chrono::seconds(7));
						cout << "When they enter, they see that everyone there has unknown faces and realize that they are goblins." << endl;
						this_thread::sleep_for(chrono::seconds(9));
						cout << "They were very scared, kept their composure and went to the people." << endl;
						this_thread::sleep_for(chrono::seconds(7));
						cout << "They talked to them about the Nazi movements and figured out which way to go." << endl;
						this_thread::sleep_for(chrono::seconds(13));
						system("cls");
						cout << "Suddenly their eyes hit a rocket and went towards it." << endl;
						this_thread::sleep_for(chrono::seconds(3));
								
						while(true)
						{
							cout << "Emma:" << endl << "1.Let's steal it" << endl << "2.Let's buy it" << endl;
							cin >> choise ;
							system("cls");
							if(choise == 1)
							{
								cout << "The elves notice and follow them." << endl;
								this_thread::sleep_for(chrono::seconds(3));
								cout << "They hurt Emma and Daniel while chasing them." << endl;
								E -= 2;
								D -= 2;
								this_thread::sleep_for(chrono::seconds(5));
								cout << "Emma and Daniel escape and go in the direction the elves have told them.";
								this_thread::sleep_for(chrono::seconds(7));
										
								break;
								}
							else if(choise == 2)
							{
								int baghi_mande;
								cout << "The price of a rocket launcher is 40$ for you" << endl;
								baghi_mande = E.baghi_poool(40);
								
								this_thread::sleep_for(chrono::seconds(7));
								
								if(baghi_mande >= 0)
								{
									decrease_m(40,E,D);
									cout << "We have enough money to buy it." << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "They buy the rocket launcher and go in the direction the elves told them." << endl;
									this_thread::sleep_for(chrono::seconds(10));
									
									break;
								}
								else if(baghi_mande < 0)
								{
									cout << "Emma: Oops, we dont have much money to pay." << endl;
									this_thread::sleep_for(chrono::seconds(5));
									cout << "Let's pick up the rocket launcher and escape" << endl;
									this_thread::sleep_for(chrono::seconds(5));
									
											
									cout << "The elves follow them to stop them" << endl;
									this_thread::sleep_for(chrono::seconds(4));
									cout << "They hurt Emma and Daniel while chasing them." << endl;
									E -= 2;
									D -= 2;
									
									this_thread::sleep_for(chrono::seconds(5));
									cout << "Emma and Daniel escape and go in the direction the elves have told them.";
									this_thread::sleep_for(chrono::seconds(10));
											
									break;
								}
										
								break;
							}	
						}
						system("cls");
						calm_situation(E,D);
						system("cls");
						cout << "Now they go to the thick tree whose details were in the book." << endl;
						this_thread::sleep_for(chrono::seconds(6));
						cout << "look around to find the pit." << endl;
						this_thread::sleep_for(chrono::seconds(4));
						cout << "Two Nazis see them and secretly arrest them and take them to the pit unconscious and imprison them." << endl;
						this_thread::sleep_for(chrono::seconds(9));
						system("CLS");
						break;
					}
					case 3://start level3
					{
						cout << "2: The magic of power" << endl;
						this_thread::sleep_for(chrono::seconds(4));
						system("cls");
						cout << "Emma and Daniel find themselves in prison...." << endl;
						this_thread::sleep_for(chrono::seconds(5));	
	
						cout << "According to the contents of the book, Daniel sees signs in that place and realizes that this is the place and now they are in the pit." << endl;
						this_thread::sleep_for(chrono::seconds(11));
	
						cout << "A suspect approaches them and start talking to them:" << endl;
						this_thread::sleep_for(chrono::seconds(6));
						system("Color 0A");
						this_thread::sleep_for(chrono::seconds(2));
						cout << "suspect:hey guys !" << endl;
						this_thread::sleep_for(chrono::seconds(3));
						system("CLS");
		
						system("Color 04");
						
						cout << "Emma: hi ...." << endl;
						this_thread::sleep_for(chrono::seconds(2));			
	
						system("Color 0A");
						cout << "suspect:what brings you here ? " << endl;
						this_thread::sleep_for(chrono::seconds(3));
		
						system("Color 04");
						
						cout << "Emma:Do we know you?" << endl;
						this_thread::sleep_for(chrono::seconds(2));
	
						system("Color 0A");
						this_thread::sleep_for(chrono::seconds(2));
						cout << "suspect: i dont think that's a good question . you can trust ,i realy mean it !!" << endl << "so go ahead. tell me your story ";
						this_thread::sleep_for(chrono::seconds(11));
						system("CLS");
	
						cout << "Daniel and Emma told him their stories" << endl;
						this_thread::sleep_for(chrono::seconds(4));
				
	
						cout << "Emma:" << "1.telling the truth that she is a spy and she is in the mession" << endl;

						cout << "2.lying and tell that she is just a nomal tourist" << endl;


		
						int choice;
						
						while (true)
						{
							cin >> choice;
							system("cls");
							if (choice == 1)//Admit that she is a spy
							{
								cout << "She confess that she is russian spy !" << endl;
								this_thread::sleep_for(chrono::seconds(4));
								
								cout << "Suspect guy tell to the Nazis that they are russian spies who they were looking for them " << endl;
								this_thread::sleep_for(chrono::seconds(8));
							
								//Go to the torture room		
		
								cout << "The Nazis take them to a torture chamber for collecting information about thier information " << endl;
								this_thread::sleep_for(chrono::seconds(8));
							
								cout << "Right Before interrogators arrive,A tray full of winning tools catches Emma's eye! " << endl;
								this_thread::sleep_for(chrono::seconds(7));
							
								cout << "Emma picked up a sharp tool with all her might and freed herself and Daniel from the ropes " << endl;
								this_thread::sleep_for(chrono::seconds(9));
								
	
								break;
		
							}
							else if (choice == 2)//She is a tourist and has come to this city for fun
							{
							
								cout << "The Nazis cut them to test on them" << endl;
								this_thread::sleep_for(chrono::seconds(4));
							
								//Go to the test room
								cout << "Before the scientists arrived, a tray full of winning tools caught Emma's eye" << endl;
								this_thread::sleep_for(chrono::seconds(7));
								
								cout << "And Emma took a sharp tool with all her might and freed herself and Daniel from the ropes" << endl;
								this_thread::sleep_for(chrono::seconds(9));
							
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
					
						cout << "Daniel realizes that this is where the book says and the gate opens" << endl;
						this_thread::sleep_for(chrono::seconds(2));
					
						cout << "Suddenly his eye falls on a flat and strange part of the wall and goes towards him" << endl;
						this_thread::sleep_for(chrono::seconds(2));
						system("CLS");
						cout << "When he touches it, a series of sentences appear in a foreign language and Daniel has to decipher it" << endl;
						this_thread::sleep_for(chrono::seconds(2));
		
						
				
	
						//enter token to open the alala's gate
						for(int w=0;w<3;w++)
						{
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
								cout << "1.Go to Daniel to save him" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								system("CLS");
								cout << "2.Move further away from the gate to be safe" << endl;
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
										this_thread::sleep_for(chrono::seconds(6));
										
										cout << "Suddenly, Emma takes offense for fear and fires a rocket at Alala, causing Alala to kill her..." << endl;
										this_thread::sleep_for(chrono::seconds(8));
										
										cout << "Now Daniel is very sad about Emma's death" << endl;
										this_thread::sleep_for(chrono::seconds(4));
										system("cls");
										cout << " Alala tells him the story of the Nazisand tells them that you must get them out so that they do not harm the world any more" << endl;
										this_thread::sleep_for(chrono::seconds(10));
										system("CLS");
										cout << "It gives Daniel the right to choose between two things" << endl;
										this_thread::sleep_for(chrono::seconds(2));
									
										cout << "1.Reach the supernatural power" << endl;
	
		
										cout << "2.Let her live" << endl;
									
										while (true)
										{
											int choiceD;
											cin >> choiceD; //daneil choise
											system("cls");
											if (choiceD == 1)
											{
												//Reach supernatural power
											
												cout << "Then he comes out of the gate and destroys the Nazis in that area with the power he has" << endl;
												this_thread::sleep_for(chrono::seconds(8));
										
		
												
												break;
											}
											else if (choiceD == 2)
											{
												//bring emma to life
											
												cout << "emma comes alive and together they destroy the trachea of ​​that area" << endl;
												this_thread::sleep_for(chrono::seconds(7));
												
												break;
											}
											else
											{
												cout << "An error has occurred!";
											}
			
										}
										break;
									}
									else if (choice2 == 2)//Do not save Daniel
									{
										//start the war with Nazis
									
										cout << "Daniel goes to the gate and seizes power and tells Emma what the story of the Nazis is. Together they destroy the Nazis" << endl;
										this_thread::sleep_for(chrono::seconds(11));
									
										cout << "After the destruction of the Nazis, they take people out of prison and save them, and they destroy that pit forever" << endl;
										this_thread::sleep_for(chrono::seconds(10));
										
										cout << "The END ..." << endl;
										this_thread::sleep_for(chrono::seconds(4));
									
										break;
									}
									else
									{
										cout << "An error has occurred!";
									}
								}
								system("cls");
								break;
							}
							else
							{
								cout << "Can't enter gate:(";
							}
						}
						system("cls");
						break;
					}//end case 3
				}//end swich
				break;
			}

			case 2:
			{
				cout << "1.mode" << endl << "2.audio" << endl;				
				cin >> which;
				if(which==1){//ezafe shod mrs:)
					cout << "1.easy" << endl << "2.hard" << endl;	//ezafe shod mrs:)
					cin>>mode;	//ezafe shod mrs:)
					cout<<"please input your id \n";//ezafe kardan ghesmat continue mrs:)
						while(true){//ezafe shod mrs:)
							cin>>id;//ezafe shod mrs:)
							if(check_id(E,D,id)){//ezafe shod mrs:)
							
								cout<<"loading succesful:)\n ";//ezafe shod mrs:)								
								E.set_mode(mode);//ezafe shod baraye taghir sakhti bazi mrs:)
								D.set_mode(mode);//ezafe shod baraye taghir sakhti bazi mrs:)
								break;//ezafe shod mrs:)
							}
							else{//ezafe shod mrs:)
								cout<<"try again :( \n";//ezafe shod mrs:)
							}//ezafe shod mrs:)
							
						}//ezafe shod mrs:)
				}
				break;
			}
			case 3:
			{
				shop(E,D);
				break;
			}
		}
	}
	return 1;
}
