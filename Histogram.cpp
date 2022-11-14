#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Listing them here allows omitting std::
using std::cout, std::cin, std::endl;
using std::string, std::vector, std::max_element;


int main()
{
// Make a slot for each letter, from'a' to'z'
// Initial count set to 0 for each.
vector histogram('z' -'a' + 1, 0 );
string in_str;

cout << "Enter your text here for histogram analysis \n"<<endl;

//cin >> in_str;
//in_str = "AGH University of Science and Technology";
in_str = "test";
//
//----------------------------------------------------------------------------

for( auto c : in_str ) // c takes on successive letters from in_str
if( std::isalpha( c ) ) // isalpha( c ) returns true if c is alphanumeric
++ histogram[ std::tolower( c ) -'a' ];// ++ adds 1 to the letter position

cout << endl;
//----------------------------------------------------------------------------
for( auto c {'a' }; c <='z'; ++ c ) // c takes on codes from'a' to'z'
cout << c << " "; // Print all characters'a' to'z'

cout << endl;

	
//This shows only 1 row of stars i want columns with length of value h
//for (auto h :  histogram)
//{
//	if (h!=0)
//		cout  << "* ";
//	else 
//		cout << "  ";
//}
//

double max=*max_element(histogram.begin(),histogram.end());
//This shows rows with stars according to max histogram value so its wrong
//cout<<"Max value: "<< max << endl;
//for (double i {max}; i<=max; i--)
//{
//	if (i!=0)
//	{
//		for (auto h :  histogram)
//		{
//			if (h!=0)
//				cout  << "* ";
//			else 
//				cout << "  ";
//		}
//		cout<<endl;
//	}
//	else
//		break;
////return -1;

for (auto i = histogram.begin(); i != histogram.end(); ++i)
{
	histogram.erase(i);
	i--;
}
for (auto it = histogram.begin(); it != histogram.end(); ++it)
	cout<<"  "<< *it;
	return 0;
}
