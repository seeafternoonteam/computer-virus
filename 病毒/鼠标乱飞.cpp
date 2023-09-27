#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <unistd.h>
using namespace std;
int x,y;
long long cnt=1;
int main(){
	while(cnt<=100000000){
		x=rand()%600+100;
		y=rand()%200+100;
		SetCursorPos(x,y);
		cnt++;
		sleep(0.1);
	}
} 
