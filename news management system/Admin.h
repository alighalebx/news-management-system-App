#pragma once
#include <iostream>
#include <string>
#include <queue>
#include <utility>
#include <map>
#include "News.h"
#include <msclr\marshal_cppstd.h>


class Admin
{
private:
	int ID;

	std::string name;
	std::map<std::string, std::queue<News>>mp;
public:

	static int cnt;

	Admin();
	void ShowNewsDep(std::string categ);
	void ShowNews();
	void Post(News,std::string);
	void Delete(int, std::vector<News>, std::string);
	void update(std::vector<News>, std::string);
	void display(std::string);
	~Admin();








};
