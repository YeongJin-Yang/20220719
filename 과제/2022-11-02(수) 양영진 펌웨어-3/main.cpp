//#include <stdio.h>
//#include <Windows.h>
//
//int main() {
//
//	for (int i = 0; i < 100; i++) {
//		SetCursorPos(i, i);
//		Sleep(10); 
//	}
//
//	mouse_event(MOUSEEVENTF_LEFTDOWN, 10, 10, 0, 0);
//	Sleep(100);
//	mouse_event(MOUSEEVENTF_LEFTUP, 10, 10, 0, 0);
//
//
//	Sleep(500);
//	mouse_event(MOUSEEVENTF_RIGHTDOWN, 10, 10, 0, 0);
//	Sleep(100);
//	mouse_event(MOUSEEVENTF_RIGHTUP, 10, 10, 0, 0);
//
//	return 0;
//
//}

#include "serial.h"
#include <stdio.h>
int main()
{
	//serial init
	Serial* serial = new Serial("COM7", 115200);
	if (!serial->isConnected()) return 0;
	char buf[255];
	while (1) {
		serial->readLine(buf, 255);
		printf("%s", buf);
	}
	return 0;
}