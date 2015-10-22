#include <stdio.h>
#include <math.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Shift.h"
using namespace std;

int main(){
	Shift s;
	int key = s.feed_key(12);
	string plain_text = "willmeetatdominos";
	string cipher_text = s.enc(plain_text,key);
	cout << cipher_text << endl;
	plain_text = s.dec(cipher_text,key);
	cout << plain_text << endl;
}