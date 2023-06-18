#include <iostream>
using namespace std;
int main() {
  string city_name;
  string pet_name,band_name;
  cout<<"Welcome to the Band Name Generator\n";
  cout<<"What's the name of the city you grew up in?\n";
  cin>>city_name;
  cout<<"What's your pet name?\n";
  cin>>pet_name;
  band_name = city_name+" "+pet_name;
  cout<<"Your band name could be "+ band_name;
  
}