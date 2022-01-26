#include <iostream>
#include <string>
using namespace std;

int main() {

	string text = "Mount Everest";
	string samohlasky = "aeiouyAEIOUY";
	string spoluhlasky = "bcdfghjklmnpqrstvwxzBCDFGHJKLMOPRSTVWXZ";
	string cisla = "0123456789";
	string znaky = " ";
	int samohlaska = 0;
	int spoluhlaska = 0;
	int cislo = 0;
	int znak = 0;


	for (int i = 0; i < text.length(); i++) {
		if (samohlasky.find(text[i]) < samohlasky.length())
			samohlaska++;
		

		if (spoluhlasky.find(text[i]) < spoluhlasky.length())
			spoluhlaska++;
		

		if (cisla.find(text[i]) < cisla.length())
			cislo++;
		
		if (znaky.find(text[i]) < znaky.length())
			znak++;
		

	}
	cout <<"povodna sprava: " << text << endl;
	cout <<"Pocet samohlasok: "<< samohlaska << endl;
	cout << "Pocet spoluhlasok: " << spoluhlaska << endl;
	cout << "Pocet cisiel: " << cislo << endl;
	cout << "Pocet znakou: " << znak << endl;


		return 0;
}
