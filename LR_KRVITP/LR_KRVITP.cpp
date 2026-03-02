#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Привет, ЛР1!\n";
	time_t now = time(0);
	tm ltm;
	localtime_s(&ltm, &now);
	cout << "Сегодняшняя дата: "
	<< put_time(&ltm, "%Y-%m-%d") << endl;
}
