#include <iostream>
#include <string>
#include <vector>

using namespace std;

//template<typename T>
//class SmartPointer
//{
//public:
//
//	SmartPointer(T *ptr) {
//		this->ptr = ptr;
//		cout << "Constructor" << endl;
//	}
//
//	~SmartPointer() {
//		delete ptr;
//		cout << "Destructor" << endl;
//	}
//
//	T& operator*() {
//		return *ptr;
//	}
//
//private:
//	T* ptr;
//};

int main()
{
	//SmartPointer<int> pointer = new int(5);

	//Show
	vector<int> myVector = {1, 9, 44};

	cout << "Show myVector:" << endl << endl;

	for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << *it << endl;
	}

	cout << "=======================" << endl;


	//Insert
	vector<int>::iterator itInsert = myVector.begin();

	advance(itInsert, 2); //Shift iterator
	
	myVector.insert(itInsert, 999);

	cout << "Insert:" << endl << endl;
	//const_iterator <-> cbegin() & cend()
	for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << *it << endl;
	}

	cout << "=======================" << endl;


	//Reverse
	cout << "Reverse_iterator:" << endl << endl;
	for (vector<int>::reverse_iterator it = myVector.rbegin(); it != myVector.rend(); it++)
	{
		cout << *it << endl;
	}

	cout << "=======================" << endl;


	//Erase
	cout << "Erase:" << endl << endl;

	vector<int>::iterator itErase = myVector.begin();

	myVector.erase(itErase);

	for (vector<int>::iterator it = myVector.begin() ; it != myVector.end(); it++)
	{
		cout << *it << endl;
	}

	return 0;
}