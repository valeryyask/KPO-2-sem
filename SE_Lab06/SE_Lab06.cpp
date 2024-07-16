#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include "D:\\d\\уник\\2 сем\\кпо\\6 лаба\\SE_Lab06\\SE_Lab06L\\Dictionary.h"
#pragma comment(lib, "D:\\d\\уник\\2 сем\\кпо\\6 лаба\\SE_Lab06\\x64\\Debug\\SE_Lab06L.lib")


using namespace std;
using namespace Dictionary;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	try {
#ifdef TEST_CREATE_01
		Instance d1 = Create("Преподаватели,но с оооочень длинным названием, которое явно больше 20", 7);
#elif defined TEST_CREATE_02
		Instance d1 = Create("Преподаватели", 101);
#elif !defined TEST_DICTIONARY
		Instance d1 = Create("Преподаватели", 6);
#elif defined TEST_DICTIONARY
		Instance d1 = Create("Преподаватели", 7);
#endif

		Entry e1 = { 1, "Барковский" }, e2 = { 2, "Белодед" }, e3 = { 3, "Наркевич" }, e4 = { 4, "Шиман" }, e5 = { 5, "Якушева" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
		AddEntry(d1, e3);
		AddEntry(d1, e4);
		AddEntry(d1, e5);
		Entry ex2 = GetEntry(d1, 4);
		DelEntry(d1, 5);
		Entry newEntry1 = { 6,"Мущук" };
		UpdEntry(d1, 1, newEntry1);
#ifdef TEST_DICTIONARY
		AddEntry(d1, e7);
#elif defined TEST_ADDENTRY_03
		Entry e9 = { 12, "Гавриленко" }, e10 = { 21, "Куйбышев" };
		AddEntry(d1, e9);
		AddEntry(d1, e10);
#elif defined TEST_ADDENTRY_04
		AddEntry(d1, e8);
#endif

#ifdef TEST_DELENTRY_06
		DelEntry(d1, 25);
#elif defined TEST_DICTIONARY
		DelEntry(d1, 2);
#endif

#ifdef TEST_GETENTRY_05
		GetEntry(d1, 22);
#elif defined TEST_DICTIONARY
		DelEntry(d1, 4);
#endif

#ifdef TEST_UPDENTRY_07
		Entry newentry = { 16, "Воронова" };
		UpdEntry(d1, 22, newentry);
#elif defined TEST_UPDENTRY_08
		Entry newentry = { 5, "Воронова" };
		Dictionary::UpdEntry(d1, 1, newentry);
#elif defined TEST_DICTIONARY
		Entry newentry = { 16, "Воронова" };
#endif	
#if defined TEST_DICTIONARY
		Dictionary::UpdEntry(d1, 3, newentry);
#endif

		Print(d1);
		Instance d2 = Create("Студенты", 5);
		Entry s1 = { 1, "Бабич" }, s2 = { 2, "Леваньков" }, s3 = { 3, "Угоренко" };
		AddEntry(d2, s1);
		AddEntry(d2, s2);
		AddEntry(d2, s3);
		Entry newentry2 = { 4, "Яскевич" };
		UpdEntry(d2, 3, newentry2);
		DelEntry(d2, 2);
		Print(d2);
		Delete(d1);
		Delete(d2);
	}
	catch (const char* e) {
		cout << e << endl;
	};
	system("pause");
	return 0;
}