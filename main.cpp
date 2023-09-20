#include <iostream>
using namespace std;

const int RGB_HEX_LENGTH = 7;
int i = 0;
int main()
{
    std::string input;

    do
    {
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);

        if (input.size() != RGB_HEX_LENGTH)
        {
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
	else
	{
        	if (input[0] != '#' && i==0 )
        	{
            		cout << "The first character must be #" << endl;
        	}
        	else (isdigit(!input[i] || isalpha(!input[i])))
        	{
            		cout << "Invalid input" << endl;
        	}
       		i++;
	}
    } while (input.size() != RGB_HEX_LENGTH);

    cout << "Your hex color is: " << input << endl;

    return 0;
}
