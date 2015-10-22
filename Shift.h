#include <string>
#include <cstring>

#ifndef SHIFT_H
#define SHIFT_H

using namespace std;
class Shift
{
public:
	int feed_key(int key){return key;}
	int gen_key(int range);
	string enc(string str,int key);
	string dec(string str,int key);
};


#endif // SHIFT_H
