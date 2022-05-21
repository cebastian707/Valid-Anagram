#include<iostream>
#include<string>
#include<map>


bool isAnagram(std::string s, std::string t) {
	//hashmap to store s and t char values
	std::map<char, int> see;
	std::map<char, int>	tees;

	//loop through s and store its char in the map
	for (size_t i = 0; i < s.size(); i++) {
		//check if the map has the current value
		//if not set it into tje map
		if (see.find(s[i]) == see.end()) {
			see.insert({ s[i],1 });
		}
		//if we found it increment it by one
		else{
			see[s[i]]++;
		}
	}


	//know loop through the second string 
	for (size_t i = 0; i < t.size(); i++) {
		//check if the map has the current value
		//and increase by one
		if (tees.find(t[i]) == tees.end()){
			tees.insert({ t[i],1 });
		}
		//if weve already seen it incremnt the times weve seen it
		else{
			tees[t[i]]++;
		}
	}

	//base case if the sizes arent the same 
	//then it cant be an Anagram
	if (see.size() != tees.size()){
		return false;
	}



	//know loop through the maps and compare
	for (size_t i = 0; i < see.size(); i++) {
		if (see[i] != tees[i]) {
			return false;
		}
	}
	return true;
}




int main() {
	std::string s = "anagram";
	std::string t = "nagaram";

	std::cout << isAnagram(s, t) << std::endl;

	return 0;
}
