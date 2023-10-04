#include <iostream>
using namespace std;
int main() 
{
    int years[] = {4200, 8500, 1000, 1300};
    int oldestYear = years[0];
	for (int i = 1; i < 4; i++) 
	{
        if (years[i] > oldestYear) 
		{
            oldestYear = years[i];
        }
    }
	cout << "The oldest painting is " << oldestYear << " years old." << std::endl;
	return 0;
}