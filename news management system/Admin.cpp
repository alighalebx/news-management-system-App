#include "user.h"
#include "Admin.h"
#include <iostream>
#include <string>
#include <queue>
#include <utility>
#include "News.h"
#include <fstream>
#include <vector>

static int id = 0;
void Admin::Post(News x,std::string s) {
	std::fstream idFile;
	idFile.open("id.txt", std::ios::in);
	std::string xi;
	if (idFile.peek() == std::ifstream::traits_type::eof()) {
		id = 0;
		idFile.close();
	}
	else {
		if (idFile.is_open()) {
			idFile >> xi;
			id = std::stoi(xi);
			idFile.close();
		}
	}
	id++;
	std::fstream myFile;
	myFile.open(s+".txt", std::ios::app);
	if (myFile.is_open()) {
		myFile << id<<"\n";
		myFile << x.getTitle() << "\n";
		myFile << x.getDescription()<<"\n";
		myFile << x.getimgpath() << "\n";
		myFile << x.getDate() << "\n";
		myFile << x.getRate() << "\n";
		myFile << x.getCntRate() << "\n";
		myFile << x.getTotalRate() << "\n";
		myFile.close();
	}
	
	idFile.open("id.txt", std::ios::out);
	if (idFile.is_open()) {
		idFile << id;
	}

	//file , vector , id
}void Admin::Delete(int i, std::vector<News> n, std::string s) {
	n.erase(n.begin() + i);
	std::fstream myFile;
	myFile.open(s + ".txt", std::ios::out| std::ofstream::trunc);
	for(int j=0; j<n.size();j++){
		if (myFile.is_open()) {
			myFile << std::to_string(n[j].getId()) << "\n";
			myFile << n[j].getTitle() << "\n";
			myFile << n[j].getDescription() << "\n";
			myFile << n[j].getimgpath() << "\n";
			myFile << n[j].getDate() << "\n";
			myFile << n[j].getRate() << "\n";
			myFile << n[j].getCntRate() << "\n";
			myFile << n[j].getTotalRate() << "\n";
		}

	}
	myFile.close();

}void Admin::update(std::vector<News> n, std::string s)
 {
	
	std::fstream myFile;
	myFile.open(s + ".txt", std::ios::out | std::ofstream::trunc);
	for (int j = 0; j < n.size(); j++) {
		if (myFile.is_open()) {
			myFile << std::to_string(n[j].getId()) << "\n";
			myFile << n[j].getTitle() << "\n";
			myFile << n[j].getDescription() << "\n";
			myFile << n[j].getimgpath() << "\n";
			myFile << n[j].getDate() << "\n";
			myFile << n[j].getRate() << "\n";
			myFile << n[j].getCntRate() << "\n";
			myFile << n[j].getTotalRate() << "\n";
		}

	}
	myFile.close();



} Admin::~Admin() {



}Admin::Admin() {



}
void Admin::ShowNewsDep(std::string categ) {

	display(categ);

}void Admin::ShowNews() {

	display("all");

}
void Admin::display(std::string categ) {

	/*


	while(!q.empty())
	{
	}
	*/

}
