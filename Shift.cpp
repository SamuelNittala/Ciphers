//BASICS
#include "Shift.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <time.h>

using namespace std;

int Shift::gen_key(int range){
	//RANDOM KEY GENERATION
	srand(time(NULL));
	int key = rand()%range + 1;
	return key;
};
string Shift::enc(string str,int key){
	int len = strlen(str.c_str());
	for(int i=0 ; i<len ; i++){
		//'a' in ASCII = 97..so base = 96.
		int base_char = 96;
		//Converting char -> int
		int k = (int)str[i];
		// Changing ASCII to ALPHA
		k -= base_char;
		//we dont want k to be 26(since 26%26 == 0 & it prints " ' " character for 0.)
		if(k == 26) k = 26;
		else k = k%26;
		//Changing ALPHA to ASCII.
		k += base_char;
		//int -> char.
		char c = (char)k
		str[i] = c;
	}
	return str;
};
string Shift::dec(string str,int key){
	int len = strlen(str.c_str());
	for(int i=0 ; i<len ; i++){
		//SAME AS ENCRYPTING..
		int k = (int)str[i];
		k-=96;
		k -= key;
		// k cant be negative...so we add 26 to get into original position..
		if(k<0){ k += 26;}
		k = k%26;
		k += 96;
		char c = (char)k;
		str[i] = c;
	}
	return str;
};



