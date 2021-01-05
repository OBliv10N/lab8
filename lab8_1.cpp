#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	
	int loan , rate , x;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> x;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int year;
	int inter;
	for(year = 1,year <20 ,year++){
		cout << fixed << setprecision(2);
		} 
		cout << setw(13) << left << 1; 
		cout << setw(13) << left << 1000.0;
		cout << setw(13) << left << 50.0;
		cout << setw(13) << left << 1050.0;
		cout << setw(13) << left << 100.0;
		cout << setw(13) << left << 950.0;
		cout << "\n";
		
	
	return 0;
}
