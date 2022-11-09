using namespace std;
#include <iostream>;


double bankroll;
double bOdds;
double eOdds;
double ev;
double percent;
double risk;
double bet;
double ror;
double trueEV;
bool running = true;




int main() {
	cout << "Please input bankroll: " << "\n";
	cin >> bankroll;
	while (running) {
		cout << "Input bookie odds" << "\n";
		cin >> bOdds;
		cout << "Input exchange odds" << "\n";
		cin >> eOdds;
		ev = ((bOdds / eOdds) * (100)) - 100;
		cout << ev << "%" << "\n";
		trueEV = ev / 100;
		//cout << trueEV;
		risk = (100 / eOdds);
		bet = (bankroll * trueEV) / 6;
		cout << "Suggested bet: GBP" << bet << "\n";
		

	}
}
