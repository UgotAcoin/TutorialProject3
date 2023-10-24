#include <iostream>
#include <string>

using namespace std;

class Monster {
public:
	void growl() {
		cout << "Growl!!\n";
	}

	//setter function
	void setName(string name) {
		_name = name;
	}

	string getName() {
		return _name;
	}

private:
	string _name;
};

int main()
{
	Monster monster1;
	monster1.setName("Jeff");
	monster1.growl();

	cout << monster1.getName() << endl;

	system("PAUSE");
	return 0;
}