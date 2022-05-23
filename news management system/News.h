#pragma once
#include <iostream>
#include <string>
#include <queue>
#include <utility>
#include <map>


class News
{
private:
	int ID;
	int cntRate;
	double totalRate = 2.5;
	std::string title;
	std::string Description;
	std::string Date;
	std::string Category;
	std::string imgpathh;
	std::deque<std::string> comms;
	std::string comment;
	double Rate = 2.5;




public:
	static int cnt;
	News(int, std::string, std::string, std::string);
	News();
	void setCategory(std::string);
	void setID(int);
	void setTitle(std::string);
	void setDescription(std::string);
	void setDate(std::string);
	void setRate(double);
	void setCntRate(int);
	void setTotalRate(double);
	double getTotalRate();
	int getCntRate();
	void setimgpath(std::string);
	int getId();
	const std:: string& getTitle() const;
	void addComment(std::string);
	std::deque<std::string> getComments();
	std::string getDescription();
	std::string getDate();
	std::string getimgpath();
	double getRate();
	void UserRate(double, double);




	~News();








};