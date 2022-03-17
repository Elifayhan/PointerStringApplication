#include<iostream>
#include<cstring>
using namespace std;
void rev(string words) {
	int j = 0;
	while (words[j] != '\0')  
	{
		j++;
	}
	cout << "Reverse of the word is:\t";
	for (int i= j - 1; i >= 0; i--)
	{
		cout << words[i];
	}
}
int main() {
	string *words = new string();
	*words= "elif";
	rev(*words);  
}